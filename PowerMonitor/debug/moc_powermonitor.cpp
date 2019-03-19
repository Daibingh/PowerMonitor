/****************************************************************************
** Meta object code from reading C++ file 'powermonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../powermonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'powermonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PowerMonitor_t {
    QByteArrayData data[18];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerMonitor_t qt_meta_stringdata_PowerMonitor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PowerMonitor"
QT_MOC_LITERAL(1, 13, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 60, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 84, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 108, 13), // "handleTimeout"
QT_MOC_LITERAL(7, 122, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 146, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(9, 171, 4), // "arg1"
QT_MOC_LITERAL(10, 176, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(11, 203, 22), // "on_slider_valueChanged"
QT_MOC_LITERAL(12, 226, 8), // "position"
QT_MOC_LITERAL(13, 235, 26), // "on_checkBox_3_stateChanged"
QT_MOC_LITERAL(14, 262, 26), // "on_checkBox_4_stateChanged"
QT_MOC_LITERAL(15, 289, 24), // "on_slider_2_valueChanged"
QT_MOC_LITERAL(16, 314, 5), // "value"
QT_MOC_LITERAL(17, 320, 23) // "on_pushButton_6_clicked"

    },
    "PowerMonitor\0on_pushButton_4_clicked\0"
    "\0on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0handleTimeout\0"
    "on_pushButton_5_clicked\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_checkBox_2_stateChanged\0"
    "on_slider_valueChanged\0position\0"
    "on_checkBox_3_stateChanged\0"
    "on_checkBox_4_stateChanged\0"
    "on_slider_2_valueChanged\0value\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

       0        // eod
};

void PowerMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PowerMonitor *_t = static_cast<PowerMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_4_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->handleTimeout(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_checkBox_4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_slider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PowerMonitor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PowerMonitor.data,
      qt_meta_data_PowerMonitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PowerMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PowerMonitor.stringdata0))
        return static_cast<void*>(const_cast< PowerMonitor*>(this));
    return QWidget::qt_metacast(_clname);
}

int PowerMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
