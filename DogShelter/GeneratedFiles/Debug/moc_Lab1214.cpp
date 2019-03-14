/****************************************************************************
** Meta object code from reading C++ file 'Lab1214.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab1214.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lab1214.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Administrator_t {
    QByteArrayData data[11];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Administrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Administrator_t qt_meta_stringdata_Administrator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Administrator"
QT_MOC_LITERAL(1, 14, 12), // "addDogSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "filterDogsSignal"
QT_MOC_LITERAL(4, 45, 19), // "filterDogsAgeSignal"
QT_MOC_LITERAL(5, 65, 17), // "dogsUpdatedSignal"
QT_MOC_LITERAL(6, 83, 19), // "addDogButtonHandler"
QT_MOC_LITERAL(7, 103, 22), // "removeDogButtonHandler"
QT_MOC_LITERAL(8, 126, 18), // "uptadeButtonHandel"
QT_MOC_LITERAL(9, 145, 23), // "filterDogsButtonHandler"
QT_MOC_LITERAL(10, 169, 20) // "filterAgeDogsHandler"

    },
    "Administrator\0addDogSignal\0\0"
    "filterDogsSignal\0filterDogsAgeSignal\0"
    "dogsUpdatedSignal\0addDogButtonHandler\0"
    "removeDogButtonHandler\0uptadeButtonHandel\0"
    "filterDogsButtonHandler\0filterAgeDogsHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Administrator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Administrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Administrator *_t = static_cast<Administrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addDogSignal(); break;
        case 1: _t->filterDogsSignal(); break;
        case 2: _t->filterDogsAgeSignal(); break;
        case 3: _t->dogsUpdatedSignal(); break;
        case 4: _t->addDogButtonHandler(); break;
        case 5: _t->removeDogButtonHandler(); break;
        case 6: _t->uptadeButtonHandel(); break;
        case 7: _t->filterDogsButtonHandler(); break;
        case 8: _t->filterAgeDogsHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Administrator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Administrator::addDogSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Administrator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Administrator::filterDogsSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Administrator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Administrator::filterDogsAgeSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Administrator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Administrator::dogsUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Administrator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Administrator.data,
      qt_meta_data_Administrator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Administrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Administrator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Administrator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Administrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Administrator::addDogSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Administrator::filterDogsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Administrator::filterDogsAgeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Administrator::dogsUpdatedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_User_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_User_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_User_t qt_meta_stringdata_User = {
    {
QT_MOC_LITERAL(0, 0, 4), // "User"
QT_MOC_LITERAL(1, 5, 11), // "adoptSignal"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "saveSignal"
QT_MOC_LITERAL(4, 29, 14), // "openFileSignal"
QT_MOC_LITERAL(5, 44, 12), // "filterSignal"
QT_MOC_LITERAL(6, 57, 17), // "dogsUpdatedSignal"
QT_MOC_LITERAL(7, 75, 18), // "adoptButtonHandler"
QT_MOC_LITERAL(8, 94, 17), // "saveButtonHandler"
QT_MOC_LITERAL(9, 112, 21), // "openFileButtonHandler"
QT_MOC_LITERAL(10, 134, 19) // "filterButtonHandler"

    },
    "User\0adoptSignal\0\0saveSignal\0"
    "openFileSignal\0filterSignal\0"
    "dogsUpdatedSignal\0adoptButtonHandler\0"
    "saveButtonHandler\0openFileButtonHandler\0"
    "filterButtonHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_User[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        User *_t = static_cast<User *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adoptSignal(); break;
        case 1: _t->saveSignal(); break;
        case 2: _t->openFileSignal(); break;
        case 3: _t->filterSignal(); break;
        case 4: _t->dogsUpdatedSignal(); break;
        case 5: _t->adoptButtonHandler(); break;
        case 6: _t->saveButtonHandler(); break;
        case 7: _t->openFileButtonHandler(); break;
        case 8: _t->filterButtonHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (User::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::adoptSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (User::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::saveSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (User::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::openFileSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (User::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::filterSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (User::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::dogsUpdatedSignal)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject User::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_User.data,
      qt_meta_data_User,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_User.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void User::adoptSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void User::saveSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void User::openFileSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void User::filterSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void User::dogsUpdatedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Menu"
QT_MOC_LITERAL(1, 5, 25), // "administratorButtonSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "userButtonSignal"
QT_MOC_LITERAL(4, 49, 26), // "administratorButtonHandler"
QT_MOC_LITERAL(5, 76, 17) // "userButtonHandler"

    },
    "Menu\0administratorButtonSignal\0\0"
    "userButtonSignal\0administratorButtonHandler\0"
    "userButtonHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Menu *_t = static_cast<Menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->administratorButtonSignal(); break;
        case 1: _t->userButtonSignal(); break;
        case 2: _t->administratorButtonHandler(); break;
        case 3: _t->userButtonHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Menu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::administratorButtonSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Menu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::userButtonSignal)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Menu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Menu.data,
      qt_meta_data_Menu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Menu::administratorButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Menu::userButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_FileModeMenu_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileModeMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileModeMenu_t qt_meta_stringdata_FileModeMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileModeMenu"
QT_MOC_LITERAL(1, 13, 9), // "CSVSignal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "HTMLSignal"
QT_MOC_LITERAL(4, 35, 10), // "CSVHandler"
QT_MOC_LITERAL(5, 46, 11) // "HTMLHandler"

    },
    "FileModeMenu\0CSVSignal\0\0HTMLSignal\0"
    "CSVHandler\0HTMLHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileModeMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileModeMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileModeMenu *_t = static_cast<FileModeMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CSVSignal(); break;
        case 1: _t->HTMLSignal(); break;
        case 2: _t->CSVHandler(); break;
        case 3: _t->HTMLHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FileModeMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileModeMenu::CSVSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileModeMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileModeMenu::HTMLSignal)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FileModeMenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FileModeMenu.data,
      qt_meta_data_FileModeMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileModeMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileModeMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileModeMenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FileModeMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FileModeMenu::CSVSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileModeMenu::HTMLSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
