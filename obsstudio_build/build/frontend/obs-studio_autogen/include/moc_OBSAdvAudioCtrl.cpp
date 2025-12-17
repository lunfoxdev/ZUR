/****************************************************************************
** Meta object code from reading C++ file 'OBSAdvAudioCtrl.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/components/OBSAdvAudioCtrl.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSAdvAudioCtrl.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15OBSAdvAudioCtrlE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSAdvAudioCtrl::qt_create_metaobjectdata<qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSAdvAudioCtrl",
        "SourceActiveChanged",
        "",
        "active",
        "SourceFlagsChanged",
        "uint32_t",
        "flags",
        "SourceVolumeChanged",
        "volume",
        "SourceSyncChanged",
        "int64_t",
        "offset",
        "SourceMonitoringTypeChanged",
        "type",
        "SourceMixersChanged",
        "mixers",
        "SourceBalanceChanged",
        "balance",
        "SetSourceName",
        "newName",
        "volumeChanged",
        "db",
        "percentChanged",
        "percent",
        "downmixMonoChanged",
        "checked",
        "balanceChanged",
        "val",
        "syncOffsetChanged",
        "milliseconds",
        "monitoringTypeChanged",
        "index",
        "ResetBalance"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'SourceActiveChanged'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'SourceFlagsChanged'
        QtMocHelpers::SlotData<void(uint32_t)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'SourceVolumeChanged'
        QtMocHelpers::SlotData<void(float)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 8 },
        }}),
        // Slot 'SourceSyncChanged'
        QtMocHelpers::SlotData<void(int64_t)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'SourceMonitoringTypeChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'SourceMixersChanged'
        QtMocHelpers::SlotData<void(uint32_t)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 15 },
        }}),
        // Slot 'SourceBalanceChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'SetSourceName'
        QtMocHelpers::SlotData<void(QString)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'volumeChanged'
        QtMocHelpers::SlotData<void(double)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 21 },
        }}),
        // Slot 'percentChanged'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'downmixMonoChanged'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'balanceChanged'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'syncOffsetChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'monitoringTypeChanged'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Slot 'ResetBalance'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSAdvAudioCtrl, qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSAdvAudioCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>.metaTypes,
    nullptr
} };

void OBSAdvAudioCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSAdvAudioCtrl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SourceActiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->SourceFlagsChanged((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 2: _t->SourceVolumeChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->SourceSyncChanged((*reinterpret_cast<std::add_pointer_t<int64_t>>(_a[1]))); break;
        case 4: _t->SourceMonitoringTypeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->SourceMixersChanged((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 6: _t->SourceBalanceChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->SetSourceName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->percentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->downmixMonoChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->balanceChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->syncOffsetChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->monitoringTypeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->ResetBalance(); break;
        default: ;
        }
    }
}

const QMetaObject *OBSAdvAudioCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSAdvAudioCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSAdvAudioCtrlE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OBSAdvAudioCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
