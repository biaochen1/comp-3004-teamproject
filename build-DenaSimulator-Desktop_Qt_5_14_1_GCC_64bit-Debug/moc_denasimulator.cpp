/****************************************************************************
** Meta object code from reading C++ file 'denasimulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
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
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DenaSimulator_t {
    QByteArrayData data[18];
    char stringdata0[348];
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
QT_MOC_LITERAL(7, 131, 25), // "on_confirmButton_released"
QT_MOC_LITERAL(8, 157, 18), // "init_settings_page"
QT_MOC_LITERAL(9, 176, 18), // "init_programs_page"
QT_MOC_LITERAL(10, 195, 19), // "init_frequency_page"
QT_MOC_LITERAL(11, 215, 13), // "init_med_page"
QT_MOC_LITERAL(12, 229, 14), // "init_main_page"
QT_MOC_LITERAL(13, 244, 26), // "handle_main_page_selection"
QT_MOC_LITERAL(14, 271, 13), // "currentOption"
QT_MOC_LITERAL(15, 285, 22), // "on_rightButton_clicked"
QT_MOC_LITERAL(16, 308, 12), // "setCountdown"
QT_MOC_LITERAL(17, 321, 26) // "on_touchSkinButton_clicked"

    },
    "DenaSimulator\0on_downButton_clicked\0"
    "\0on_upButton_clicked\0on_powerButton_released\0"
    "on_returnButton_clicked\0"
    "on_mainMenuButton_clicked\0"
    "on_confirmButton_released\0init_settings_page\0"
    "init_programs_page\0init_frequency_page\0"
    "init_med_page\0init_main_page\0"
    "handle_main_page_selection\0currentOption\0"
    "on_rightButton_clicked\0setCountdown\0"
    "on_touchSkinButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DenaSimulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
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
        case 5: _t->on_confirmButton_released(); break;
        case 6: _t->init_settings_page(); break;
        case 7: _t->init_programs_page(); break;
        case 8: _t->init_frequency_page(); break;
        case 9: _t->init_med_page(); break;
        case 10: _t->init_main_page(); break;
        case 11: _t->handle_main_page_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_rightButton_clicked(); break;
        case 13: _t->setCountdown(); break;
        case 14: _t->on_touchSkinButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DenaSimulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
