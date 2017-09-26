/****************************************************************************
** Meta object code from reading C++ file 'adminreturndialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LibraryManageSystem/adminreturndialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminreturndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminReturnDialog_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminReturnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminReturnDialog_t qt_meta_stringdata_AdminReturnDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AdminReturnDialog"
QT_MOC_LITERAL(1, 18, 14), // "ReaderIDVerify"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "BookIDVerify"
QT_MOC_LITERAL(4, 47, 10), // "BookIntact"
QT_MOC_LITERAL(5, 58, 10), // "BookDamage"
QT_MOC_LITERAL(6, 69, 13) // "ReturnConfirm"

    },
    "AdminReturnDialog\0ReaderIDVerify\0\0"
    "BookIDVerify\0BookIntact\0BookDamage\0"
    "ReturnConfirm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminReturnDialog[] = {

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
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminReturnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminReturnDialog *_t = static_cast<AdminReturnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReaderIDVerify(); break;
        case 1: _t->BookIDVerify(); break;
        case 2: _t->BookIntact(); break;
        case 3: _t->BookDamage(); break;
        case 4: _t->ReturnConfirm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AdminReturnDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminReturnDialog.data,
      qt_meta_data_AdminReturnDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminReturnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminReturnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminReturnDialog.stringdata0))
        return static_cast<void*>(const_cast< AdminReturnDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdminReturnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
