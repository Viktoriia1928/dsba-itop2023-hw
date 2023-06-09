/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionEnglish;
    QAction *actionRussian;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *minPriceLabel;
    QLineEdit *minPriceLineEdit;
    QSlider *minPriceSlider;
    QLabel *maxPriceLabel;
    QLineEdit *maxPriceLineEdit;
    QSlider *maxPriceSlider;
    QComboBox *comboBoxCategory;
    QPushButton *pushButtonAddRow;
    QPushButton *pushButtonRemoveRow;
    QSpinBox *spinBoxRemove;
    QLabel *labelTotal;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *labelId;
    QLabel *labelIdData;
    QLabel *labelCategory;
    QLabel *labelTitle;
    QLabel *labelCategoryData;
    QLabel *labelBrand;
    QLabel *labelBrandData;
    QLabel *labelMRP;
    QLabel *labelMRPData;
    QLabel *labelPrice;
    QLabel *labelPriceData;
    QLabel *labelOffers;
    QLabel *labelOffersData;
    QLabel *labelSA;
    QLabel *labelTitleData;
    QCheckBox *checkBoxSA;
    QPushButton *addToCart;
    QLabel *label;
    QLabel *label_3;
    QTableView *tableView;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1056, 813);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionRussian = new QAction(MainWindow);
        actionRussian->setObjectName(QString::fromUtf8("actionRussian"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        minPriceLabel = new QLabel(groupBox_2);
        minPriceLabel->setObjectName(QString::fromUtf8("minPriceLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, minPriceLabel);

        minPriceLineEdit = new QLineEdit(groupBox_2);
        minPriceLineEdit->setObjectName(QString::fromUtf8("minPriceLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minPriceLineEdit->sizePolicy().hasHeightForWidth());
        minPriceLineEdit->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, minPriceLineEdit);

        minPriceSlider = new QSlider(groupBox_2);
        minPriceSlider->setObjectName(QString::fromUtf8("minPriceSlider"));
        sizePolicy1.setHeightForWidth(minPriceSlider->sizePolicy().hasHeightForWidth());
        minPriceSlider->setSizePolicy(sizePolicy1);
        minPriceSlider->setMaximum(10000);
        minPriceSlider->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, minPriceSlider);

        maxPriceLabel = new QLabel(groupBox_2);
        maxPriceLabel->setObjectName(QString::fromUtf8("maxPriceLabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, maxPriceLabel);

        maxPriceLineEdit = new QLineEdit(groupBox_2);
        maxPriceLineEdit->setObjectName(QString::fromUtf8("maxPriceLineEdit"));
        sizePolicy1.setHeightForWidth(maxPriceLineEdit->sizePolicy().hasHeightForWidth());
        maxPriceLineEdit->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, maxPriceLineEdit);

        maxPriceSlider = new QSlider(groupBox_2);
        maxPriceSlider->setObjectName(QString::fromUtf8("maxPriceSlider"));
        sizePolicy1.setHeightForWidth(maxPriceSlider->sizePolicy().hasHeightForWidth());
        maxPriceSlider->setSizePolicy(sizePolicy1);
        maxPriceSlider->setMaximum(10000);
        maxPriceSlider->setValue(10000);
        maxPriceSlider->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(9, QFormLayout::SpanningRole, maxPriceSlider);

        comboBoxCategory = new QComboBox(groupBox_2);
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->setObjectName(QString::fromUtf8("comboBoxCategory"));

        formLayout_2->setWidget(10, QFormLayout::SpanningRole, comboBoxCategory);

        pushButtonAddRow = new QPushButton(groupBox_2);
        pushButtonAddRow->setObjectName(QString::fromUtf8("pushButtonAddRow"));
        pushButtonAddRow->setEnabled(true);
        pushButtonAddRow->setAutoRepeat(false);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, pushButtonAddRow);

        pushButtonRemoveRow = new QPushButton(groupBox_2);
        pushButtonRemoveRow->setObjectName(QString::fromUtf8("pushButtonRemoveRow"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, pushButtonRemoveRow);

        spinBoxRemove = new QSpinBox(groupBox_2);
        spinBoxRemove->setObjectName(QString::fromUtf8("spinBoxRemove"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, spinBoxRemove);


        gridLayout->addWidget(groupBox_2, 4, 0, 1, 1);

        labelTotal = new QLabel(centralwidget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));

        gridLayout->addWidget(labelTotal, 5, 4, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelId = new QLabel(groupBox);
        labelId->setObjectName(QString::fromUtf8("labelId"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelId);

        labelIdData = new QLabel(groupBox);
        labelIdData->setObjectName(QString::fromUtf8("labelIdData"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelIdData);

        labelCategory = new QLabel(groupBox);
        labelCategory->setObjectName(QString::fromUtf8("labelCategory"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCategory);

        labelTitle = new QLabel(groupBox);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelTitle);

        labelCategoryData = new QLabel(groupBox);
        labelCategoryData->setObjectName(QString::fromUtf8("labelCategoryData"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelCategoryData);

        labelBrand = new QLabel(groupBox);
        labelBrand->setObjectName(QString::fromUtf8("labelBrand"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelBrand);

        labelBrandData = new QLabel(groupBox);
        labelBrandData->setObjectName(QString::fromUtf8("labelBrandData"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelBrandData);

        labelMRP = new QLabel(groupBox);
        labelMRP->setObjectName(QString::fromUtf8("labelMRP"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelMRP);

        labelMRPData = new QLabel(groupBox);
        labelMRPData->setObjectName(QString::fromUtf8("labelMRPData"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelMRPData);

        labelPrice = new QLabel(groupBox);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelPrice);

        labelPriceData = new QLabel(groupBox);
        labelPriceData->setObjectName(QString::fromUtf8("labelPriceData"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelPriceData);

        labelOffers = new QLabel(groupBox);
        labelOffers->setObjectName(QString::fromUtf8("labelOffers"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelOffers);

        labelOffersData = new QLabel(groupBox);
        labelOffersData->setObjectName(QString::fromUtf8("labelOffersData"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelOffersData);

        labelSA = new QLabel(groupBox);
        labelSA->setObjectName(QString::fromUtf8("labelSA"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelSA);

        labelTitleData = new QLabel(groupBox);
        labelTitleData->setObjectName(QString::fromUtf8("labelTitleData"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelTitleData->sizePolicy().hasHeightForWidth());
        labelTitleData->setSizePolicy(sizePolicy2);
        labelTitleData->setMinimumSize(QSize(0, 0));
        labelTitleData->setMaximumSize(QSize(16777215, 16777215));
        labelTitleData->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTitleData);

        checkBoxSA = new QCheckBox(groupBox);
        checkBoxSA->setObjectName(QString::fromUtf8("checkBoxSA"));

        formLayout->setWidget(7, QFormLayout::FieldRole, checkBoxSA);

        addToCart = new QPushButton(groupBox);
        addToCart->setObjectName(QString::fromUtf8("addToCart"));
        addToCart->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, addToCart);


        gridLayout->addWidget(groupBox, 2, 5, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 4, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 8, 9, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tableView, 2, 0, 1, 5);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 4, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1056, 37));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuHelp->addAction(actionAbout);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionRussian);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actionRussian->setText(QCoreApplication::translate("MainWindow", "Russian", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Filters and Actions", nullptr));
        minPriceLabel->setText(QCoreApplication::translate("MainWindow", "Min price", nullptr));
        minPriceLineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        maxPriceLabel->setText(QCoreApplication::translate("MainWindow", "Max price", nullptr));
        maxPriceLineEdit->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        comboBoxCategory->setItemText(0, QCoreApplication::translate("MainWindow", "All categories", nullptr));
        comboBoxCategory->setItemText(1, QCoreApplication::translate("MainWindow", "Bath & Shower", nullptr));
        comboBoxCategory->setItemText(2, QCoreApplication::translate("MainWindow", "Detergents & Dishwash", nullptr));
        comboBoxCategory->setItemText(3, QCoreApplication::translate("MainWindow", "Fragrance", nullptr));
        comboBoxCategory->setItemText(4, QCoreApplication::translate("MainWindow", "Grocery & Gourmet Foods", nullptr));
        comboBoxCategory->setItemText(5, QCoreApplication::translate("MainWindow", "Hair Care", nullptr));
        comboBoxCategory->setItemText(6, QCoreApplication::translate("MainWindow", "Skin Care", nullptr));

        comboBoxCategory->setCurrentText(QCoreApplication::translate("MainWindow", "All categories", nullptr));
        comboBoxCategory->setPlaceholderText(QString());
        pushButtonAddRow->setText(QCoreApplication::translate("MainWindow", "Add product", nullptr));
        pushButtonRemoveRow->setText(QCoreApplication::translate("MainWindow", "Remove product", nullptr));
        labelTotal->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Product Card", nullptr));
        labelId->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        labelIdData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelCategory->setText(QCoreApplication::translate("MainWindow", "Category:", nullptr));
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Product Title:", nullptr));
        labelCategoryData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelBrand->setText(QCoreApplication::translate("MainWindow", "Brand:", nullptr));
        labelBrandData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelMRP->setText(QCoreApplication::translate("MainWindow", "MRP:", nullptr));
        labelMRPData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelPrice->setText(QCoreApplication::translate("MainWindow", "Price:", nullptr));
        labelPriceData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelOffers->setText(QCoreApplication::translate("MainWindow", "Offers:", nullptr));
        labelOffersData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        labelSA->setText(QCoreApplication::translate("MainWindow", "In stock", nullptr));
        labelTitleData->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        checkBoxSA->setText(QString());
        addToCart->setText(QCoreApplication::translate("MainWindow", "Add to cart", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your cart:", nullptr));
        label_3->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("MainWindow", "Language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
