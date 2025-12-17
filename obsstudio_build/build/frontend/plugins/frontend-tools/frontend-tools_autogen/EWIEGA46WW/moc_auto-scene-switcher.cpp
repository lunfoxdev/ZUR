/****************************************************************************
** Meta object code from reading C++ file 'auto-scene-switcher.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../frontend/plugins/frontend-tools/auto-scene-switcher.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auto-scene-switcher.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13SceneSwitcherE_t {};
} // unnamed namespace

template <> constexpr inline auto SceneSwitcher::qt_create_metaobjectdata<qt_meta_tag_ZN13SceneSwitcherE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SceneSwitcher",
        "on_switches_currentRowChanged",
        "",
        "idx",
        "on_close_clicked",
        "on_add_clicked",
        "on_remove_clicked",
        "on_noMatchDontSwitch_clicked",
        "on_noMatchSwitch_clicked",
        "on_noMatchSwitchScene_currentTextChanged",
        "text",
        "on_checkInterval_valueChanged",
        "value",
        "on_toggleStartButton_clicked",
        "finished"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_switches_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_close_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_add_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_remove_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_noMatchDontSwitch_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_noMatchSwitch_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_noMatchSwitchScene_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_checkInterval_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'on_toggleStartButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'finished'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SceneSwitcher, qt_meta_tag_ZN13SceneSwitcherE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SceneSwitcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SceneSwitcherE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SceneSwitcherE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SceneSwitcherE_t>.metaTypes,
    nullptr
} };

void SceneSwitcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SceneSwitcher *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_switches_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->on_remove_clicked(); break;
        case 4: _t->on_noMatchDontSwitch_clicked(); break;
        case 5: _t->on_noMatchSwitch_clicked(); break;
        case 6: _t->on_noMatchSwitchScene_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_checkInterval_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_toggleStartButton_clicked(); break;
        case 9: _t->finished(); break;
        default: ;
        }
    }
}

const QMetaObject *SceneSwitcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneSwitcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SceneSwitcherE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SceneSwitcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
