/****************************************************************************
** Meta object code from reading C++ file 'listwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../listwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSListWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSListWindowENDCLASS = QtMocHelpers::stringData(
    "ListWindow",
    "on_m_actInsert_triggered",
    "",
    "on_m_actDelete_triggered",
    "on_m_actAppend_triggered",
    "on_m_actInit_triggered",
    "on_m_actClear_triggered",
    "on_m_actCheckAll_triggered",
    "on_m_actCheckNone_triggered",
    "on_m_actCheckInverse_triggered",
    "on_m_checkEditable_clicked",
    "checked",
    "on_m_list_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "previous"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSListWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    1,   82,    2, 0x08,    9 /* Private */,
      12,    2,   85,    2, 0x08,   11 /* Private */,

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

Q_CONSTINIT const QMetaObject ListWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSListWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSListWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSListWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ListWindow, std::true_type>,
        // method 'on_m_actInsert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actAppend_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actInit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actClear_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actCheckAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actCheckNone_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_actCheckInverse_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_checkEditable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_list_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void ListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_m_actInsert_triggered(); break;
        case 1: _t->on_m_actDelete_triggered(); break;
        case 2: _t->on_m_actAppend_triggered(); break;
        case 3: _t->on_m_actInit_triggered(); break;
        case 4: _t->on_m_actClear_triggered(); break;
        case 5: _t->on_m_actCheckAll_triggered(); break;
        case 6: _t->on_m_actCheckNone_triggered(); break;
        case 7: _t->on_m_actCheckInverse_triggered(); break;
        case 8: _t->on_m_checkEditable_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_m_list_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSListWindowENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
