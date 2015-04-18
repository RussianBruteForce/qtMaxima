/****************************************************************************
** Meta object code from reading C++ file 'qtmaximastaticintegrateanddiffinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/qtmaximastaticintegrateanddiffinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaximastaticintegrateanddiffinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface_t {
    QByteArrayData data[11];
    char stringdata[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface_t qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QtMaximaStaticIntegrateAndDif..."
QT_MOC_LITERAL(1, 40, 17), // "calculateItPlease"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 7), // "request"
QT_MOC_LITERAL(4, 67, 14), // "onBackendReady"
QT_MOC_LITERAL(5, 82, 16), // "onNewLineIsReady"
QT_MOC_LITERAL(6, 99, 3), // "str"
QT_MOC_LITERAL(7, 103, 6), // "onDiff"
QT_MOC_LITERAL(8, 110, 11), // "onIntegrate"
QT_MOC_LITERAL(9, 122, 18), // "setPlainTextOutput"
QT_MOC_LITERAL(10, 141, 5) // "plain"

    },
    "QtMaximaStaticIntegrateAndDiffInterface\0"
    "calculateItPlease\0\0request\0onBackendReady\0"
    "onNewLineIsReady\0str\0onDiff\0onIntegrate\0"
    "setPlainTextOutput\0plain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaximaStaticIntegrateAndDiffInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void QtMaximaStaticIntegrateAndDiffInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaximaStaticIntegrateAndDiffInterface *_t = static_cast<QtMaximaStaticIntegrateAndDiffInterface *>(_o);
        switch (_id) {
        case 0: _t->calculateItPlease((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onBackendReady(); break;
        case 2: _t->onNewLineIsReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onDiff(); break;
        case 4: _t->onIntegrate(); break;
        case 5: _t->setPlainTextOutput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtMaximaStaticIntegrateAndDiffInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtMaximaStaticIntegrateAndDiffInterface::calculateItPlease)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QtMaximaStaticIntegrateAndDiffInterface::staticMetaObject = {
    { &QtMaximaFrontend::staticMetaObject, qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface.data,
      qt_meta_data_QtMaximaStaticIntegrateAndDiffInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtMaximaStaticIntegrateAndDiffInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaximaStaticIntegrateAndDiffInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaximaStaticIntegrateAndDiffInterface.stringdata))
        return static_cast<void*>(const_cast< QtMaximaStaticIntegrateAndDiffInterface*>(this));
    return QtMaximaFrontend::qt_metacast(_clname);
}

int QtMaximaStaticIntegrateAndDiffInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMaximaFrontend::qt_metacall(_c, _id, _a);
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
void QtMaximaStaticIntegrateAndDiffInterface::calculateItPlease(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
