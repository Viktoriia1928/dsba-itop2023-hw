/********************************************************************************
** Form generated from reading UI file 'addrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROWDIALOG_H
#define UI_ADDROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddRowDialog
{
public:
    QFormLayout *formLayout;
    QLabel *labelID;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditID;
    QLabel *labelCategory;
    QComboBox *comboBoxCategory;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QLabel *labelBrand;
    QLabel *labelMRP;
    QSpinBox *spinBoxMRP;
    QLabel *labelPrice;
    QSpinBox *spinBoxPrice;
    QLineEdit *lineEditOffers;
    QLabel *labelOffers;
    QLabel *labelStock;
    QCheckBox *checkBoxStock;
    QLineEdit *lineEditBrand;

    void setupUi(QDialog *AddRowDialog)
    {
        if (AddRowDialog->objectName().isEmpty())
            AddRowDialog->setObjectName(QString::fromUtf8("AddRowDialog"));
        AddRowDialog->resize(485, 307);
        formLayout = new QFormLayout(AddRowDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelID = new QLabel(AddRowDialog);
        labelID->setObjectName(QString::fromUtf8("labelID"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelID);

        buttonBox = new QDialogButtonBox(AddRowDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(8, QFormLayout::SpanningRole, buttonBox);

        lineEditID = new QLineEdit(AddRowDialog);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditID);

        labelCategory = new QLabel(AddRowDialog);
        labelCategory->setObjectName(QString::fromUtf8("labelCategory"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCategory);

        comboBoxCategory = new QComboBox(AddRowDialog);
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->setObjectName(QString::fromUtf8("comboBoxCategory"));
        comboBoxCategory->setMinimumSize(QSize(200, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxCategory);

        labelTitle = new QLabel(AddRowDialog);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelTitle);

        lineEditTitle = new QLineEdit(AddRowDialog);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditTitle);

        labelBrand = new QLabel(AddRowDialog);
        labelBrand->setObjectName(QString::fromUtf8("labelBrand"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelBrand);

        labelMRP = new QLabel(AddRowDialog);
        labelMRP->setObjectName(QString::fromUtf8("labelMRP"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelMRP);

        spinBoxMRP = new QSpinBox(AddRowDialog);
        spinBoxMRP->setObjectName(QString::fromUtf8("spinBoxMRP"));
        spinBoxMRP->setMinimum(1);
        spinBoxMRP->setMaximum(10000);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxMRP);

        labelPrice = new QLabel(AddRowDialog);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelPrice);

        spinBoxPrice = new QSpinBox(AddRowDialog);
        spinBoxPrice->setObjectName(QString::fromUtf8("spinBoxPrice"));
        spinBoxPrice->setMinimum(1);
        spinBoxPrice->setMaximum(10000);

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBoxPrice);

        lineEditOffers = new QLineEdit(AddRowDialog);
        lineEditOffers->setObjectName(QString::fromUtf8("lineEditOffers"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditOffers);

        labelOffers = new QLabel(AddRowDialog);
        labelOffers->setObjectName(QString::fromUtf8("labelOffers"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelOffers);

        labelStock = new QLabel(AddRowDialog);
        labelStock->setObjectName(QString::fromUtf8("labelStock"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelStock);

        checkBoxStock = new QCheckBox(AddRowDialog);
        checkBoxStock->setObjectName(QString::fromUtf8("checkBoxStock"));

        formLayout->setWidget(7, QFormLayout::FieldRole, checkBoxStock);

        lineEditBrand = new QLineEdit(AddRowDialog);
        lineEditBrand->setObjectName(QString::fromUtf8("lineEditBrand"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditBrand);


        retranslateUi(AddRowDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddRowDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddRowDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddRowDialog);
    } // setupUi

    void retranslateUi(QDialog *AddRowDialog)
    {
        AddRowDialog->setWindowTitle(QCoreApplication::translate("AddRowDialog", "Dialog", nullptr));
        labelID->setText(QCoreApplication::translate("AddRowDialog", "ID:", nullptr));
        labelCategory->setText(QCoreApplication::translate("AddRowDialog", "Category:", nullptr));
        comboBoxCategory->setItemText(0, QCoreApplication::translate("AddRowDialog", "Bath & Shower", nullptr));
        comboBoxCategory->setItemText(1, QCoreApplication::translate("AddRowDialog", "Detergents & Dishwash", nullptr));
        comboBoxCategory->setItemText(2, QCoreApplication::translate("AddRowDialog", "Fragrance", nullptr));
        comboBoxCategory->setItemText(3, QCoreApplication::translate("AddRowDialog", "Grocery & Gourmet Foods", nullptr));
        comboBoxCategory->setItemText(4, QCoreApplication::translate("AddRowDialog", "Hair Care", nullptr));
        comboBoxCategory->setItemText(5, QCoreApplication::translate("AddRowDialog", "Skin Care", nullptr));

        labelTitle->setText(QCoreApplication::translate("AddRowDialog", "Title:", nullptr));
        labelBrand->setText(QCoreApplication::translate("AddRowDialog", "Brand:", nullptr));
        labelMRP->setText(QCoreApplication::translate("AddRowDialog", "MRP:", nullptr));
        labelPrice->setText(QCoreApplication::translate("AddRowDialog", "Price:", nullptr));
        labelOffers->setText(QCoreApplication::translate("AddRowDialog", "Offers:", nullptr));
        labelStock->setText(QCoreApplication::translate("AddRowDialog", "In stock:", nullptr));
        checkBoxStock->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddRowDialog: public Ui_AddRowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROWDIALOG_H
