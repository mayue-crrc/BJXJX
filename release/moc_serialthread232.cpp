/****************************************************************************
** Meta object code from reading C++ file 'serialthread232.h'
**
** Created: Fri Sep 15 10:41:20 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serialthread232.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialthread232.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialThread232[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   17,   16,   16, 0x05,
      67,   62,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   88,   16,   16, 0x0a,
     130,  121,   16,   16, 0x0a,
     150,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialThread232[] = {
    "SerialThread232\0\0ReadData,length\0"
    "SendReadData(QByteArray,int)\0code\0"
    "readFaultSignal(int)\0data,len\0"
    "setDataSlot(uchar*,int)\0baudRate\0"
    "changeBaudRate(int)\0readOutTimerSlot()\0"
};

const QMetaObject SerialThread232::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SerialThread232,
      qt_meta_data_SerialThread232, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialThread232::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialThread232::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialThread232::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialThread232))
        return static_cast<void*>(const_cast< SerialThread232*>(this));
    return QThread::qt_metacast(_clname);
}

int SerialThread232::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SendReadData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: readFaultSignal((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: setDataSlot((*reinterpret_cast< uchar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: changeBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: readOutTimerSlot(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SerialThread232::SendReadData(const QByteArray & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialThread232::readFaultSignal(int const _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
