/****************************************************************************
** Meta object code from reading C++ file 'listwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../listwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListWindow_t {
    QByteArrayData data[16];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListWindow_t qt_meta_stringdata_ListWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ListWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_m_actInsert_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_m_actDelete_triggered"
QT_MOC_LITERAL(4, 62, 24), // "on_m_actAppend_triggered"
QT_MOC_LITERAL(5, 87, 22), // "on_m_actInit_triggered"
QT_MOC_LITERAL(6, 110, 23), // "on_m_actClear_triggered"
QT_MOC_LITERAL(7, 134, 26), // "on_m_actCheckAll_triggered"
QT_MOC_LITERAL(8, 161, 27), // "on_m_actCheckNone_triggered"
QT_MOC_LITERAL(9, 189, 30), // "on_m_actCheckInverse_triggered"
QT_MOC_LITERAL(10, 220, 26), // "on_m_checkEditable_clicked"
QT_MOC_LITERAL(11, 247, 7), // "checked"
QT_MOC_LITERAL(12, 255, 28), // "on_m_list_currentItemChanged"
QT_MOC_LITERAL(13, 284, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 301, 7), // "current"
QT_MOC_LITERAL(15, 309, 8) // "previous"

    },
    "ListWindow\0on_m_actInsert_triggered\0"
    "\0on_m_actDelete_triggered\0"
    "on_m_actAppend_triggered\0"
    "on_m_actInit_triggered\0on_m_actClear_triggered\0"
    "on_m_actCheckAll_triggered\0"
    "on_m_actCheckNone_triggered\0"
    "on_m_actCheckInverse_triggered\0"
    "on_m_checkEditable_clicked\0checked\0"
    "on_m_list_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      12,    2,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,

       0        // eod
};

void ListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_actInsert_triggered(); break;
        case 1: _t->on_m_actDelete_triggered(); break;
        case 2: _t->on_m_actAppend_triggered(); break;
        case 3: _t->on_m_actInit_triggered(); break;
        case 4: _t->on_m_actClear_triggered(); break;
        case 5: _t->on_m_actCheckAll_triggered(); break;
        case 6: _t->on_m_actCheckNone_triggered(); break;
        case 7: _t->on_m_actCheckInverse_triggered(); break;
        case 8: _t->on_m_checkEditable_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_m_list_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ListWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ListWindow.data,
    qt_meta_data_ListWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
