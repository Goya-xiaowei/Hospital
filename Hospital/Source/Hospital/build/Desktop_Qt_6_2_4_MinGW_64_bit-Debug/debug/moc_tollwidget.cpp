/****************************************************************************
** Meta object code from reading C++ file 'tollwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/fend/uitoll/tollwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tollwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TollWidget_t {
    const uint offsetsAndSize[30];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TollWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TollWidget_t qt_meta_stringdata_TollWidget = {
    {
QT_MOC_LITERAL(0, 10), // "TollWidget"
QT_MOC_LITERAL(11, 17), // "onBtnLeftPrevious"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 13), // "onBtnLeftNext"
QT_MOC_LITERAL(44, 13), // "onBtnLeftHome"
QT_MOC_LITERAL(58, 12), // "onBtnLeftEnd"
QT_MOC_LITERAL(71, 18), // "onBtnRightPrevious"
QT_MOC_LITERAL(90, 14), // "onBtnRightNext"
QT_MOC_LITERAL(105, 14), // "onBtnRightHome"
QT_MOC_LITERAL(120, 13), // "onBtnRightEnd"
QT_MOC_LITERAL(134, 17), // "loadTreeViewRight"
QT_MOC_LITERAL(152, 11), // "QModelIndex"
QT_MOC_LITERAL(164, 5), // "index"
QT_MOC_LITERAL(170, 13), // "computeChange"
QT_MOC_LITERAL(184, 13) // "onBtnCheckout"

    },
    "TollWidget\0onBtnLeftPrevious\0\0"
    "onBtnLeftNext\0onBtnLeftHome\0onBtnLeftEnd\0"
    "onBtnRightPrevious\0onBtnRightNext\0"
    "onBtnRightHome\0onBtnRightEnd\0"
    "loadTreeViewRight\0QModelIndex\0index\0"
    "computeChange\0onBtnCheckout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TollWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    1,   88,    2, 0x08,    9 /* Private */,
      13,    0,   91,    2, 0x08,   11 /* Private */,
      14,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TollWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TollWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onBtnLeftPrevious(); break;
        case 1: _t->onBtnLeftNext(); break;
        case 2: _t->onBtnLeftHome(); break;
        case 3: _t->onBtnLeftEnd(); break;
        case 4: _t->onBtnRightPrevious(); break;
        case 5: _t->onBtnRightNext(); break;
        case 6: _t->onBtnRightHome(); break;
        case 7: _t->onBtnRightEnd(); break;
        case 8: _t->loadTreeViewRight((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->computeChange(); break;
        case 10: _t->onBtnCheckout(); break;
        default: ;
        }
    }
}

const QMetaObject TollWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TollWidget.offsetsAndSize,
    qt_meta_data_TollWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TollWidget_t
, QtPrivate::TypeAndForceComplete<TollWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TollWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TollWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TollWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TollWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
