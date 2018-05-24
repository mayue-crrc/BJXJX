/****************************************************************************
** Meta object code from reading C++ file 'cmainhelpdialog3.h'
**
** Created: Mon Dec 19 17:35:40 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cmainhelpdialog3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmainhelpdialog3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMainHelpdialog3[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      46,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   17,   17,   17, 0x08,
     103,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMainHelpdialog3[] = {
    "CMainHelpdialog3\0\0closeMainHelpDialogSignal()\0"
    "closeMainHelpDialog2Signal()\0"
    "on_quitPushButton_clicked()\0"
    "on_upToolButton_clicked()\0"
};

const QMetaObject CMainHelpdialog3::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMainHelpdialog3,
      qt_meta_data_CMainHelpdialog3, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMainHelpdialog3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMainHelpdialog3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMainHelpdialog3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMainHelpdialog3))
        return static_cast<void*>(const_cast< CMainHelpdialog3*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMainHelpdialog3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: closeMainHelpDialogSignal(); break;
        case 1: closeMainHelpDialog2Signal(); break;
        case 2: on_quitPushButton_clicked(); break;
        case 3: on_upToolButton_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CMainHelpdialog3::closeMainHelpDialogSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CMainHelpdialog3::closeMainHelpDialog2Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
