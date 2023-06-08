/****************************************************************************
** Meta object code from reading C++ file 'addexercise.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Food/addexercise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addexercise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddExercise_t {
    const uint offsetsAndSize[40];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AddExercise_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AddExercise_t qt_meta_stringdata_AddExercise = {
    {
QT_MOC_LITERAL(0, 11), // "AddExercise"
QT_MOC_LITERAL(12, 11), // "sendBicycle"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 7), // "Bicycle"
QT_MOC_LITERAL(33, 7), // "bicycle"
QT_MOC_LITERAL(41, 7), // "sendRun"
QT_MOC_LITERAL(49, 3), // "Run"
QT_MOC_LITERAL(53, 3), // "run"
QT_MOC_LITERAL(57, 11), // "sendPull_Up"
QT_MOC_LITERAL(69, 7), // "Pull_Up"
QT_MOC_LITERAL(77, 11), // "sendPush_Up"
QT_MOC_LITERAL(89, 7), // "Push_Up"
QT_MOC_LITERAL(97, 12), // "sendTwisting"
QT_MOC_LITERAL(110, 8), // "Twisting"
QT_MOC_LITERAL(119, 10), // "sendSquats"
QT_MOC_LITERAL(130, 6), // "Squats"
QT_MOC_LITERAL(137, 27), // "on_FoodCancelButton_clicked"
QT_MOC_LITERAL(165, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(187, 5), // "index"
QT_MOC_LITERAL(193, 24) // "on_FoodAddButton_clicked"

    },
    "AddExercise\0sendBicycle\0\0Bicycle\0"
    "bicycle\0sendRun\0Run\0run\0sendPull_Up\0"
    "Pull_Up\0sendPush_Up\0Push_Up\0sendTwisting\0"
    "Twisting\0sendSquats\0Squats\0"
    "on_FoodCancelButton_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_FoodAddButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddExercise[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    1,   71,    2, 0x06,    3 /* Public */,
       8,    1,   74,    2, 0x06,    5 /* Public */,
      10,    1,   77,    2, 0x06,    7 /* Public */,
      12,    1,   80,    2, 0x06,    9 /* Public */,
      14,    1,   83,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,   86,    2, 0x08,   13 /* Private */,
      17,    1,   87,    2, 0x08,   14 /* Private */,
      19,    0,   90,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 13,    4,
    QMetaType::Void, 0x80000000 | 15,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,

       0        // eod
};

void AddExercise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddExercise *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendBicycle((*reinterpret_cast< std::add_pointer_t<Bicycle>>(_a[1]))); break;
        case 1: _t->sendRun((*reinterpret_cast< std::add_pointer_t<Run>>(_a[1]))); break;
        case 2: _t->sendPull_Up((*reinterpret_cast< std::add_pointer_t<Pull_Up>>(_a[1]))); break;
        case 3: _t->sendPush_Up((*reinterpret_cast< std::add_pointer_t<Push_Up>>(_a[1]))); break;
        case 4: _t->sendTwisting((*reinterpret_cast< std::add_pointer_t<Twisting>>(_a[1]))); break;
        case 5: _t->sendSquats((*reinterpret_cast< std::add_pointer_t<Squats>>(_a[1]))); break;
        case 6: _t->on_FoodCancelButton_clicked(); break;
        case 7: _t->on_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_FoodAddButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddExercise::*)(const Bicycle & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendBicycle)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddExercise::*)(const Run & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendRun)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddExercise::*)(const Pull_Up & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendPull_Up)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AddExercise::*)(const Push_Up & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendPush_Up)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AddExercise::*)(const Twisting & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendTwisting)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AddExercise::*)(const Squats & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddExercise::sendSquats)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject AddExercise::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddExercise.offsetsAndSize,
    qt_meta_data_AddExercise,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AddExercise_t
, QtPrivate::TypeAndForceComplete<AddExercise, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Bicycle &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Run &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Pull_Up &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Push_Up &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Twisting &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Squats &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AddExercise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddExercise::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddExercise.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddExercise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AddExercise::sendBicycle(const Bicycle & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddExercise::sendRun(const Run & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddExercise::sendPull_Up(const Pull_Up & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AddExercise::sendPush_Up(const Push_Up & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AddExercise::sendTwisting(const Twisting & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AddExercise::sendSquats(const Squats & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
