/****************************************************************************
** Meta object code from reading C++ file 'cmainhelpdialog.h'
**
** Created: Mon Dec 19 17:35:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cmainhelpdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmainhelpdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMainHelpDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      45,   16,   16,   16, 0x08,
      73,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMainHelpDialog[] = {
    "CMainHelpDialog\0\0on_quitPushButton_clicked()\0"
    "on_downToolButton_clicked()\0"
    "closeMainHelpDialogSlot()\0"
};

const QMetaObject CMainHelpDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMainHelpDialog,
      qt_meta_data_CMainHelpDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMainHelpDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMainHelpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMainHelpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMainHelpDialog))
        return static_cast<void*>(const_cast< CMainHelpDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMainHelpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_quitPushButton_clicked(); break;
        case 1: on_downToolButton_clicked(); break;
        case 2: closeMainHelpDialogSlot(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
