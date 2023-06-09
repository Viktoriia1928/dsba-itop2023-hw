/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *labelAbout;
    QWidget *widgetLogoContainer;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(526, 290);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        labelAbout = new QLabel(AboutDialog);
        labelAbout->setObjectName(QString::fromUtf8("labelAbout"));
        labelAbout->setWordWrap(true);

        gridLayout->addWidget(labelAbout, 0, 0, 1, 1);

        widgetLogoContainer = new QWidget(AboutDialog);
        widgetLogoContainer->setObjectName(QString::fromUtf8("widgetLogoContainer"));
        widgetLogoContainer->setMinimumSize(QSize(200, 200));
        widgetLogoContainer->setMaximumSize(QSize(200, 200));
        widgetLogoContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        horizontalLayout = new QHBoxLayout(widgetLogoContainer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addWidget(widgetLogoContainer, 0, 1, 1, 1);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        labelAbout->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-weight:700;\">QtShop</span></p><p><br/></p><p>This is a project for managing the dataset of Amazon. It showcases various features of Qt, such as dialogs, custom widgets, data models.</p><p><br/></p><p>Author: Viktoriia Korableva</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
