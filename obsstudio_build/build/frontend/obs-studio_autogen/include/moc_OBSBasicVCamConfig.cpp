/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicVCamConfig.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/dialogs/OBSBasicVCamConfig.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicVCamConfig.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18OBSBasicVCamConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicVCamConfig::qt_create_metaobjectdata<qt_meta_tag_ZN18OBSBasicVCamConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicVCamConfig",
        "Accepted",
        "",
        "VCamConfig",
        "config",
        "AcceptedAndRestart",
        "OutputTypeChanged",
        "UpdateConfig"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Accepted'
        QtMocHelpers::SignalData<void(const VCamConfig &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'AcceptedAndRestart'
        QtMocHelpers::SignalData<void(const VCamConfig &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'OutputTypeChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateConfig'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicVCamConfig, qt_meta_tag_ZN18OBSBasicVCamConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicVCamConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OBSBasicVCamConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OBSBasicVCamConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18OBSBasicVCamConfigE_t>.metaTypes,
    nullptr
} };

void OBSBasicVCamConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicVCamConfig *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Accepted((*reinterpret_cast<std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 1: _t->AcceptedAndRestart((*reinterpret_cast<std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 2: _t->OutputTypeChanged(); break;
        case 3: _t->UpdateConfig(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSBasicVCamConfig::*)(const VCamConfig & )>(_a, &OBSBasicVCamConfig::Accepted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicVCamConfig::*)(const VCamConfig & )>(_a, &OBSBasicVCamConfig::AcceptedAndRestart, 1))
            return;
    }
}

const QMetaObject *OBSBasicVCamConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicVCamConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OBSBasicVCamConfigE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicVCamConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OBSBasicVCamConfig::Accepted(const VCamConfig & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OBSBasicVCamConfig::AcceptedAndRestart(const VCamConfig & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
