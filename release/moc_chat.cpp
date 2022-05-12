/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../chat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Chat_t {
    QByteArrayData data[16];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Chat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Chat_t qt_meta_stringdata_Chat = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Chat"
QT_MOC_LITERAL(1, 5, 22), // "backToMainMenuFromChat"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "getAccountInformation"
QT_MOC_LITERAL(4, 51, 16), // "prepareToSending"
QT_MOC_LITERAL(5, 68, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 80, 5), // "index"
QT_MOC_LITERAL(7, 86, 39), // "on_backToMainMenuFromChatButt..."
QT_MOC_LITERAL(8, 126, 29), // "on_enterMessageButton_clicked"
QT_MOC_LITERAL(9, 156, 17), // "slotMessageSended"
QT_MOC_LITERAL(10, 174, 9), // "slotChats"
QT_MOC_LITERAL(11, 184, 19), // "on_chatList_clicked"
QT_MOC_LITERAL(12, 204, 15), // "slotSetMessages"
QT_MOC_LITERAL(13, 220, 9), // "clearChat"
QT_MOC_LITERAL(14, 230, 6), // "update"
QT_MOC_LITERAL(15, 237, 25) // "on_userPushButton_clicked"

    },
    "Chat\0backToMainMenuFromChat\0\0"
    "getAccountInformation\0prepareToSending\0"
    "QModelIndex\0index\0"
    "on_backToMainMenuFromChatButton_clicked\0"
    "on_enterMessageButton_clicked\0"
    "slotMessageSended\0slotChats\0"
    "on_chatList_clicked\0slotSetMessages\0"
    "clearChat\0update\0on_userPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Chat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToMainMenuFromChat(); break;
        case 1: _t->getAccountInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->prepareToSending((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_backToMainMenuFromChatButton_clicked(); break;
        case 4: _t->on_enterMessageButton_clicked(); break;
        case 5: _t->slotMessageSended((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 6: _t->slotChats((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 7: _t->on_chatList_clicked(); break;
        case 8: _t->slotSetMessages((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 9: _t->clearChat(); break;
        case 10: _t->update(); break;
        case 11: _t->on_userPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Chat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Chat::backToMainMenuFromChat)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Chat::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Chat::getAccountInformation)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Chat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Chat.data,
    qt_meta_data_Chat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Chat.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Chat::backToMainMenuFromChat()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Chat::getAccountInformation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
