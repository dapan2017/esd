/****************************************************************************
** Meta object code from reading C++ file 'tcpclientwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcpclientwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpClientWindow_t {
    QByteArrayData data[15];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpClientWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpClientWindow_t qt_meta_stringdata_TcpClientWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TcpClientWindow"
QT_MOC_LITERAL(1, 16, 25), // "on_m_actConnect_triggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "on_m_actDisconnect_triggered"
QT_MOC_LITERAL(4, 72, 23), // "on_m_actClear_triggered"
QT_MOC_LITERAL(5, 96, 20), // "on_m_btnSend_clicked"
QT_MOC_LITERAL(6, 117, 21), // "on_m_socket_connected"
QT_MOC_LITERAL(7, 139, 21), // "on_m_socket_readyRead"
QT_MOC_LITERAL(8, 161, 24), // "on_m_socket_disconnected"
QT_MOC_LITERAL(9, 186, 24), // "on_m_socket_stateChanged"
QT_MOC_LITERAL(10, 211, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(11, 240, 11), // "socketState"
QT_MOC_LITERAL(12, 252, 17), // "on_m_socket_error"
QT_MOC_LITERAL(13, 270, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(14, 299, 11) // "socketError"

    },
    "TcpClientWindow\0on_m_actConnect_triggered\0"
    "\0on_m_actDisconnect_triggered\0"
    "on_m_actClear_triggered\0on_m_btnSend_clicked\0"
    "on_m_socket_connected\0on_m_socket_readyRead\0"
    "on_m_socket_disconnected\0"
    "on_m_socket_stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "on_m_socket_error\0QAbstractSocket::SocketError\0"
    "socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpClientWindow[] = {

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
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void TcpClientWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpClientWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_actConnect_triggered(); break;
        case 1: _t->on_m_actDisconnect_triggered(); break;
        case 2: _t->on_m_actClear_triggered(); break;
        case 3: _t->on_m_btnSend_clicked(); break;
        case 4: _t->on_m_socket_connected(); break;
        case 5: _t->on_m_socket_readyRead(); break;
        case 6: _t->on_m_socket_disconnected(); break;
        case 7: _t->on_m_socket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 8: _t->on_m_socket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpClientWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_TcpClientWindow.data,
    qt_meta_data_TcpClientWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpClientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpClientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpClientWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TcpClientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
