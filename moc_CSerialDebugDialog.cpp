/****************************************************************************
** Meta object code from reading C++ file 'CSerialDebugDialog.h'
**
** Created: Mon Dec 19 17:35:39 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CSerialDebugDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSerialDebugDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSerialDebugDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      52,   19,   19,   19, 0x08,
      84,   19,   19,   19, 0x08,
     118,   19,   19,   19, 0x08,
     151,   19,   19,   19, 0x08,
     186,   19,   19,   19, 0x08,
     228,   19,   19,   19, 0x08,
     258,   19,   19,   19, 0x08,
     286,   19,   19,   19, 0x08,
     316,   19,   19,   19, 0x08,
     345,   19,   19,   19, 0x08,
     374,   19,   19,   19, 0x08,
     403,   19,   19,   19, 0x08,
     432,   19,   19,   19, 0x08,
     461,   19,   19,   19, 0x08,
     490,   19,   19,   19, 0x08,
     519,   19,   19,   19, 0x08,
     548,   19,   19,   19, 0x08,
     577,   19,   19,   19, 0x08,
     606,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSerialDebugDialog[] = {
    "CSerialDebugDialog\0\0on_radioButton_decVar_clicked()\0"
    "on_radioButton_binVar_clicked()\0"
    "on_radioButton_sendData_clicked()\0"
    "on_radioButton_revData_clicked()\0"
    "on_lineEdit_var_selectionChanged()\0"
    "on_lineEdit_arrayindex_selectionChanged()\0"
    "on_pushButton_reset_clicked()\0"
    "on_pushButton_set_clicked()\0"
    "on_pushButton_clear_clicked()\0"
    "on_pushButton_num0_clicked()\0"
    "on_pushButton_num9_clicked()\0"
    "on_pushButton_num8_clicked()\0"
    "on_pushButton_num7_clicked()\0"
    "on_pushButton_num6_clicked()\0"
    "on_pushButton_num5_clicked()\0"
    "on_pushButton_num4_clicked()\0"
    "on_pushButton_num3_clicked()\0"
    "on_pushButton_num2_clicked()\0"
    "on_pushButton_num1_clicked()\0OnTimer_1s()\0"
};

const QMetaObject CSerialDebugDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CSerialDebugDialog,
      qt_meta_data_CSerialDebugDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSerialDebugDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSerialDebugDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSerialDebugDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSerialDebugDialog))
        return static_cast<void*>(const_cast< CSerialDebugDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CSerialDebugDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_radioButton_decVar_clicked(); break;
        case 1: on_radioButton_binVar_clicked(); break;
        case 2: on_radioButton_sendData_clicked(); break;
        case 3: on_radioButton_revData_clicked(); break;
        case 4: on_lineEdit_var_selectionChanged(); break;
        case 5: on_lineEdit_arrayindex_selectionChanged(); break;
        case 6: on_pushButton_reset_clicked(); break;
        case 7: on_pushButton_set_clicked(); break;
        case 8: on_pushButton_clear_clicked(); break;
        case 9: on_pushButton_num0_clicked(); break;
        case 10: on_pushButton_num9_clicked(); break;
        case 11: on_pushButton_num8_clicked(); break;
        case 12: on_pushButton_num7_clicked(); break;
        case 13: on_pushButton_num6_clicked(); break;
        case 14: on_pushButton_num5_clicked(); break;
        case 15: on_pushButton_num4_clicked(); break;
        case 16: on_pushButton_num3_clicked(); break;
        case 17: on_pushButton_num2_clicked(); break;
        case 18: on_pushButton_num1_clicked(); break;
        case 19: OnTimer_1s(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
