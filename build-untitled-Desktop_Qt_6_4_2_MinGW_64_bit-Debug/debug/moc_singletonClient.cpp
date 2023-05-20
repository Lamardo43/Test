/****************************************************************************
** Meta object code from reading C++ file 'singletonClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../university_project_client/singletonClient.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singletonClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_SingletonClient_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[15];
    char stringdata7[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SingletonClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SingletonClient_t qt_meta_stringdata_SingletonClient = {
    {
        QT_MOC_LITERAL(0, 15),  // "SingletonClient"
        QT_MOC_LITERAL(16, 19),  // "message_from_server"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 3),  // "msg"
        QT_MOC_LITERAL(41, 7),  // "auth_ok"
        QT_MOC_LITERAL(49, 12),  // "auth_invalid"
        QT_MOC_LITERAL(62, 14),  // "change_pass_ok"
        QT_MOC_LITERAL(77, 14)   // "slotServerRead"
    },
    "SingletonClient",
    "message_from_server",
    "",
    "msg",
    "auth_ok",
    "auth_invalid",
    "change_pass_ok",
    "slotServerRead"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SingletonClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       5,    0,   50,    2, 0x06,    5 /* Public */,
       6,    0,   51,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SingletonClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SingletonClient.offsetsAndSizes,
    qt_meta_data_SingletonClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SingletonClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SingletonClient, std::true_type>,
        // method 'message_from_server'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'auth_ok'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'auth_invalid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'change_pass_ok'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SingletonClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingletonClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message_from_server((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->auth_ok((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->auth_invalid(); break;
        case 3: _t->change_pass_ok(); break;
        case 4: _t->slotServerRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SingletonClient::*)(QString );
            if (_t _q_method = &SingletonClient::message_from_server; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SingletonClient::*)(QString );
            if (_t _q_method = &SingletonClient::auth_ok; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SingletonClient::*)();
            if (_t _q_method = &SingletonClient::auth_invalid; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SingletonClient::*)();
            if (_t _q_method = &SingletonClient::change_pass_ok; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SingletonClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingletonClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingletonClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingletonClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SingletonClient::message_from_server(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SingletonClient::auth_ok(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SingletonClient::auth_invalid()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SingletonClient::change_pass_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
