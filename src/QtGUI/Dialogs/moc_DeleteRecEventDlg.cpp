/****************************************************************************
** Meta object code from reading C++ file 'DeleteRecEventDlg.hpp'
**
** Created: Thu Oct 21 19:01:27 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DeleteRecEventDlg.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeleteRecEventDlg.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeleteRecEventDlg[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DeleteRecEventDlg[] = {
    "DeleteRecEventDlg\0\0slot_commit()\0"
};

const QMetaObject DeleteRecEventDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeleteRecEventDlg,
      qt_meta_data_DeleteRecEventDlg, 0 }
};

const QMetaObject *DeleteRecEventDlg::metaObject() const
{
    return &staticMetaObject;
}

void *DeleteRecEventDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteRecEventDlg))
        return static_cast<void*>(const_cast< DeleteRecEventDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeleteRecEventDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_commit(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
