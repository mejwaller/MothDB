/****************************************************************************
** Meta object code from reading C++ file 'CommonActions.hpp'
**
** Created: Wed Oct 13 19:22:20 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CommonActions.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommonActions.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommonActions[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      25,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   14,   14,   14, 0x0a,
      69,   14,   14,   14, 0x0a,
      88,   14,   14,   14, 0x0a,
     107,   14,   14,   14, 0x0a,
     125,   14,   14,   14, 0x0a,
     145,   14,   14,   14, 0x0a,
     167,   14,   14,   14, 0x0a,
     189,   14,   14,   14, 0x0a,
     205,   14,   14,   14, 0x0a,
     223,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CommonActions[] = {
    "CommonActions\0\0tableName\0"
    "tableItemSelected(QString)\0slot_addRecord()\0"
    "slot_addRecEvent()\0slot_addTaxonRec()\0"
    "slot_editRecord()\0slot_deleteRecord()\0"
    "slot_deleteRecEvent()\0slot_deleteTaxonRec()\0"
    "slot_runQuery()\0slot_chartQuery()\0"
    "slot_tableSelected(QModelIndex)\0"
};

const QMetaObject CommonActions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommonActions,
      qt_meta_data_CommonActions, 0 }
};

const QMetaObject *CommonActions::metaObject() const
{
    return &staticMetaObject;
}

void *CommonActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommonActions))
        return static_cast<void*>(const_cast< CommonActions*>(this));
    return QObject::qt_metacast(_clname);
}

int CommonActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tableItemSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: slot_addRecord(); break;
        case 2: slot_addRecEvent(); break;
        case 3: slot_addTaxonRec(); break;
        case 4: slot_editRecord(); break;
        case 5: slot_deleteRecord(); break;
        case 6: slot_deleteRecEvent(); break;
        case 7: slot_deleteTaxonRec(); break;
        case 8: slot_runQuery(); break;
        case 9: slot_chartQuery(); break;
        case 10: slot_tableSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CommonActions::tableItemSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
