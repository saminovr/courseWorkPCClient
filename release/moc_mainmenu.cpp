/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainMenu_t {
    QByteArrayData data[50];
    char stringdata0[1204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainMenu_t qt_meta_stringdata_MainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainMenu"
QT_MOC_LITERAL(1, 9, 14), // "mainMenuClosed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 30), // "on_authorizationButton_clicked"
QT_MOC_LITERAL(4, 56, 23), // "slotGoToMainMenuFromLog"
QT_MOC_LITERAL(5, 80, 23), // "slotGoToMainMenuFromReg"
QT_MOC_LITERAL(6, 104, 27), // "slotBackToMainMenuFromAddAd"
QT_MOC_LITERAL(7, 132, 25), // "slotGoToMainMenuFromAddAd"
QT_MOC_LITERAL(8, 158, 14), // "slotAdIsLoaded"
QT_MOC_LITERAL(9, 173, 17), // "slotAdInformation"
QT_MOC_LITERAL(10, 191, 16), // "slotAdIsAccepted"
QT_MOC_LITERAL(11, 208, 22), // "slotAccountInformation"
QT_MOC_LITERAL(12, 231, 21), // "slotUpdateInformation"
QT_MOC_LITERAL(13, 253, 22), // "slotHistoryInformation"
QT_MOC_LITERAL(14, 276, 20), // "slotStackInformation"
QT_MOC_LITERAL(15, 297, 13), // "slotMyAdsInfo"
QT_MOC_LITERAL(16, 311, 15), // "slotLoginEdited"
QT_MOC_LITERAL(17, 327, 26), // "slotBackToMainMenuFromChat"
QT_MOC_LITERAL(18, 354, 9), // "slotChats"
QT_MOC_LITERAL(19, 364, 25), // "slotGetAccountInformation"
QT_MOC_LITERAL(20, 390, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(21, 412, 25), // "on_editNameButton_clicked"
QT_MOC_LITERAL(22, 438, 28), // "on_editSurnameButton_clicked"
QT_MOC_LITERAL(23, 467, 28), // "on_saveChangesButton_clicked"
QT_MOC_LITERAL(24, 496, 24), // "on_accountButton_clicked"
QT_MOC_LITERAL(25, 521, 26), // "on_editLoginButton_clicked"
QT_MOC_LITERAL(26, 548, 23), // "on_logOutButton_clicked"
QT_MOC_LITERAL(27, 572, 30), // "on_deleteAccountButton_clicked"
QT_MOC_LITERAL(28, 603, 29), // "on_editPasswordButton_clicked"
QT_MOC_LITERAL(29, 633, 25), // "on_setPhotoButton_clicked"
QT_MOC_LITERAL(30, 659, 28), // "on_deletePhotoButton_clicked"
QT_MOC_LITERAL(31, 688, 22), // "on_addAdButton_clicked"
QT_MOC_LITERAL(32, 711, 22), // "on_adsListView_clicked"
QT_MOC_LITERAL(33, 734, 23), // "on_backButton_2_clicked"
QT_MOC_LITERAL(34, 758, 26), // "on_deleteAdButtonn_clicked"
QT_MOC_LITERAL(35, 785, 34), // "on_historyAndStackListView_cl..."
QT_MOC_LITERAL(36, 820, 24), // "on_acceptButtonn_clicked"
QT_MOC_LITERAL(37, 845, 25), // "on_accountButtonn_clicked"
QT_MOC_LITERAL(38, 871, 25), // "on_allAdsListView_clicked"
QT_MOC_LITERAL(39, 897, 21), // "on_chatButton_clicked"
QT_MOC_LITERAL(40, 919, 26), // "on_historyListView_clicked"
QT_MOC_LITERAL(41, 946, 23), // "on_allAdsButton_clicked"
QT_MOC_LITERAL(42, 970, 22), // "on_myAdsButton_clicked"
QT_MOC_LITERAL(43, 993, 29), // "on_exitProgrammButton_clicked"
QT_MOC_LITERAL(44, 1023, 26), // "on_adHistoryButton_clicked"
QT_MOC_LITERAL(45, 1050, 24), // "on_adStackButton_clicked"
QT_MOC_LITERAL(46, 1075, 30), // "on_goToAdHistoryButton_clicked"
QT_MOC_LITERAL(47, 1106, 34), // "on_backToAccountPageButton_cl..."
QT_MOC_LITERAL(48, 1141, 34), // "on_backToAdminAdPageButton_cl..."
QT_MOC_LITERAL(49, 1176, 27) // "on_backToChatButton_clicked"

    },
    "MainMenu\0mainMenuClosed\0\0"
    "on_authorizationButton_clicked\0"
    "slotGoToMainMenuFromLog\0slotGoToMainMenuFromReg\0"
    "slotBackToMainMenuFromAddAd\0"
    "slotGoToMainMenuFromAddAd\0slotAdIsLoaded\0"
    "slotAdInformation\0slotAdIsAccepted\0"
    "slotAccountInformation\0slotUpdateInformation\0"
    "slotHistoryInformation\0slotStackInformation\0"
    "slotMyAdsInfo\0slotLoginEdited\0"
    "slotBackToMainMenuFromChat\0slotChats\0"
    "slotGetAccountInformation\0"
    "on_exitButton_clicked\0on_editNameButton_clicked\0"
    "on_editSurnameButton_clicked\0"
    "on_saveChangesButton_clicked\0"
    "on_accountButton_clicked\0"
    "on_editLoginButton_clicked\0"
    "on_logOutButton_clicked\0"
    "on_deleteAccountButton_clicked\0"
    "on_editPasswordButton_clicked\0"
    "on_setPhotoButton_clicked\0"
    "on_deletePhotoButton_clicked\0"
    "on_addAdButton_clicked\0on_adsListView_clicked\0"
    "on_backButton_2_clicked\0"
    "on_deleteAdButtonn_clicked\0"
    "on_historyAndStackListView_clicked\0"
    "on_acceptButtonn_clicked\0"
    "on_accountButtonn_clicked\0"
    "on_allAdsListView_clicked\0"
    "on_chatButton_clicked\0on_historyListView_clicked\0"
    "on_allAdsButton_clicked\0on_myAdsButton_clicked\0"
    "on_exitProgrammButton_clicked\0"
    "on_adHistoryButton_clicked\0"
    "on_adStackButton_clicked\0"
    "on_goToAdHistoryButton_clicked\0"
    "on_backToAccountPageButton_clicked\0"
    "on_backToAdminAdPageButton_clicked\0"
    "on_backToChatButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  255,    2, 0x08 /* Private */,
       4,    1,  256,    2, 0x08 /* Private */,
       5,    1,  259,    2, 0x08 /* Private */,
       6,    0,  262,    2, 0x08 /* Private */,
       7,    0,  263,    2, 0x08 /* Private */,
       8,    2,  264,    2, 0x08 /* Private */,
       9,    1,  269,    2, 0x08 /* Private */,
      10,    2,  272,    2, 0x08 /* Private */,
      11,    1,  277,    2, 0x08 /* Private */,
      12,    1,  280,    2, 0x08 /* Private */,
      13,    1,  283,    2, 0x08 /* Private */,
      14,    1,  286,    2, 0x08 /* Private */,
      15,    1,  289,    2, 0x08 /* Private */,
      16,    2,  292,    2, 0x08 /* Private */,
      17,    0,  297,    2, 0x08 /* Private */,
      18,    1,  298,    2, 0x08 /* Private */,
      19,    1,  301,    2, 0x08 /* Private */,
      20,    0,  304,    2, 0x08 /* Private */,
      21,    0,  305,    2, 0x08 /* Private */,
      22,    0,  306,    2, 0x08 /* Private */,
      23,    0,  307,    2, 0x08 /* Private */,
      24,    0,  308,    2, 0x08 /* Private */,
      25,    0,  309,    2, 0x08 /* Private */,
      26,    0,  310,    2, 0x08 /* Private */,
      27,    0,  311,    2, 0x08 /* Private */,
      28,    0,  312,    2, 0x08 /* Private */,
      29,    0,  313,    2, 0x08 /* Private */,
      30,    0,  314,    2, 0x08 /* Private */,
      31,    0,  315,    2, 0x08 /* Private */,
      32,    0,  316,    2, 0x08 /* Private */,
      33,    0,  317,    2, 0x08 /* Private */,
      34,    0,  318,    2, 0x08 /* Private */,
      35,    0,  319,    2, 0x08 /* Private */,
      36,    0,  320,    2, 0x08 /* Private */,
      37,    0,  321,    2, 0x08 /* Private */,
      38,    0,  322,    2, 0x08 /* Private */,
      39,    0,  323,    2, 0x08 /* Private */,
      40,    0,  324,    2, 0x08 /* Private */,
      41,    0,  325,    2, 0x08 /* Private */,
      42,    0,  326,    2, 0x08 /* Private */,
      43,    0,  327,    2, 0x08 /* Private */,
      44,    0,  328,    2, 0x08 /* Private */,
      45,    0,  329,    2, 0x08 /* Private */,
      46,    0,  330,    2, 0x08 /* Private */,
      47,    0,  331,    2, 0x08 /* Private */,
      48,    0,  332,    2, 0x08 /* Private */,
      49,    0,  333,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QJsonDocument,    2,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QJsonDocument,    2,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QString,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainMenuClosed(); break;
        case 1: _t->on_authorizationButton_clicked(); break;
        case 2: _t->slotGoToMainMenuFromLog((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 3: _t->slotGoToMainMenuFromReg((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 4: _t->slotBackToMainMenuFromAddAd(); break;
        case 5: _t->slotGoToMainMenuFromAddAd(); break;
        case 6: _t->slotAdIsLoaded((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2]))); break;
        case 7: _t->slotAdInformation((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 8: _t->slotAdIsAccepted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2]))); break;
        case 9: _t->slotAccountInformation((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 10: _t->slotUpdateInformation((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 11: _t->slotHistoryInformation((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 12: _t->slotStackInformation((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 13: _t->slotMyAdsInfo((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 14: _t->slotLoginEdited((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->slotBackToMainMenuFromChat(); break;
        case 16: _t->slotChats((*reinterpret_cast< QJsonDocument(*)>(_a[1]))); break;
        case 17: _t->slotGetAccountInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->on_exitButton_clicked(); break;
        case 19: _t->on_editNameButton_clicked(); break;
        case 20: _t->on_editSurnameButton_clicked(); break;
        case 21: _t->on_saveChangesButton_clicked(); break;
        case 22: _t->on_accountButton_clicked(); break;
        case 23: _t->on_editLoginButton_clicked(); break;
        case 24: _t->on_logOutButton_clicked(); break;
        case 25: _t->on_deleteAccountButton_clicked(); break;
        case 26: _t->on_editPasswordButton_clicked(); break;
        case 27: _t->on_setPhotoButton_clicked(); break;
        case 28: _t->on_deletePhotoButton_clicked(); break;
        case 29: _t->on_addAdButton_clicked(); break;
        case 30: _t->on_adsListView_clicked(); break;
        case 31: _t->on_backButton_2_clicked(); break;
        case 32: _t->on_deleteAdButtonn_clicked(); break;
        case 33: _t->on_historyAndStackListView_clicked(); break;
        case 34: _t->on_acceptButtonn_clicked(); break;
        case 35: _t->on_accountButtonn_clicked(); break;
        case 36: _t->on_allAdsListView_clicked(); break;
        case 37: _t->on_chatButton_clicked(); break;
        case 38: _t->on_historyListView_clicked(); break;
        case 39: _t->on_allAdsButton_clicked(); break;
        case 40: _t->on_myAdsButton_clicked(); break;
        case 41: _t->on_exitProgrammButton_clicked(); break;
        case 42: _t->on_adHistoryButton_clicked(); break;
        case 43: _t->on_adStackButton_clicked(); break;
        case 44: _t->on_goToAdHistoryButton_clicked(); break;
        case 45: _t->on_backToAccountPageButton_clicked(); break;
        case 46: _t->on_backToAdminAdPageButton_clicked(); break;
        case 47: _t->on_backToChatButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::mainMenuClosed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainMenu.data,
    qt_meta_data_MainMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void MainMenu::mainMenuClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
