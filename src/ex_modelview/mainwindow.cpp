#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addrowdialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QTextStream>
#include <QSlider>
#include <iostream>
#include <QStringListModel>

const int NAME_COLUMN = 3;

QString loadCurrentFolderFromFile()
{
    QFile inputFile("./settings_file.txt");
    if (!inputFile.open(QFile::ReadOnly | QFile::Text))
    {
        return QString("");
    }
    QTextStream inputStream(&inputFile);

    return inputStream.readLine(); 
}

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _model = new ExampleModel(this);
    _aboutDialog = new AboutDialog(this);
    _proxy = new MyProxy(this);
    _proxy->setSourceModel(_model);
    _translator = new QTranslator(this);
    cart = new QStringList();
    price = 0;
    ui->tableView->setModel(_proxy);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setWordWrap(true);
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(1);
    ui->tableView->hideColumn(4);
    ui->tableView->hideColumn(6);
    ui->tableView->setColumnWidth(2, 250);

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);


//    ui->listView->setModel(_proxy);
//    ui->listView->setModelColumn(3);

    QObject::connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::openDataFile);
    QObject::connect(ui->actionSave, &QAction::triggered, this, &MainWindow::saveFile);
    QObject::connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::showAboutDialog);
    QObject::connect(ui->actionEnglish, &QAction::triggered, this, &MainWindow::translateEnglish);
    QObject::connect(ui->actionRussian, &QAction::triggered, this, &MainWindow::translateRussian);
    QObject::connect(ui->pushButtonAddRow, &QPushButton::clicked, this, &MainWindow::openAddRowDialog);
    QObject::connect(ui->pushButtonRemoveRow, &QPushButton::clicked, this, &MainWindow::removeModelRow);
    //QObject::connect(ui->listView, &QAbstractItemView::clicked, this, &MainWindow::highlightDataItem);
    QObject::connect(ui->tableView, &QAbstractItemView::clicked, this, &MainWindow::highlightDataItem);

    QObject::connect(ui->minPriceSlider, &QSlider::valueChanged, this, &MainWindow::setMinFilterPrice);
    QObject::connect(ui->minPriceLineEdit, &QLineEdit::textChanged, this, &MainWindow::setMinFilterPriceString);
    QObject::connect(ui->maxPriceSlider, &QSlider::valueChanged, this, &MainWindow::setMaxFilterPrice);
    QObject::connect(ui->maxPriceLineEdit, &QLineEdit::textChanged, this, &MainWindow::setMaxFilterPriceString);
    QObject::connect(ui->checkBoxSA, &QCheckBox::clicked, this, &MainWindow::setStock);
    QObject::connect(ui->comboBoxCategory, &QComboBox::currentTextChanged, this, &MainWindow::setCategory);
    QObject::connect(ui->addToCart, &QPushButton::clicked, this, &MainWindow::addToCart);

    // ui->listView->selectionModel
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QObject::connect(selectionModel, &QItemSelectionModel::currentRowChanged, this, &MainWindow::rowChangedSlot);

    //QObject::connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addButtonSlot);

    _currentFolder = loadCurrentFolderFromFile();
}


void MainWindow::translateEnglish()
{
    qApp->removeTranslator(_translator);
    ui->retranslateUi(this);
}

void MainWindow::translateRussian()
{
    if (_translator->load("ex_modelview_ru"))
        qApp->installTranslator(_translator);
    ui->retranslateUi(this);
}

void MainWindow::rowChangedSlot(QModelIndex current, QModelIndex previous)
{
    highlightDataItem(current);
}

void MainWindow::setMinFilterPrice(int value)
{
    // int newMinAge = ui->lineEdit->text().toInt();
    //std::cout << value << std::endl;
    ui->minPriceLineEdit->setText(QString::number(value));
    _proxy->setMinPrice(value);
    ui->tableView->resizeRowsToContents();
}

void MainWindow::setCategory(QString category)
{
    _proxy->setCategory(category);
    ui->tableView->resizeRowsToContents();
}

void MainWindow::setMinFilterPriceString(QString value)
{
    //std::cout << value.toInt() << std::endl;
    // ui->minAgeLineEdit->setText(value);
    ui->minPriceSlider->setValue(value.toInt());
    _proxy->setMinPrice(value.toInt());
    ui->tableView->resizeRowsToContents();
}

void MainWindow::setMaxFilterPrice(int value)
{
    // int newMinAge = ui->lineEdit->text().toInt();
    //std::cout << value << std::endl;
    ui->maxPriceLineEdit->setText(QString::number(value));
    _proxy->setMaxPrice(value);
    ui->tableView->resizeRowsToContents();
}

void MainWindow::setMaxFilterPriceString(QString value)
{
    //std::cout << value.toInt() << std::endl;
    // ui->minAgeLineEdit->setText(value);
    ui->maxPriceSlider->setValue(value.toInt());
    _proxy->setMaxPrice(value.toInt());
    ui->tableView->resizeRowsToContents();
}

QString extractDir(const QString& file)
{
    return file;
}

void saveCurrentFolderToFile(const QString& _currentFolder)
{
    QFile outputFile("./settings_file.txt");
    if (!outputFile.open(QFile::WriteOnly | QFile::Text))
    {
        return;
    }
    QTextStream outputStream(&outputFile);
    outputStream << _currentFolder;
}

void MainWindow::showAboutDialog()
{
    _aboutDialog->show();
}

void MainWindow::openDataFile()
{
    if (_currentFolder.isEmpty())
    {
        _currentFolder = ".";
    }

    QString fileName = QFileDialog::getOpenFileName(this, "Open data file", _currentFolder, "*.csv");
    // QMessageBox::warning(this, "Error", fileName, QMessageBox::Ok);

    _currentFolder = fileName;
    saveCurrentFolderToFile(_currentFolder);


    if (!_model->reloadDataFromFile(fileName))
    {
        QMessageBox::warning(this, "Error", "Cannot open file", QMessageBox::Ok);
    }
    else {
        ui->actionSave->setEnabled(true);
        ui->tableView->resizeRowsToContents();
    }
}

void MainWindow::saveFile() {
    if (!_model->saveDataToFile(_currentFolder))
    {
        QMessageBox::warning(this, "Error", "Cannot save file", QMessageBox::Ok);
    }
    else {
        QMessageBox::information(this, "Success", "Saved file", QMessageBox::Ok);
    }
}

void MainWindow::highlightDataItem(const QModelIndex& clickIndex)
{
    int row = clickIndex.row();
    QModelIndex index = _proxy->index(row, 2);
    ui->labelTitleData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 0);
    ui->labelIdData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 1);
    ui->labelCategoryData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 3);
    ui->labelBrandData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 4);
    ui->labelMRPData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 5);
    ui->labelPriceData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 6);
    ui->labelOffersData->setText(_proxy->data(index).toString());
    index = _proxy->index(row, 7);
    ui->checkBoxSA->setChecked(_proxy->data(index, Qt::CheckStateRole) == Qt::Checked);
    ui->addToCart->setEnabled(_proxy->data(index, Qt::CheckStateRole) == Qt::Checked);
}


void MainWindow::openAddRowDialog()
{
    AddRowDialog dialog;
    if (dialog.exec())
    {
        QList<QVariant> dataRow = dialog.getDataRow();
        // _model->setData(row, 0, dataRow[0]);
        // _model->setData(row, 1, dataRow[1]);
        _model->appendRow(dataRow);
        ui->tableView->resizeRowsToContents();
    }
}

void MainWindow::removeModelRow()
{
    int rowIndex = ui->spinBoxRemove->value();
    //QModelIndex removeIndex = ui->tableView->currentIndex();

    //int rowToRemove = removeIndex.row();
    if (!_model->removeRow(rowIndex - 1))
    {
        QMessageBox::warning(this, "Error", "Incorrect index (doesn't exist)", QMessageBox::Ok);
    }
}


// void MainWindow::setName(QString newText)
// {
//     QModelIndex currentItemProxy = ui->tableView->currentIndex();
//     QModelIndex currentItem = _proxy->mapToSource(currentItemProxy);
//     _model->setData(currentItem, newText);
// }

void MainWindow::setStock(bool checked)
{
    QModelIndex currentItem = ui->tableView->currentIndex();
    int row = currentItem.row();

    QModelIndex nameItemProxy = _proxy->index(row, 7);
    // _proxy->setData(nameItemProxy, newText);

    QModelIndex nameItemOriginal = _proxy->mapToSource(nameItemProxy);

    _model->setData(nameItemOriginal, checked);
}

void MainWindow::addToCart()
{
    QModelIndex currentItem = ui->tableView->currentIndex();
    int row = currentItem.row();
    cart->append(_proxy->data(_proxy->index(row, 2)).toString());
    double thisprice = _proxy->data(_proxy->index(row, 5)).toDouble();
    QString offer = _proxy->data(_proxy->index(row, 6)).toString();
    if (offer.contains("%")) {
        thisprice = thisprice * (1 - (offer.replace("%", "").replace(" ", "").toDouble() / 100));
    }
    price += thisprice;
    ui->listView->setModel(new QStringListModel(*cart, NULL));
    ui->labelTotal->setText("Total: " + QString::number(price));
}


MainWindow::~MainWindow()
{
    delete ui;
}
