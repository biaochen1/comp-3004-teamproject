/****************************************************************************
** Meta object code from reading C++ file 'denasimulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DenaSimulator/denasimulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'denasimulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DenaSimulator_t {
    QByteArrayData data[21];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DenaSimulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DenaSimulator_t qt_meta_stringdata_DenaSimulator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DenaSimulator"
QT_MOC_LITERAL(1, 14, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_powerButton_released"
QT_MOC_LITERAL(5, 81, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(6, 105, 25), // "on_mainMenuButton_clicked"
QT_MOC_LITERAL(7, 131, 18), // "init_settings_page"
QT_MOC_LITERAL(8, 150, 18), // "init_programs_page"
QT_MOC_LITERAL(9, 169, 19), // "init_frequency_page"
QT_MOC_LITERAL(10, 189, 14), // "init_main_page"
QT_MOC_LITERAL(11, 204, 26), // "handle_main_page_selection"
QT_MOC_LITERAL(12, 231, 13), // "currentOption"
QT_MOC_LITERAL(13, 245, 22), // "on_rightButton_clicked"
QT_MOC_LITERAL(14, 268, 12), // "setCountdown"
QT_MOC_LITERAL(15, 281, 10), // "setCountUp"
QT_MOC_LITERAL(16, 292, 26), // "on_touchSkinButton_clicked"
QT_MOC_LITERAL(17, 319, 21), // "on_leftButton_clicked"
QT_MOC_LITERAL(18, 341, 24), // "on_confirmButton_clicked"
QT_MOC_LITERAL(19, 366, 18), // "init_language_page"
QT_MOC_LITERAL(20, 385, 13) // "updateBattery"

    },
    "DenaSimulator\0on_downButton_clicked\0"
    "\0on_upButton_clicked\0on_powerButton_released\0"
    "on_returnButton_clicked\0"
    "on_mainMenuButton_clicked\0init_settings_page\0"
    "init_programs_page\0init_frequency_page\0"
    "init_main_page\0handle_main_page_selection\0"
    "currentOption\0on_rightButton_clicked\0"
    "setCountdown\0setCountUp\0"
    "on_touchSkinButton_clicked\0"
    "on_leftButton_clicked\0on_confirmButton_clicked\0"
    "init_language_page\0updateBattery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DenaSimulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
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

void DenaSimulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DenaSimulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_downButton_clicked(); break;
        case 1: _t->on_upButton_clicked(); break;
        case 2: _t->on_powerButton_released(); break;
        case 3: _t->on_returnButton_clicked(); break;
        case 4: _t->on_mainMenuButton_clicked(); break;
        case 5: _t->init_settings_page(); break;
        case 6: _t->init_programs_page(); break;
        case 7: _t->init_frequency_page(); break;
        case 8: _t->init_main_page(); break;
        case 9: _t->handle_main_page_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_rightButton_clicked(); break;
        case 11: _t->setCountdown(); break;
        case 12: _t->setCountUp(); break;
        case 13: _t->on_touchSkinButton_clicked(); break;
        case 14: _t->on_leftButton_clicked(); break;
        case 15: _t->on_confirmButton_clicked(); break;
        case 16: _t->init_language_page(); break;
        case 17: _t->updateBattery(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DenaSimulator::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_DenaSimulator.data,
    qt_meta_data_DenaSimulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DenaSimulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DenaSimulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DenaSimulator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DenaSimulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
