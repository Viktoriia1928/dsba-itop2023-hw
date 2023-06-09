#include "myproxy.h"

MyProxy::MyProxy(QObject* parent)
    : QSortFilterProxyModel(parent)
{
    _category = "All categories";
    _minPrice = 0;
    _maxPrice = 10000;
    _priceFilterEnabled = true;
}

void MyProxy::setMinPrice(int minPrice)
{
    this->_minPrice = minPrice;
    invalidateFilter();
}

void MyProxy::setMaxPrice(int maxPrice)
{
    this->_maxPrice = maxPrice;
    invalidateFilter();
}

void MyProxy::setCategory(QString category)
{
    this->_category = category;
    invalidateFilter();
}

bool MyProxy::priceFitsFilter(QVariant dataPrice) const
{
    if (_priceFilterEnabled)
    {
        return _minPrice <= dataPrice.toInt() && dataPrice.toInt() < _maxPrice;
    }
    return true;
}

bool MyProxy::filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const
{
    QModelIndex index0 = sourceModel()->index(sourceRow, 0, sourceParent);
    QVariant data0 = sourceModel()->data(index0);
    bool accepts0 = data0.toString().contains(filterRegularExpression());
    
    QModelIndex indexPrice = sourceModel()->index(sourceRow, 5, sourceParent);
    QVariant dataPrice = sourceModel()->data(indexPrice);
    bool acceptPrice = priceFitsFilter(dataPrice);

    QModelIndex indexCategory = sourceModel()->index(sourceRow, 1, sourceParent);
    QVariant dataCategory = sourceModel()->data(indexCategory);
    bool acceptCategory = dataCategory.toString() == _category || _category == "All categories";

    return accepts0 && acceptPrice && acceptCategory;
}

// bool MyProxy::lessThan(const QModelIndex &left,
//                                       const QModelIndex &right) const
// {
//     QVariant leftData = sourceModel()->data(left);
//     QVariant rightData = sourceModel()->data(right);

//     return leftData.toString() < rightData.toString();
// }