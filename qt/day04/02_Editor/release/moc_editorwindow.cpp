/****************************************************************************
** Meta object code from reading C++ file 'editorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../editorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorWindow_t {
    QByteArrayData data[19];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorWindow_t qt_meta_stringdata_EditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EditorWindow"
QT_MOC_LITERAL(1, 13, 21), // "on_m_actNew_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "on_m_actOpen_triggered"
QT_MOC_LITERAL(4, 59, 23), // "on_m_actAbout_triggered"
QT_MOC_LITERAL(5, 83, 22), // "on_m_actBold_triggered"
QT_MOC_LITERAL(6, 106, 7), // "checked"
QT_MOC_LITERAL(7, 114, 24), // "on_m_actItalic_triggered"
QT_MOC_LITERAL(8, 139, 27), // "on_m_actUnderline_triggered"
QT_MOC_LITERAL(9, 167, 25), // "on_m_actToolBar_triggered"
QT_MOC_LITERAL(10, 193, 27), // "on_m_actStatusBar_triggered"
QT_MOC_LITERAL(11, 221, 23), // "on_m_edit_copyAvailable"
QT_MOC_LITERAL(12, 245, 1), // "b"
QT_MOC_LITERAL(13, 247, 21), // "on_m_edit_textChanged"
QT_MOC_LITERAL(14, 269, 26), // "on_m_edit_selectionChanged"
QT_MOC_LITERAL(15, 296, 30), // "on_m_spinFontSize_valueChanged"
QT_MOC_LITERAL(16, 327, 8), // "fontSize"
QT_MOC_LITERAL(17, 336, 37), // "on_m_combFontName_currentInde..."
QT_MOC_LITERAL(18, 374, 8) // "fontName"

    },
    "EditorWindow\0on_m_actNew_triggered\0\0"
    "on_m_actOpen_triggered\0on_m_actAbout_triggered\0"
    "on_m_actBold_triggered\0checked\0"
    "on_m_actItalic_triggered\0"
    "on_m_actUnderline_triggered\0"
    "on_m_actToolBar_triggered\0"
    "on_m_actStatusBar_triggered\0"
    "on_m_edit_copyAvailable\0b\0"
    "on_m_edit_textChanged\0on_m_edit_selectionChanged\0"
    "on_m_spinFontSize_valueChanged\0fontSize\0"
    "on_m_combFontName_currentIndexChanged\0"
    "fontName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void EditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_actNew_triggered(); break;
        case 1: _t->on_m_actOpen_triggered(); break;
        case 2: _t->on_m_actAbout_triggered(); break;
        case 3: _t->on_m_actBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_m_actItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_m_actUnderline_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_m_actToolBar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_m_actStatusBar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_m_edit_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_m_edit_textChanged(); break;
        case 10: _t->on_m_edit_selectionChanged(); break;
        case 11: _t->on_m_spinFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_m_combFontName_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditorWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_EditorWindow.data,
    qt_meta_data_EditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
