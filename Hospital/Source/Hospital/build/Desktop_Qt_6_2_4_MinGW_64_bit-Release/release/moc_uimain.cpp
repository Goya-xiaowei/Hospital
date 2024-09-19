/****************************************************************************
** Meta object code from reading C++ file 'uimain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/fend/uimain/uimain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uimain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UiMain_t {
    const uint offsetsAndSize[40];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_UiMain_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_UiMain_t qt_meta_stringdata_UiMain = {
    {
QT_MOC_LITERAL(0, 6), // "UiMain"
QT_MOC_LITERAL(7, 20), // "btnManageClickSignal"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 7), // "btnQuit"
QT_MOC_LITERAL(37, 25), // "on_btnCloseWidget_clicked"
QT_MOC_LITERAL(63, 23), // "on_btnMaxWidget_clicked"
QT_MOC_LITERAL(87, 23), // "on_btnMinWidget_clicked"
QT_MOC_LITERAL(111, 13), // "onButtonClick"
QT_MOC_LITERAL(125, 4), // "text"
QT_MOC_LITERAL(130, 6), // "upTime"
QT_MOC_LITERAL(137, 9), // "onBtnHome"
QT_MOC_LITERAL(147, 11), // "onBtnSystem"
QT_MOC_LITERAL(159, 21), // "onBtnOutpatientManage"
QT_MOC_LITERAL(181, 11), // "onBtnDoctor"
QT_MOC_LITERAL(193, 9), // "onBtnToll"
QT_MOC_LITERAL(203, 20), // "onBtnInpatientManage"
QT_MOC_LITERAL(224, 19), // "onBtnPharmacyManage"
QT_MOC_LITERAL(244, 15), // "onBtnDrugManage"
QT_MOC_LITERAL(260, 20), // "onBtnFinancialManage"
QT_MOC_LITERAL(281, 9) // "onBtnQuit"

    },
    "UiMain\0btnManageClickSignal\0\0btnQuit\0"
    "on_btnCloseWidget_clicked\0"
    "on_btnMaxWidget_clicked\0on_btnMinWidget_clicked\0"
    "onButtonClick\0text\0upTime\0onBtnHome\0"
    "onBtnSystem\0onBtnOutpatientManage\0"
    "onBtnDoctor\0onBtnToll\0onBtnInpatientManage\0"
    "onBtnPharmacyManage\0onBtnDrugManage\0"
    "onBtnFinancialManage\0onBtnQuit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiMain[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    0,  117,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  118,    2, 0x08,    3 /* Private */,
       5,    0,  119,    2, 0x08,    4 /* Private */,
       6,    0,  120,    2, 0x08,    5 /* Private */,
       7,    1,  121,    2, 0x08,    6 /* Private */,
       9,    0,  124,    2, 0x08,    8 /* Private */,
      10,    0,  125,    2, 0x08,    9 /* Private */,
      11,    0,  126,    2, 0x08,   10 /* Private */,
      12,    0,  127,    2, 0x08,   11 /* Private */,
      13,    0,  128,    2, 0x08,   12 /* Private */,
      14,    0,  129,    2, 0x08,   13 /* Private */,
      15,    0,  130,    2, 0x08,   14 /* Private */,
      16,    0,  131,    2, 0x08,   15 /* Private */,
      17,    0,  132,    2, 0x08,   16 /* Private */,
      18,    0,  133,    2, 0x08,   17 /* Private */,
      19,    0,  134,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UiMain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->btnManageClickSignal(); break;
        case 1: _t->btnQuit(); break;
        case 2: _t->on_btnCloseWidget_clicked(); break;
        case 3: _t->on_btnMaxWidget_clicked(); break;
        case 4: _t->on_btnMinWidget_clicked(); break;
        case 5: _t->onButtonClick((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->upTime(); break;
        case 7: _t->onBtnHome(); break;
        case 8: _t->onBtnSystem(); break;
        case 9: _t->onBtnOutpatientManage(); break;
        case 10: _t->onBtnDoctor(); break;
        case 11: _t->onBtnToll(); break;
        case 12: _t->onBtnInpatientManage(); break;
        case 13: _t->onBtnPharmacyManage(); break;
        case 14: _t->onBtnDrugManage(); break;
        case 15: _t->onBtnFinancialManage(); break;
        case 16: _t->onBtnQuit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UiMain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiMain::btnManageClickSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UiMain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiMain::btnQuit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UiMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_UiMain.offsetsAndSize,
    qt_meta_data_UiMain,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_UiMain_t
, QtPrivate::TypeAndForceComplete<UiMain, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *UiMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UiMain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UiMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void UiMain::btnManageClickSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UiMain::btnQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
