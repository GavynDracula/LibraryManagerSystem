/****************************************************************************
** Meta object code from reading C++ file 'readermainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LibraryManageSystem/readermainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReaderMainWindow_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReaderMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReaderMainWindow_t qt_meta_stringdata_ReaderMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ReaderMainWindow"
QT_MOC_LITERAL(1, 17, 8), // "SelfInfo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "BorrowedBooks"
QT_MOC_LITERAL(4, 41, 13), // "ReaderInquire"
QT_MOC_LITERAL(5, 55, 8), // "RenewOne"
QT_MOC_LITERAL(6, 64, 12), // "AboutProgram"
QT_MOC_LITERAL(7, 77, 7), // "AboutMe"
QT_MOC_LITERAL(8, 85, 13) // "TVDoubleClick"

    },
    "ReaderMainWindow\0SelfInfo\0\0BorrowedBooks\0"
    "ReaderInquire\0RenewOne\0AboutProgram\0"
    "AboutMe\0TVDoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReaderMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void ReaderMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReaderMainWindow *_t = static_cast<ReaderMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelfInfo(); break;
        case 1: _t->BorrowedBooks(); break;
        case 2: _t->ReaderInquire(); break;
        case 3: _t->RenewOne(); break;
        case 4: _t->AboutProgram(); break;
        case 5: _t->AboutMe(); break;
        case 6: _t->TVDoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReaderMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ReaderMainWindow.data,
      qt_meta_data_ReaderMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReaderMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReaderMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReaderMainWindow.stringdata0))
        return static_cast<void*>(const_cast< ReaderMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ReaderMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
