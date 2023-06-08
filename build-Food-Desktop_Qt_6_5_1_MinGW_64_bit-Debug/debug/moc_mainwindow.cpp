/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Food/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[66];
    char stringdata0[430];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 8), // "sendFood"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 17), // "std::vector<Food>"
QT_MOC_LITERAL(39, 4), // "food"
QT_MOC_LITERAL(44, 13), // "sendExercises"
QT_MOC_LITERAL(58, 56), // "std::map<std::string,std::pai..."
QT_MOC_LITERAL(115, 9), // "exercises"
QT_MOC_LITERAL(125, 21), // "on_FoodButton_clicked"
QT_MOC_LITERAL(147, 25), // "on_ExerciseButton_clicked"
QT_MOC_LITERAL(173, 23), // "on_OutputButton_clicked"
QT_MOC_LITERAL(197, 21), // "on_SaveButton_clicked"
QT_MOC_LITERAL(219, 26), // "on_ChangeDayButton_clicked"
QT_MOC_LITERAL(246, 10), // "reciveFood"
QT_MOC_LITERAL(257, 4), // "Food"
QT_MOC_LITERAL(262, 13), // "reciveBicycle"
QT_MOC_LITERAL(276, 7), // "Bicycle"
QT_MOC_LITERAL(284, 7), // "bicycle"
QT_MOC_LITERAL(292, 9), // "reciveRun"
QT_MOC_LITERAL(302, 3), // "Run"
QT_MOC_LITERAL(306, 3), // "run"
QT_MOC_LITERAL(310, 13), // "recivePull_Up"
QT_MOC_LITERAL(324, 7), // "Pull_Up"
QT_MOC_LITERAL(332, 7), // "pull_Up"
QT_MOC_LITERAL(340, 13), // "recivePush_Up"
QT_MOC_LITERAL(354, 7), // "Push_Up"
QT_MOC_LITERAL(362, 7), // "push_Up"
QT_MOC_LITERAL(370, 14), // "reciveTwisting"
QT_MOC_LITERAL(385, 8), // "Twisting"
QT_MOC_LITERAL(394, 8), // "twisting"
QT_MOC_LITERAL(403, 12), // "reciveSquats"
QT_MOC_LITERAL(416, 6), // "Squats"
QT_MOC_LITERAL(423, 6) // "squats"

    },
    "MainWindow\0sendFood\0\0std::vector<Food>\0"
    "food\0sendExercises\0"
    "std::map<std::string,std::pair<std::size_t,std::size_t>>\0"
    "exercises\0on_FoodButton_clicked\0"
    "on_ExerciseButton_clicked\0"
    "on_OutputButton_clicked\0on_SaveButton_clicked\0"
    "on_ChangeDayButton_clicked\0reciveFood\0"
    "Food\0reciveBicycle\0Bicycle\0bicycle\0"
    "reciveRun\0Run\0run\0recivePull_Up\0Pull_Up\0"
    "pull_Up\0recivePush_Up\0Push_Up\0push_Up\0"
    "reciveTwisting\0Twisting\0twisting\0"
    "reciveSquats\0Squats\0squats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,
       5,    1,  101,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  104,    2, 0x08,    5 /* Private */,
       9,    0,  105,    2, 0x08,    6 /* Private */,
      10,    0,  106,    2, 0x08,    7 /* Private */,
      11,    0,  107,    2, 0x08,    8 /* Private */,
      12,    0,  108,    2, 0x08,    9 /* Private */,
      13,    1,  109,    2, 0x0a,   10 /* Public */,
      15,    1,  112,    2, 0x0a,   12 /* Public */,
      18,    1,  115,    2, 0x0a,   14 /* Public */,
      21,    1,  118,    2, 0x0a,   16 /* Public */,
      24,    1,  121,    2, 0x0a,   18 /* Public */,
      27,    1,  124,    2, 0x0a,   20 /* Public */,
      30,    1,  127,    2, 0x0a,   22 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    4,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendFood((*reinterpret_cast< std::add_pointer_t<std::vector<Food>>>(_a[1]))); break;
        case 1: _t->sendExercises((*reinterpret_cast< std::add_pointer_t<std::map<std::string,std::pair<std::size_t,std::size_t>>>>(_a[1]))); break;
        case 2: _t->on_FoodButton_clicked(); break;
        case 3: _t->on_ExerciseButton_clicked(); break;
        case 4: _t->on_OutputButton_clicked(); break;
        case 5: _t->on_SaveButton_clicked(); break;
        case 6: _t->on_ChangeDayButton_clicked(); break;
        case 7: _t->reciveFood((*reinterpret_cast< std::add_pointer_t<Food>>(_a[1]))); break;
        case 8: _t->reciveBicycle((*reinterpret_cast< std::add_pointer_t<Bicycle>>(_a[1]))); break;
        case 9: _t->reciveRun((*reinterpret_cast< std::add_pointer_t<Run>>(_a[1]))); break;
        case 10: _t->recivePull_Up((*reinterpret_cast< std::add_pointer_t<Pull_Up>>(_a[1]))); break;
        case 11: _t->recivePush_Up((*reinterpret_cast< std::add_pointer_t<Push_Up>>(_a[1]))); break;
        case 12: _t->reciveTwisting((*reinterpret_cast< std::add_pointer_t<Twisting>>(_a[1]))); break;
        case 13: _t->reciveSquats((*reinterpret_cast< std::add_pointer_t<Squats>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const std::vector<Food> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendFood)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const std::map<std::string,std::pair<std::size_t,std::size_t>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendExercises)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const std::vector<Food> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const std::map<std::string,std::pair<std::size_t,std::size_t>> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Food &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Bicycle &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Run &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Pull_Up &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Push_Up &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Twisting &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Squats &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendFood(const std::vector<Food> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendExercises(const std::map<std::string,std::pair<std::size_t,std::size_t>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
