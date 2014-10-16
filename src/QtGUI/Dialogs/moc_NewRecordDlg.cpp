/****************************************************************************
** Meta object code from reading C++ file 'NewRecordDlg.hpp'
**
** Created: Mon Sep 7 18:39:04 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NewRecordDlg.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewRecordDlg.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewRecordDlg[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      40,   13,   28,   13, 0x0a,
      58,   13,   13,   13, 0x0a,
      82,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NewRecordDlg[] = {
    "NewRecordDlg\0\0slot_commit()\0std::string\0"
    "slot_getSpecies()\0slot_addRecEventNotes()\0"
    "slot_selectRecEvent()\0"
};

const QMetaObject NewRecordDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewRecordDlg,
      qt_meta_data_NewRecordDlg, 0 }
};

const QMetaObject *NewRecordDlg::metaObject() const
{
    return &staticMetaObject;
}

void *NewRecordDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewRecordDlg))
        return static_cast<void*>(const_cast< NewRecordDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewRecordDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_commit(); break;
        case 1: { std::string _r = slot_getSpecies();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 2: slot_addRecEventNotes(); break;
        case 3: slot_selectRecEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
