#ifndef MYPROXY_H
#define MYPROXY_H

#include <QSortFilterProxyModel>

class MyProxy : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    explicit MyProxy(QObject *parent = nullptr);

    void setMinPrice(int minPrice);
    void setMaxPrice(int maxPrice);
    void setCategory(QString category);
    bool priceFitsFilter(QVariant dataPrice) const;
    bool filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const override;

private:
    int _minPrice;
    int _maxPrice;
    QString _category;
    bool _priceFilterEnabled;
};

#endif // MYPROXY_H
