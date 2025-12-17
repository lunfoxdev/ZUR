/****************************************************************************
** Meta object code from reading C++ file 'VolControl.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/VolControl.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VolControl.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10VolControlE_t {};
} // unnamed namespace

template <> constexpr inline auto VolControl::qt_create_metaobjectdata<qt_meta_tag_ZN10VolControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VolControl",
        "ConfigClicked",
        "",
        "VolumeChanged",
        "VolumeMuted",
        "muted",
        "MixersOrMonitoringChanged",
        "SetMuted",
        "checked",
        "SliderChanged",
        "vol",
        "updateText"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ConfigClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'VolumeChanged'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VolumeMuted'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'MixersOrMonitoringChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetMuted'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'SliderChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'updateText'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VolControl, qt_meta_tag_ZN10VolControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VolControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VolControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VolControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10VolControlE_t>.metaTypes,
    nullptr
} };

void VolControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VolControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ConfigClicked(); break;
        case 1: _t->VolumeChanged(); break;
        case 2: _t->VolumeMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->MixersOrMonitoringChanged(); break;
        case 4: _t->SetMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->SliderChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->updateText(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VolControl::*)()>(_a, &VolControl::ConfigClicked, 0))
            return;
    }
}

const QMetaObject *VolControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VolControlE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int VolControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VolControl::ConfigClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
