/****************************************************************************
** Meta object code from reading C++ file 'psettingdatabase.h'
**
** Created: Fri Sep 15 10:41:22 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../psettingdatabase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psettingdatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PSettingDataBase[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PSettingDataBase[] = {
    "PSettingDataBase\0\0signalFinishLoadingXmlFile()\0"
};

const QMetaObject PSettingDataBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PSettingDataBase,
      qt_meta_data_PSettingDataBase, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PSettingDataBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PSettingDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PSettingDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PSettingDataBase))
        return static_cast<void*>(const_cast< PSettingDataBase*>(this));
    return QObject::qt_metacast(_clname);
}

int PSettingDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalFinishLoadingXmlFile(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PSettingDataBase::signalFinishLoadingXmlFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
