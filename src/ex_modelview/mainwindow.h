#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myproxy.h"
#include "examplemodel.h"
#include "aboutdialog.h"
#include <QTranslator>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void openDataFile();
    void saveFile();
    void addToCart();
    void openAddRowDialog();
    void removeModelRow();
    void highlightDataItem(const QModelIndex& index);
    void showAboutDialog();

    void setMaxFilterPrice(int value);
    void setMaxFilterPriceString(QString value);
    void setMinFilterPrice(int value);
    void setMinFilterPriceString(QString value);
    void setCategory(QString value);
    void rowChangedSlot(QModelIndex current, QModelIndex previous);

    void setStock(bool checked);

    void translateEnglish();
    void translateRussian();

private:
    MyProxy* _proxy;
    Ui::MainWindow* ui;
    ExampleModel* _model;
    QStringList* cart;
    int price;
    AboutDialog* _aboutDialog;

    QString _currentFolder;
    QList<QWidget*> _extraButtons;
    QTranslator* _translator;
};
#endif// MAINWINDOW_H
