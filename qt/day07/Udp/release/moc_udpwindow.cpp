/****************************************************************************
** Meta object code from reading C++ file 'udpwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../udpwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UdpWindow_t {
    QByteArrayData data[13];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UdpWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UdpWindow_t qt_meta_stringdata_UdpWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UdpWindow"
QT_MOC_LITERAL(1, 10, 22), // "on_m_actBind_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_m_actAbort_triggered"
QT_MOC_LITERAL(4, 58, 23), // "on_m_actClear_triggered"
QT_MOC_LITERAL(5, 82, 20), // "on_m_btnSend_clicked"
QT_MOC_LITERAL(6, 103, 21), // "on_m_socket_readyRead"
QT_MOC_LITERAL(7, 125, 17), // "on_m_socket_error"
QT_MOC_LITERAL(8, 143, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 172, 11), // "socketError"
QT_MOC_LITERAL(10, 184, 24), // "on_m_socket_stateChanged"
QT_MOC_LITERAL(11, 209, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(12, 238, 11) // "socketState"

    },
    "UdpWindow\0on_m_actBind_triggered\0\0"
    "on_m_actAbort_triggered\0on_m_actClear_triggered\0"
    "on_m_btnSend_clicked\0on_m_socket_readyRead\0"
    "on_m_socket_error\0QAbstractSocket::SocketError\0"
    "socketError\0on_m_socket_stateChanged\0"
    "QAbstractSocket::SocketState\0socketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UdpWindow[] = {

 // content:
       8,       // revision
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
       7,    1,   54,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void UdpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UdpWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_actBind_triggered(); break;
        case 1: _t->on_m_actAbort_triggered(); break;
        case 2: _t->on_m_actClear_triggered(); break;
        case 3: _t->on_m_btnSend_clicked(); break;
        case 4: _t->on_m_socket_readyRead(); break;
        case 5: _t->on_m_socket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->on_m_socket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UdpWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_UdpWindow.data,
    qt_meta_data_UdpWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UdpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UdpWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UdpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
