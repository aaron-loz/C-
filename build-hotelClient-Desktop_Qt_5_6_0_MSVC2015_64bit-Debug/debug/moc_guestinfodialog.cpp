/****************************************************************************
** Meta object code from reading C++ file 'guestinfodialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hotelClient/guestinfodialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guestinfodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_guestInfoDialog_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_guestInfoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_guestInfoDialog_t qt_meta_stringdata_guestInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "guestInfoDialog"
QT_MOC_LITERAL(1, 16, 9), // "clearData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "setGuestData"
QT_MOC_LITERAL(4, 40, 7), // "qint32&"
QT_MOC_LITERAL(5, 48, 7), // "roomNum"
QT_MOC_LITERAL(6, 56, 8), // "QString&"
QT_MOC_LITERAL(7, 65, 9), // "guestName"
QT_MOC_LITERAL(8, 75, 4), // "int&"
QT_MOC_LITERAL(9, 80, 9), // "numNights"
QT_MOC_LITERAL(10, 90, 11) // "checkInDate"

    },
    "guestInfoDialog\0clearData\0\0setGuestData\0"
    "qint32&\0roomNum\0QString&\0guestName\0"
    "int&\0numNights\0checkInDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_guestInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    4,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 8,    5,    7,    9,   10,

       0        // eod
};

void guestInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        guestInfoDialog *_t = static_cast<guestInfoDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearData(); break;
        case 1: _t->setGuestData((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject guestInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_guestInfoDialog.data,
      qt_meta_data_guestInfoDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *guestInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *guestInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_guestInfoDialog.stringdata0))
        return static_cast<void*>(const_cast< guestInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int guestInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
