/****************************************************************************
** Meta object code from reading C++ file 'testbytedialog.h'
**
** Created: Fri Sep 15 10:41:21 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../testbytedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testbytedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestByteDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      92,   15,   15,   15, 0x08,
     117,   15,   15,   15, 0x08,
     142,   15,   15,   15, 0x08,
     167,   15,   15,   15, 0x08,
     192,   15,   15,   15, 0x08,
     217,   15,   15,   15, 0x08,
     242,   15,   15,   15, 0x08,
     267,   15,   15,   15, 0x08,
     292,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestByteDialog[] = {
    "TestByteDialog\0\0on_pushButtonOk_clicked()\0"
    "on_pushButton1_clicked()\0"
    "on_pushButton2_clicked()\0"
    "on_pushButton3_clicked()\0"
    "on_pushButton4_clicked()\0"
    "on_pushButton5_clicked()\0"
    "on_pushButton6_clicked()\0"
    "on_pushButton7_clicked()\0"
    "on_pushButton8_clicked()\0"
    "on_pushButton9_clicked()\0"
    "on_pushButton0_clicked()\0"
    "on_pushButtonClear_clicked()\0"
};

const QMetaObject TestByteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TestByteDialog,
      qt_meta_data_TestByteDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestByteDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestByteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestByteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestByteDialog))
        return static_cast<void*>(const_cast< TestByteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TestByteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonOk_clicked(); break;
        case 1: on_pushButton1_clicked(); break;
        case 2: on_pushButton2_clicked(); break;
        case 3: on_pushButton3_clicked(); break;
        case 4: on_pushButton4_clicked(); break;
        case 5: on_pushButton5_clicked(); break;
        case 6: on_pushButton6_clicked(); break;
        case 7: on_pushButton7_clicked(); break;
        case 8: on_pushButton8_clicked(); break;
        case 9: on_pushButton9_clicked(); break;
        case 10: on_pushButton0_clicked(); break;
        case 11: on_pushButtonClear_clicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
