/****************************************************************************
** Meta object code from reading C++ file 'qtmaximabackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/qtmaximabackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaximabackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtMaximaBackend_t {
    QByteArrayData data[9];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaximaBackend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaximaBackend_t qt_meta_stringdata_QtMaximaBackend = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QtMaximaBackend"
QT_MOC_LITERAL(1, 16, 5), // "ready"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "newLineIsHere"
QT_MOC_LITERAL(4, 37, 3), // "str"
QT_MOC_LITERAL(5, 41, 2), // "go"
QT_MOC_LITERAL(6, 44, 6), // "submit"
QT_MOC_LITERAL(7, 51, 8), // "readLine"
QT_MOC_LITERAL(8, 60, 7) // "onReady"

    },
    "QtMaximaBackend\0ready\0\0newLineIsHere\0"
    "str\0go\0submit\0readLine\0onReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaximaBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtMaximaBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaximaBackend *_t = static_cast<QtMaximaBackend *>(_o);
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->newLineIsHere((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->go(); break;
        case 3: _t->submit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readLine(); break;
        case 5: _t->onReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtMaximaBackend::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtMaximaBackend::ready)) {
                *result = 0;
            }
        }
        {
            typedef void (QtMaximaBackend::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtMaximaBackend::newLineIsHere)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtMaximaBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtMaximaBackend.data,
      qt_meta_data_QtMaximaBackend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtMaximaBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaximaBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaximaBackend.stringdata))
        return static_cast<void*>(const_cast< QtMaximaBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int QtMaximaBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtMaximaBackend::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtMaximaBackend::newLineIsHere(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
