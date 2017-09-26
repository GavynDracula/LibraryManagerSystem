/****************************************************************************
** Meta object code from reading C++ file 'adminmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LibraryManageSystem/adminmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminMainWindow_t {
    QByteArrayData data[17];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminMainWindow_t qt_meta_stringdata_AdminMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AdminMainWindow"
QT_MOC_LITERAL(1, 16, 16), // "PublicationEnter"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "PublicationRemove"
QT_MOC_LITERAL(4, 52, 10), // "BookShelve"
QT_MOC_LITERAL(5, 63, 12), // "BookUnShelve"
QT_MOC_LITERAL(6, 76, 11), // "BookInquire"
QT_MOC_LITERAL(7, 88, 14), // "ReaderRegister"
QT_MOC_LITERAL(8, 103, 13), // "ReaderNullify"
QT_MOC_LITERAL(9, 117, 12), // "ReaderModify"
QT_MOC_LITERAL(10, 130, 13), // "ReaderInquire"
QT_MOC_LITERAL(11, 144, 10), // "BorrowBook"
QT_MOC_LITERAL(12, 155, 10), // "ReturnBook"
QT_MOC_LITERAL(13, 166, 7), // "PayFine"
QT_MOC_LITERAL(14, 174, 12), // "AboutProgram"
QT_MOC_LITERAL(15, 187, 7), // "AboutMe"
QT_MOC_LITERAL(16, 195, 13) // "TVDoubleClick"

    },
    "AdminMainWindow\0PublicationEnter\0\0"
    "PublicationRemove\0BookShelve\0BookUnShelve\0"
    "BookInquire\0ReaderRegister\0ReaderNullify\0"
    "ReaderModify\0ReaderInquire\0BorrowBook\0"
    "ReturnBook\0PayFine\0AboutProgram\0AboutMe\0"
    "TVDoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void AdminMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminMainWindow *_t = static_cast<AdminMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PublicationEnter(); break;
        case 1: _t->PublicationRemove(); break;
        case 2: _t->BookShelve(); break;
        case 3: _t->BookUnShelve(); break;
        case 4: _t->BookInquire(); break;
        case 5: _t->ReaderRegister(); break;
        case 6: _t->ReaderNullify(); break;
        case 7: _t->ReaderModify(); break;
        case 8: _t->ReaderInquire(); break;
        case 9: _t->BorrowBook(); break;
        case 10: _t->ReturnBook(); break;
        case 11: _t->PayFine(); break;
        case 12: _t->AboutProgram(); break;
        case 13: _t->AboutMe(); break;
        case 14: _t->TVDoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AdminMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AdminMainWindow.data,
      qt_meta_data_AdminMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminMainWindow.stringdata0))
        return static_cast<void*>(const_cast< AdminMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AdminMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
