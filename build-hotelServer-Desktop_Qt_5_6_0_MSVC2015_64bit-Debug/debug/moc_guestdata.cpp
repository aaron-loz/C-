/****************************************************************************
** Meta object code from reading C++ file 'guestdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hotelServer/guestdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guestdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_guestData_t {
    QByteArrayData data[8];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_guestData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_guestData_t qt_meta_stringdata_guestData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "guestData"
QT_MOC_LITERAL(1, 10, 12), // "setGuestData"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "int&"
QT_MOC_LITERAL(4, 29, 1), // "i"
QT_MOC_LITERAL(5, 31, 7), // "roomNum"
QT_MOC_LITERAL(6, 39, 10), // "setCheckIn"
QT_MOC_LITERAL(7, 50, 12) // "getGuestData"

    },
    "guestData\0setGuestData\0\0int&\0i\0roomNum\0"
    "setCheckIn\0getGuestData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_guestData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    0,   34,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void guestData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        guestData *_t = static_cast<guestData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setGuestData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setCheckIn(); break;
        case 2: _t->getGuestData(); break;
        default: ;
        }
    }
}

const QMetaObject guestData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_guestData.data,
      qt_meta_data_guestData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *guestData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *guestData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_guestData.stringdata0))
        return static_cast<void*>(const_cast< guestData*>(this));
    return QObject::qt_metacast(_clname);
}

int guestData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
