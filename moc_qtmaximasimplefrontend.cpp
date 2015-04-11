/****************************************************************************
** Meta object code from reading C++ file 'qtmaximasimplefrontend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/qtmaximasimplefrontend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaximasimplefrontend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtMaximaSimpleFrontend_t {
    QByteArrayData data[9];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaximaSimpleFrontend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaximaSimpleFrontend_t qt_meta_stringdata_QtMaximaSimpleFrontend = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtMaximaSimpleFrontend"
QT_MOC_LITERAL(1, 23, 17), // "calculateItPlease"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "request"
QT_MOC_LITERAL(4, 50, 9), // "askString"
QT_MOC_LITERAL(5, 60, 14), // "onBackendReady"
QT_MOC_LITERAL(6, 75, 18), // "onNewStringIsReady"
QT_MOC_LITERAL(7, 94, 3), // "str"
QT_MOC_LITERAL(8, 98, 11) // "onCalculate"

    },
    "QtMaximaSimpleFrontend\0calculateItPlease\0"
    "\0request\0askString\0onBackendReady\0"
    "onNewStringIsReady\0str\0onCalculate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaximaSimpleFrontend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void QtMaximaSimpleFrontend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaximaSimpleFrontend *_t = static_cast<QtMaximaSimpleFrontend *>(_o);
        switch (_id) {
        case 0: _t->calculateItPlease((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->askString(); break;
        case 2: _t->onBackendReady(); break;
        case 3: _t->onNewStringIsReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onCalculate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtMaximaSimpleFrontend::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtMaximaSimpleFrontend::calculateItPlease)) {
                *result = 0;
            }
        }
        {
            typedef void (QtMaximaSimpleFrontend::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtMaximaSimpleFrontend::askString)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtMaximaSimpleFrontend::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtMaximaSimpleFrontend.data,
      qt_meta_data_QtMaximaSimpleFrontend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtMaximaSimpleFrontend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaximaSimpleFrontend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaximaSimpleFrontend.stringdata))
        return static_cast<void*>(const_cast< QtMaximaSimpleFrontend*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtMaximaSimpleFrontend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtMaximaSimpleFrontend::calculateItPlease(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtMaximaSimpleFrontend::askString()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
