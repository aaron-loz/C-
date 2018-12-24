/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimerStat/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "changeDialog"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "changeLCD"
QT_MOC_LITERAL(4, 35, 1), // "i"
QT_MOC_LITERAL(5, 37, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 63, 24), // "on_actionE_xit_triggered"
QT_MOC_LITERAL(7, 88, 24), // "on_actionO_pen_triggered"
QT_MOC_LITERAL(8, 113, 24), // "on_actionS_ave_triggered"
QT_MOC_LITERAL(9, 138, 27), // "on_actionS_ave_As_triggered"
QT_MOC_LITERAL(10, 166, 25), // "on_actionA_bout_triggered"
QT_MOC_LITERAL(11, 192, 8), // "ReadFile"
QT_MOC_LITERAL(12, 201, 8), // "fileName"
QT_MOC_LITERAL(13, 210, 9), // "writeFile"
QT_MOC_LITERAL(14, 220, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(15, 243, 26), // "on_spinBox_editingFinished"
QT_MOC_LITERAL(16, 270, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(17, 294, 4), // "int&"
QT_MOC_LITERAL(18, 299, 4), // "arg1"
QT_MOC_LITERAL(19, 304, 24), // "on_actionV_iew_triggered"
QT_MOC_LITERAL(20, 329, 24) // "on_actionE_dit_triggered"

    },
    "MainWindow\0changeDialog\0\0changeLCD\0i\0"
    "on_lineEdit_returnPressed\0"
    "on_actionE_xit_triggered\0"
    "on_actionO_pen_triggered\0"
    "on_actionS_ave_triggered\0"
    "on_actionS_ave_As_triggered\0"
    "on_actionA_bout_triggered\0ReadFile\0"
    "fileName\0writeFile\0on_actionNew_triggered\0"
    "on_spinBox_editingFinished\0"
    "on_spinBox_valueChanged\0int&\0arg1\0"
    "on_actionV_iew_triggered\0"
    "on_actionE_dit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   90,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeDialog(); break;
        case 1: _t->changeLCD((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_actionE_xit_triggered(); break;
        case 4: _t->on_actionO_pen_triggered(); break;
        case 5: _t->on_actionS_ave_triggered(); break;
        case 6: _t->on_actionS_ave_As_triggered(); break;
        case 7: _t->on_actionA_bout_triggered(); break;
        case 8: _t->ReadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->writeFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_actionNew_triggered(); break;
        case 11: _t->on_spinBox_editingFinished(); break;
        case 12: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_actionV_iew_triggered(); break;
        case 14: _t->on_actionE_dit_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::changeDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MainWindow::changeDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_sleepTimer_t {
    QByteArrayData data[7];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sleepTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sleepTimer_t qt_meta_stringdata_sleepTimer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "sleepTimer"
QT_MOC_LITERAL(1, 11, 10), // "changeTime"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "i"
QT_MOC_LITERAL(4, 25, 5), // "sleep"
QT_MOC_LITERAL(5, 31, 4), // "secs"
QT_MOC_LITERAL(6, 36, 3) // "run"

    },
    "sleepTimer\0changeTime\0\0i\0sleep\0secs\0"
    "run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sleepTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::ULong,    5,
    QMetaType::Void,

       0        // eod
};

void sleepTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sleepTimer *_t = static_cast<sleepTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sleep((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 2: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sleepTimer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sleepTimer::changeTime)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject sleepTimer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_sleepTimer.data,
      qt_meta_data_sleepTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sleepTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sleepTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sleepTimer.stringdata0))
        return static_cast<void*>(const_cast< sleepTimer*>(this));
    return QThread::qt_metacast(_clname);
}

int sleepTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void sleepTimer::changeTime(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
