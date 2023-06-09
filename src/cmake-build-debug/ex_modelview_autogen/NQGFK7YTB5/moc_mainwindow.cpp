/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ex_modelview/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "openDataFile"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "saveFile"
QT_MOC_LITERAL(4, 34, 9), // "addToCart"
QT_MOC_LITERAL(5, 44, 16), // "openAddRowDialog"
QT_MOC_LITERAL(6, 61, 14), // "removeModelRow"
QT_MOC_LITERAL(7, 76, 17), // "highlightDataItem"
QT_MOC_LITERAL(8, 94, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 106, 5), // "index"
QT_MOC_LITERAL(10, 112, 15), // "showAboutDialog"
QT_MOC_LITERAL(11, 128, 17), // "setMaxFilterPrice"
QT_MOC_LITERAL(12, 146, 5), // "value"
QT_MOC_LITERAL(13, 152, 23), // "setMaxFilterPriceString"
QT_MOC_LITERAL(14, 176, 17), // "setMinFilterPrice"
QT_MOC_LITERAL(15, 194, 23), // "setMinFilterPriceString"
QT_MOC_LITERAL(16, 218, 11), // "setCategory"
QT_MOC_LITERAL(17, 230, 14), // "rowChangedSlot"
QT_MOC_LITERAL(18, 245, 7), // "current"
QT_MOC_LITERAL(19, 253, 8), // "previous"
QT_MOC_LITERAL(20, 262, 8), // "setStock"
QT_MOC_LITERAL(21, 271, 7), // "checked"
QT_MOC_LITERAL(22, 279, 16), // "translateEnglish"
QT_MOC_LITERAL(23, 296, 16) // "translateRussian"

    },
    "MainWindow\0openDataFile\0\0saveFile\0"
    "addToCart\0openAddRowDialog\0removeModelRow\0"
    "highlightDataItem\0QModelIndex\0index\0"
    "showAboutDialog\0setMaxFilterPrice\0"
    "value\0setMaxFilterPriceString\0"
    "setMinFilterPrice\0setMinFilterPriceString\0"
    "setCategory\0rowChangedSlot\0current\0"
    "previous\0setStock\0checked\0translateEnglish\0"
    "translateRussian"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    1,   99,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      14,    1,  109,    2, 0x08 /* Private */,
      15,    1,  112,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      17,    2,  118,    2, 0x08 /* Private */,
      20,    1,  123,    2, 0x08 /* Private */,
      22,    0,  126,    2, 0x08 /* Private */,
      23,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,   18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openDataFile(); break;
        case 1: _t->saveFile(); break;
        case 2: _t->addToCart(); break;
        case 3: _t->openAddRowDialog(); break;
        case 4: _t->removeModelRow(); break;
        case 5: _t->highlightDataItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->showAboutDialog(); break;
        case 7: _t->setMaxFilterPrice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setMaxFilterPriceString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setMinFilterPrice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setMinFilterPriceString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setCategory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->rowChangedSlot((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 13: _t->setStock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->translateEnglish(); break;
        case 15: _t->translateRussian(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
