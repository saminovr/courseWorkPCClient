/****************************************************************************
** Meta object code from reading C++ file 'authorization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../authorization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authorization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Authorization_t {
    QByteArrayData data[20];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Authorization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Authorization_t qt_meta_stringdata_Authorization = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Authorization"
QT_MOC_LITERAL(1, 14, 19), // "goToMainMenuFromReg"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "goToMainMenuFromLog"
QT_MOC_LITERAL(4, 55, 4), // "quit"
QT_MOC_LITERAL(5, 60, 18), // "slotProfileBlocked"
QT_MOC_LITERAL(6, 79, 17), // "slotProfileExists"
QT_MOC_LITERAL(7, 97, 24), // "slotPermissionToRegister"
QT_MOC_LITERAL(8, 122, 23), // "slotRegPasButtonPressed"
QT_MOC_LITERAL(9, 146, 24), // "slotRegPasButtonReleased"
QT_MOC_LITERAL(10, 171, 30), // "slotRegPasConfirmButtonPressed"
QT_MOC_LITERAL(11, 202, 31), // "slotRegPasConfirmButtonReleased"
QT_MOC_LITERAL(12, 234, 23), // "slotLogPasButtonPressed"
QT_MOC_LITERAL(13, 258, 24), // "slotLogPasButtonReleased"
QT_MOC_LITERAL(14, 283, 13), // "slotPinManage"
QT_MOC_LITERAL(15, 297, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(16, 319, 29), // "on_registrationButton_clicked"
QT_MOC_LITERAL(17, 349, 25), // "on_registerButton_clicked"
QT_MOC_LITERAL(18, 375, 22), // "on_logInButton_clicked"
QT_MOC_LITERAL(19, 398, 21) // "on_exitButton_clicked"

    },
    "Authorization\0goToMainMenuFromReg\0\0"
    "goToMainMenuFromLog\0quit\0slotProfileBlocked\0"
    "slotProfileExists\0slotPermissionToRegister\0"
    "slotRegPasButtonPressed\0"
    "slotRegPasButtonReleased\0"
    "slotRegPasConfirmButtonPressed\0"
    "slotRegPasConfirmButtonReleased\0"
    "slotLogPasButtonPressed\0"
    "slotLogPasButtonReleased\0slotPinManage\0"
    "on_backButton_clicked\0"
    "on_registrationButton_clicked\0"
    "on_registerButton_clicked\0"
    "on_logInButton_clicked\0on_exitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Authorization[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       4,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  111,    2, 0x08 /* Private */,
       6,    2,  112,    2, 0x08 /* Private */,
       7,    2,  117,    2, 0x08 /* Private */,
       8,    0,  122,    2, 0x08 /* Private */,
       9,    0,  123,    2, 0x08 /* Private */,
      10,    0,  124,    2, 0x08 /* Private */,
      11,    0,  125,    2, 0x08 /* Private */,
      12,    0,  126,    2, 0x08 /* Private */,
      13,    0,  127,    2, 0x08 /* Private */,
      14,    0,  128,    2, 0x08 /* Private */,
      15,    0,  129,    2, 0x08 /* Private */,
      16,    0,  130,    2, 0x08 /* Private */,
      17,    0,  131,    2, 0x08 /* Private */,
      18,    0,  132,    2, 0x08 /* Private */,
      19,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QJsonDocument,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QJsonDocument,    2,    2,
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

       0        // eod
};

void Authorization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Authorization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToMainMenuFromReg((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 1: _t->goToMainMenuFromLog((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 2: _t->quit(); break;
        case 3: _t->slotProfileBlocked(); break;
        case 4: _t->slotProfileExists((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2]))); break;
        case 5: _t->slotPermissionToRegister((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2]))); break;
        case 6: _t->slotRegPasButtonPressed(); break;
        case 7: _t->slotRegPasButtonReleased(); break;
        case 8: _t->slotRegPasConfirmButtonPressed(); break;
        case 9: _t->slotRegPasConfirmButtonReleased(); break;
        case 10: _t->slotLogPasButtonPressed(); break;
        case 11: _t->slotLogPasButtonReleased(); break;
        case 12: _t->slotPinManage(); break;
        case 13: _t->on_backButton_clicked(); break;
        case 14: _t->on_registrationButton_clicked(); break;
        case 15: _t->on_registerButton_clicked(); break;
        case 16: _t->on_logInButton_clicked(); break;
        case 17: _t->on_exitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Authorization::*)(QJsonDocument );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization::goToMainMenuFromReg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Authorization::*)(QJsonDocument );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization::goToMainMenuFromLog)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Authorization::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization::quit)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Authorization::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Authorization.data,
    qt_meta_data_Authorization,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Authorization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Authorization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Authorization.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Authorization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Authorization::goToMainMenuFromReg(QJsonDocument _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Authorization::goToMainMenuFromLog(QJsonDocument _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Authorization::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
