#include "examplemodel.h"
#include <QFile>
#include <QTextStream>
#include <iostream>

ExampleModel::ExampleModel(QObject* parent)
    : QAbstractTableModel(parent)
{
    _header.append("ID");
    _header.append("Category");
    _header.append("Product Title");
    _header.append("Brand");
    _header.append("MRP");
    _header.append("Price");
    _header.append("Offers");
    _header.append("In stock");

}

QVariant ExampleModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal)
    {
        if (role == Qt::DisplayRole)
        {
            return _header[section];
        }
    }
    return QVariant();
}

int ExampleModel::rowCount(const QModelIndex& parent) const
{
    if (parent.isValid())
        return 0;


    return _data.size();
}

int ExampleModel::columnCount(const QModelIndex& parent) const
{
    if (parent.isValid())
        return 0;

    return _header.size();
}

QVariant ExampleModel::data(const QModelIndex& index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == Qt::DisplayRole || role == Qt::EditRole)
    {
        int row = index.row();
        int column = index.column();
        if (index.column() != 7)
            return _data.at(row).at(column);
    }
    else if (role == Qt::CheckStateRole)
    {
        int row = index.row();
        int column = index.column();
        if (index.column() == 7)
            return _data.at(row).at(column).toBool() ? Qt::Checked : Qt::Unchecked;
    }
    return QVariant();
}

bool ExampleModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
    if (data(index, role) != value)
    {
        int row = index.row();
        int column = index.column();
        if (0 <= row && row < rowCount() && 0 <= column && columnCount())
        {
            _data[row][column] = value;
            emit dataChanged(index, index, {role});
            return true;
        }
        
        return false;
    }
    return false;
}

Qt::ItemFlags ExampleModel::flags(const QModelIndex& index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}


bool ExampleModel::reloadDataFromFile(const QString& path)
{

    QList<QList<QVariant>> newData;

    QFile inputFile(path);
    if (!inputFile.open(QFile::ReadOnly | QFile::Text))
    {
        return false;
    }
    QTextStream inputStream(&inputFile);

    // header
    QString firstline = inputStream.readLine();
    // _header = firstline.split(",");

    while (!inputStream.atEnd())
    {
        QString line = inputStream.readLine();

        QList<QVariant> dataRow;
        QList<QString> items = line.split(";");
        for (int i = 0; i < items.size(); ++i)
        {
            //std::cout << items.size() << std::endl;
            QVariant value;
            if (i == 4 || i == 5)
            {
                value = items[i].split(".")[0].toInt();
                if (value.toInt() < 1) {
                    value = 1;
                }
            }
            else if (i == 7) {
                if (items[i] == "YES" || items[i] == "true") {
                    value = true;
                }
                else {
                    value = false;
                }
            }
            else
            {
                value = items[i];
            }
            
            dataRow.append(value);
        }
        newData.append(dataRow);
    }
    inputFile.close();

    beginResetModel();
    _data = newData;
    endResetModel();
    return true;
}

bool ExampleModel::saveDataToFile(const QString& path)
{

    QFile outputFile(path);
    if (!outputFile.open(QFile::WriteOnly | QFile::Text))
    {
        return false;
    }
    QTextStream outputStream(&outputFile);


    outputStream << "Uniq Id;Category;Product Title;Brand;Mrp;Price;Offers;Stock Availability\n";
    for (const QList<QVariant>& row: _data)
    {
        bool first = true;
        for (const QVariant& item: row)
        {
            if (!first)
            {
                outputStream << ";";
            }
            outputStream << item.toString();
            first = false;
        }
        outputStream << "\n";
    }
    return true;
}

void ExampleModel::appendRow(const QList<QVariant>& newRow)
{
    beginInsertRows(QModelIndex(), _data.size(), _data.size());
    _data.append(newRow);
    endInsertRows();
}


bool ExampleModel::removeRow(int rowIndex)
{
    if (rowIndex < 0 || rowIndex >= _data.size())
    {
        return false;
    }
    //std::cout << rowIndex;
    beginRemoveRows(QModelIndex(), rowIndex, rowIndex);
    _data.removeAt(rowIndex);
    endRemoveRows();
    return true;
}
