/****************************************************************************
** Meta object code from reading C++ file 'comboboxdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../comboboxdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comboboxdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComboBoxDialog_t {
    QByteArrayData data[13];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboBoxDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboBoxDialog_t qt_meta_stringdata_ComboBoxDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ComboBoxDialog"
QT_MOC_LITERAL(1, 15, 20), // "on_m_btnInit_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "on_m_btnClear_clicked"
QT_MOC_LITERAL(4, 59, 19), // "on_m_btnAdd_clicked"
QT_MOC_LITERAL(5, 79, 22), // "on_m_btnAppend_clicked"
QT_MOC_LITERAL(6, 102, 21), // "on_m_btnErase_clicked"
QT_MOC_LITERAL(7, 124, 26), // "on_m_checkEditable_clicked"
QT_MOC_LITERAL(8, 151, 7), // "checked"
QT_MOC_LITERAL(9, 159, 26), // "on_m_checkReadOnly_clicked"
QT_MOC_LITERAL(10, 186, 38), // "on_m_comboUserData_currentInd..."
QT_MOC_LITERAL(11, 225, 4), // "arg1"
QT_MOC_LITERAL(12, 230, 36) // "on_m_comboSimple_currentIndex..."

    },
    "ComboBoxDialog\0on_m_btnInit_clicked\0"
    "\0on_m_btnClear_clicked\0on_m_btnAdd_clicked\0"
    "on_m_btnAppend_clicked\0on_m_btnErase_clicked\0"
    "on_m_checkEditable_clicked\0checked\0"
    "on_m_checkReadOnly_clicked\0"
    "on_m_comboUserData_currentIndexChanged\0"
    "arg1\0on_m_comboSimple_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboBoxDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void ComboBoxDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboBoxDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_btnInit_clicked(); break;
        case 1: _t->on_m_btnClear_clicked(); break;
        case 2: _t->on_m_btnAdd_clicked(); break;
        case 3: _t->on_m_btnAppend_clicked(); break;
        case 4: _t->on_m_btnErase_clicked(); break;
        case 5: _t->on_m_checkEditable_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_m_checkReadOnly_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_m_comboUserData_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_m_comboSimple_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComboBoxDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ComboBoxDialog.data,
    qt_meta_data_ComboBoxDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboBoxDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboBoxDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboBoxDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ComboBoxDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
