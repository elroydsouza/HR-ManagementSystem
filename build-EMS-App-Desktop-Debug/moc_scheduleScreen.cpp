/****************************************************************************
** Meta object code from reading C++ file 'scheduleScreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EMS-App/scheduleScreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scheduleScreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scheduleScreen_t {
    QByteArrayData data[13];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scheduleScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scheduleScreen_t qt_meta_stringdata_scheduleScreen = {
    {
QT_MOC_LITERAL(0, 0, 14), // "scheduleScreen"
QT_MOC_LITERAL(1, 15, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "on_cb_employees_activated"
QT_MOC_LITERAL(4, 62, 4), // "arg1"
QT_MOC_LITERAL(5, 67, 23), // "on_btn_override_clicked"
QT_MOC_LITERAL(6, 91, 23), // "on_btn_schedule_clicked"
QT_MOC_LITERAL(7, 115, 26), // "on_btn_viewCurrent_clicked"
QT_MOC_LITERAL(8, 142, 25), // "on_btn_viewPurged_clicked"
QT_MOC_LITERAL(9, 168, 20), // "on_btn_purge_clicked"
QT_MOC_LITERAL(10, 189, 27), // "on_btn_purgeCurrent_clicked"
QT_MOC_LITERAL(11, 217, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 239, 23) // "on_pushButton_2_clicked"

    },
    "scheduleScreen\0on_btn_back_clicked\0\0"
    "on_cb_employees_activated\0arg1\0"
    "on_btn_override_clicked\0on_btn_schedule_clicked\0"
    "on_btn_viewCurrent_clicked\0"
    "on_btn_viewPurged_clicked\0"
    "on_btn_purge_clicked\0on_btn_purgeCurrent_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scheduleScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
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

void scheduleScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<scheduleScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_cb_employees_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btn_override_clicked(); break;
        case 3: _t->on_btn_schedule_clicked(); break;
        case 4: _t->on_btn_viewCurrent_clicked(); break;
        case 5: _t->on_btn_viewPurged_clicked(); break;
        case 6: _t->on_btn_purge_clicked(); break;
        case 7: _t->on_btn_purgeCurrent_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject scheduleScreen::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_scheduleScreen.data,
    qt_meta_data_scheduleScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *scheduleScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scheduleScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scheduleScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int scheduleScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
