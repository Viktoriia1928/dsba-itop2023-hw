#include "addrowdialog.h"
#include "ui_addrowdialog.h"

AddRowDialog::AddRowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRowDialog)
{

    // if (!existingRow.isEmpty())
    // {
    //     if (existingRow[1].toBool())
    //     {
    //         ui->checkBoxSurvived->setCheckState(Qt::Checked);

    //     }
    //     else
    //     {

    //         ui->checkBoxSurvived->setCheckState(Qt::Unchecked);
    //     }

    //     ui->lineEditName->setText(existingRow[3].toString());
    // }
    ui->setupUi(this);
}

AddRowDialog::~AddRowDialog()
{
    delete ui;
}


QList<QVariant> AddRowDialog::getDataRow()
{
    QList<QVariant> dataRow;
    dataRow.append(ui->lineEditID->text());
    dataRow.append(ui->comboBoxCategory->currentText());
    dataRow.append(ui->lineEditTitle->text());
    dataRow.append(ui->lineEditBrand->text());
    dataRow.append(ui->spinBoxMRP->value());
    dataRow.append(ui->spinBoxPrice->value());
    dataRow.append(ui->lineEditOffers->text());
    dataRow.append(ui->checkBoxStock->isChecked());
    // additional data checks
    // return success / failure
    // throw an exception

    return dataRow;
}
