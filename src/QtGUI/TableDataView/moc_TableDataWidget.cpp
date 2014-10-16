/****************************************************************************
** Meta object code from reading C++ file 'TableDataWidget.hpp'
**
** Created: Wed Sep 23 19:07:16 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TableDataWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TableDataWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TableDataWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      27,   17,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TableDataWidget[] = {
    "TableDataWidget\0\0tableName\0"
    "slot_setTable(QString)\0"
};

const QMetaObject TableDataWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TableDataWidget,
      qt_meta_data_TableDataWidget, 0 }
};

const QMetaObject *TableDataWidget::metaObject() const
{
    return &staticMetaObject;
}

void *TableDataWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TableDataWidget))
        return static_cast<void*>(const_cast< TableDataWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TableDataWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_setTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
