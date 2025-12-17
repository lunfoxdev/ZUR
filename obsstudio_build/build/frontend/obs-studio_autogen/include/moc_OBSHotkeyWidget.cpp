/****************************************************************************
** Meta object code from reading C++ file 'OBSHotkeyWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/settings/OBSHotkeyWidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSHotkeyWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15OBSHotkeyWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSHotkeyWidget::qt_create_metaobjectdata<qt_meta_tag_ZN15OBSHotkeyWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSHotkeyWidget",
        "KeyChanged",
        "",
        "SearchKey",
        "obs_key_combination_t",
        "HandleChangedBindings",
        "obs_hotkey_id",
        "id_"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'KeyChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SearchKey'
        QtMocHelpers::SignalData<void(obs_key_combination_t)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'HandleChangedBindings'
        QtMocHelpers::SlotData<void(obs_hotkey_id)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSHotkeyWidget, qt_meta_tag_ZN15OBSHotkeyWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSHotkeyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSHotkeyWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSHotkeyWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15OBSHotkeyWidgetE_t>.metaTypes,
    nullptr
} };

void OBSHotkeyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSHotkeyWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->KeyChanged(); break;
        case 1: _t->SearchKey((*reinterpret_cast<std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 2: _t->HandleChangedBindings((*reinterpret_cast<std::add_pointer_t<obs_hotkey_id>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSHotkeyWidget::*)()>(_a, &OBSHotkeyWidget::KeyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSHotkeyWidget::*)(obs_key_combination_t )>(_a, &OBSHotkeyWidget::SearchKey, 1))
            return;
    }
}

const QMetaObject *OBSHotkeyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSHotkeyWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OBSHotkeyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OBSHotkeyWidget::KeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSHotkeyWidget::SearchKey(obs_key_combination_t _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
