/****************************************************************************
** Meta object code from reading C++ file 'departmentScreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EMS-App/departmentScreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'departmentScreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_departmentScreen_t {
    QByteArrayData data[17];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_departmentScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_departmentScreen_t qt_meta_stringdata_departmentScreen = {
    {
QT_MOC_LITERAL(0, 0, 16), // "departmentScreen"
QT_MOC_LITERAL(1, 17, 21), // "on_btn_search_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(4, 60, 26), // "on_btn_maintenance_clicked"
QT_MOC_LITERAL(5, 87, 29), // "on_Mtbl_departments_activated"
QT_MOC_LITERAL(6, 117, 23), // "on_btn_generate_clicked"
QT_MOC_LITERAL(7, 141, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(8, 162, 21), // "on_btn_update_clicked"
QT_MOC_LITERAL(9, 184, 21), // "on_btn_insert_clicked"
QT_MOC_LITERAL(10, 206, 8), // "clearAll"
QT_MOC_LITERAL(11, 215, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(12, 237, 27), // "on_cb_departments_activated"
QT_MOC_LITERAL(13, 265, 4), // "arg1"
QT_MOC_LITERAL(14, 270, 16), // "fillDeptComboBox"
QT_MOC_LITERAL(15, 287, 19), // "on_btn_save_clicked"
QT_MOC_LITERAL(16, 307, 24) // "on_le_search_textChanged"

    },
    "departmentScreen\0on_btn_search_clicked\0"
    "\0on_btn_back_clicked\0on_btn_maintenance_clicked\0"
    "on_Mtbl_departments_activated\0"
    "on_btn_generate_clicked\0on_btn_clear_clicked\0"
    "on_btn_update_clicked\0on_btn_insert_clicked\0"
    "clearAll\0on_btn_delete_clicked\0"
    "on_cb_departments_activated\0arg1\0"
    "fillDeptComboBox\0on_btn_save_clicked\0"
    "on_le_search_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_departmentScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void departmentScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<departmentScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_search_clicked(); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->on_btn_maintenance_clicked(); break;
        case 3: _t->on_Mtbl_departments_activated(); break;
        case 4: _t->on_btn_generate_clicked(); break;
        case 5: _t->on_btn_clear_clicked(); break;
        case 6: _t->on_btn_update_clicked(); break;
        case 7: _t->on_btn_insert_clicked(); break;
        case 8: _t->clearAll(); break;
        case 9: _t->on_btn_delete_clicked(); break;
        case 10: _t->on_cb_departments_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->fillDeptComboBox(); break;
        case 12: _t->on_btn_save_clicked(); break;
        case 13: _t->on_le_search_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject departmentScreen::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_departmentScreen.data,
    qt_meta_data_departmentScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *departmentScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *departmentScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_departmentScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int departmentScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
