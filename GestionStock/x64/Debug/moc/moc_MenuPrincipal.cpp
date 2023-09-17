/****************************************************************************
** Meta object code from reading C++ file 'MenuPrincipal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MenuPrincipal.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuPrincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
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
struct qt_meta_stringdata_MenuPrincipal_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[18];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MenuPrincipal_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MenuPrincipal_t qt_meta_stringdata_MenuPrincipal = {
    {
        QT_MOC_LITERAL(0, 13),  // "MenuPrincipal"
        QT_MOC_LITERAL(14, 19),  // "on_btnAjout_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 19),  // "on_btnSuppr_clicked"
        QT_MOC_LITERAL(55, 19),  // "on_btnModif_clicked"
        QT_MOC_LITERAL(75, 19),  // "on_btnListe_clicked"
        QT_MOC_LITERAL(95, 17),  // "on_btnMaJ_clicked"
        QT_MOC_LITERAL(113, 21),  // "on_btnMvStock_clicked"
        QT_MOC_LITERAL(135, 21),  // "on_btnQuitter_clicked"
        QT_MOC_LITERAL(157, 17)   // "on_btnBon_clicked"
    },
    "MenuPrincipal",
    "on_btnAjout_clicked",
    "",
    "on_btnSuppr_clicked",
    "on_btnModif_clicked",
    "on_btnListe_clicked",
    "on_btnMaJ_clicked",
    "on_btnMvStock_clicked",
    "on_btnQuitter_clicked",
    "on_btnBon_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MenuPrincipal[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject MenuPrincipal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MenuPrincipal.offsetsAndSizes,
    qt_meta_data_MenuPrincipal,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MenuPrincipal_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MenuPrincipal, std::true_type>,
        // method 'on_btnAjout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSuppr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnModif_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnListe_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMaJ_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMvStock_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnQuitter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnBon_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MenuPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuPrincipal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnAjout_clicked(); break;
        case 1: _t->on_btnSuppr_clicked(); break;
        case 2: _t->on_btnModif_clicked(); break;
        case 3: _t->on_btnListe_clicked(); break;
        case 4: _t->on_btnMaJ_clicked(); break;
        case 5: _t->on_btnMvStock_clicked(); break;
        case 6: _t->on_btnQuitter_clicked(); break;
        case 7: _t->on_btnBon_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MenuPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuPrincipal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MenuPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
