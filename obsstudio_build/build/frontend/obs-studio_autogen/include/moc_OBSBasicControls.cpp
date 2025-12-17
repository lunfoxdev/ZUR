/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicControls.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/OBSBasicControls.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicControls.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16OBSBasicControlsE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicControls::qt_create_metaobjectdata<qt_meta_tag_ZN16OBSBasicControlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicControls",
        "StreamButtonClicked",
        "",
        "BroadcastButtonClicked",
        "RecordButtonClicked",
        "PauseRecordButtonClicked",
        "ReplayBufferButtonClicked",
        "SaveReplayBufferButtonClicked",
        "VirtualCamButtonClicked",
        "VirtualCamConfigButtonClicked",
        "StudioModeButtonClicked",
        "SettingsButtonClicked",
        "StartStreamMenuActionClicked",
        "StopStreamMenuActionClicked",
        "ForceStopStreamMenuActionClicked",
        "StreamingPreparing",
        "StreamingStarting",
        "broadcastAutoStart",
        "StreamingStarted",
        "withDelay",
        "StreamingStopping",
        "StreamingStopped",
        "BroadcastStreamReady",
        "ready",
        "BroadcastStreamActive",
        "BroadcastStreamStarted",
        "autoStop",
        "RecordingStarted",
        "pausable",
        "RecordingPaused",
        "RecordingUnpaused",
        "RecordingStopping",
        "RecordingStopped",
        "ReplayBufferStarted",
        "ReplayBufferStopping",
        "ReplayBufferStopped",
        "VirtualCamStarted",
        "VirtualCamStopped",
        "UpdateStudioModeState",
        "enabled",
        "EnableBroadcastFlow",
        "EnableReplayBufferButtons",
        "EnableVirtualCamButtons"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'StreamButtonClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'BroadcastButtonClicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'RecordButtonClicked'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'PauseRecordButtonClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ReplayBufferButtonClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SaveReplayBufferButtonClicked'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'VirtualCamButtonClicked'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'VirtualCamConfigButtonClicked'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StudioModeButtonClicked'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SettingsButtonClicked'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StartStreamMenuActionClicked'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StopStreamMenuActionClicked'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ForceStopStreamMenuActionClicked'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamingPreparing'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StreamingStarting'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Slot 'StreamingStarted'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'StreamingStopping'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StreamingStopped'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'BroadcastStreamReady'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'BroadcastStreamActive'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'BroadcastStreamStarted'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'RecordingStarted'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'RecordingPaused'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordingUnpaused'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordingStopping'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordingStopped'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReplayBufferStarted'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReplayBufferStopping'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReplayBufferStopped'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VirtualCamStarted'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VirtualCamStopped'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateStudioModeState'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'EnableBroadcastFlow'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'EnableReplayBufferButtons'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'EnableVirtualCamButtons'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicControls, qt_meta_tag_ZN16OBSBasicControlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicControlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicControlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16OBSBasicControlsE_t>.metaTypes,
    nullptr
} };

void OBSBasicControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicControls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->StreamButtonClicked(); break;
        case 1: _t->BroadcastButtonClicked(); break;
        case 2: _t->RecordButtonClicked(); break;
        case 3: _t->PauseRecordButtonClicked(); break;
        case 4: _t->ReplayBufferButtonClicked(); break;
        case 5: _t->SaveReplayBufferButtonClicked(); break;
        case 6: _t->VirtualCamButtonClicked(); break;
        case 7: _t->VirtualCamConfigButtonClicked(); break;
        case 8: _t->StudioModeButtonClicked(); break;
        case 9: _t->SettingsButtonClicked(); break;
        case 10: _t->StartStreamMenuActionClicked(); break;
        case 11: _t->StopStreamMenuActionClicked(); break;
        case 12: _t->ForceStopStreamMenuActionClicked(); break;
        case 13: _t->StreamingPreparing(); break;
        case 14: _t->StreamingStarting((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->StreamingStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->StreamingStopping(); break;
        case 17: _t->StreamingStopped((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->BroadcastStreamReady((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->BroadcastStreamActive(); break;
        case 20: _t->BroadcastStreamStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->RecordingStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->RecordingPaused(); break;
        case 23: _t->RecordingUnpaused(); break;
        case 24: _t->RecordingStopping(); break;
        case 25: _t->RecordingStopped(); break;
        case 26: _t->ReplayBufferStarted(); break;
        case 27: _t->ReplayBufferStopping(); break;
        case 28: _t->ReplayBufferStopped(); break;
        case 29: _t->VirtualCamStarted(); break;
        case 30: _t->VirtualCamStopped(); break;
        case 31: _t->UpdateStudioModeState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->EnableBroadcastFlow((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->EnableReplayBufferButtons((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->EnableVirtualCamButtons(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::StreamButtonClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::BroadcastButtonClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::RecordButtonClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::PauseRecordButtonClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::ReplayBufferButtonClicked, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::SaveReplayBufferButtonClicked, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::VirtualCamButtonClicked, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::VirtualCamConfigButtonClicked, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::StudioModeButtonClicked, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::SettingsButtonClicked, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::StartStreamMenuActionClicked, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::StopStreamMenuActionClicked, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicControls::*)()>(_a, &OBSBasicControls::ForceStopStreamMenuActionClicked, 12))
            return;
    }
}

const QMetaObject *OBSBasicControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicControlsE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int OBSBasicControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void OBSBasicControls::StreamButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSBasicControls::BroadcastButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OBSBasicControls::RecordButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OBSBasicControls::PauseRecordButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OBSBasicControls::ReplayBufferButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OBSBasicControls::SaveReplayBufferButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OBSBasicControls::VirtualCamButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OBSBasicControls::VirtualCamConfigButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OBSBasicControls::StudioModeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OBSBasicControls::SettingsButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OBSBasicControls::StartStreamMenuActionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OBSBasicControls::StopStreamMenuActionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OBSBasicControls::ForceStopStreamMenuActionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
