/****************************************************************************
** Meta object code from reading C++ file 'foodandexercises.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Food/foodandexercises.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foodandexercises.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FoodAndExercises_t {
    const uint offsetsAndSize[18];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FoodAndExercises_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FoodAndExercises_t qt_meta_stringdata_FoodAndExercises = {
    {
QT_MOC_LITERAL(0, 16), // "FoodAndExercises"
QT_MOC_LITERAL(17, 7), // "getFood"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "std::vector<Food>"
QT_MOC_LITERAL(44, 4), // "food"
QT_MOC_LITERAL(49, 12), // "getExercises"
QT_MOC_LITERAL(62, 56), // "std::map<std::string,std::pai..."
QT_MOC_LITERAL(119, 9), // "exercises"
QT_MOC_LITERAL(129, 22) // "on_CloseButton_clicked"

    },
    "FoodAndExercises\0getFood\0\0std::vector<Food>\0"
    "food\0getExercises\0"
    "std::map<std::string,std::pair<std::size_t,std::size_t>>\0"
    "exercises\0on_CloseButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FoodAndExercises[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       8,    0,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void FoodAndExercises::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoodAndExercises *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getFood((*reinterpret_cast< std::add_pointer_t<std::vector<Food>>>(_a[1]))); break;
        case 1: _t->getExercises((*reinterpret_cast< std::add_pointer_t<std::map<std::string,std::pair<std::size_t,std::size_t>>>>(_a[1]))); break;
        case 2: _t->on_CloseButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FoodAndExercises::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FoodAndExercises.offsetsAndSize,
    qt_meta_data_FoodAndExercises,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FoodAndExercises_t
, QtPrivate::TypeAndForceComplete<FoodAndExercises, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const std::vector<Food> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const std::map<std::string,std::pair<std::size_t,std::size_t>> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *FoodAndExercises::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoodAndExercises::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoodAndExercises.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FoodAndExercises::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
