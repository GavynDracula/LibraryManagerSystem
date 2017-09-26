/****************************************************************************
** Meta object code from reading C++ file 'adminreaderinquiredialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LibraryManageSystem/adminreaderinquiredialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminreaderinquiredialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminReaderInquireDialog_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminReaderInquireDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminReaderInquireDialog_t qt_meta_stringdata_AdminReaderInquireDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AdminReaderInquireDialog"
QT_MOC_LITERAL(1, 25, 12), // "AddCondition"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "PlusCondition"
QT_MOC_LITERAL(4, 53, 17), // "BorrowedCondition"
QT_MOC_LITERAL(5, 71, 14), // "FinesCondition"
QT_MOC_LITERAL(6, 86, 13) // "TypeCondition"

    },
    "AdminReaderInquireDialog\0AddCondition\0"
    "\0PlusCondition\0BorrowedCondition\0"
    "FinesCondition\0TypeCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminReaderInquireDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       6,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void AdminReaderInquireDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminReaderInquireDialog *_t = static_cast<AdminReaderInquireDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddCondition(); break;
        case 1: _t->PlusCondition(); break;
        case 2: _t->BorrowedCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->FinesCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->TypeCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AdminReaderInquireDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminReaderInquireDialog.data,
      qt_meta_data_AdminReaderInquireDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminReaderInquireDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminReaderInquireDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminReaderInquireDialog.stringdata0))
        return static_cast<void*>(const_cast< AdminReaderInquireDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdminReaderInquireDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
