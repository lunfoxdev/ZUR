/****************************************************************************
** Meta object code from reading C++ file 'MediaControls.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/components/MediaControls.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MediaControls.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13MediaControlsE_t {};
} // unnamed namespace

template <> constexpr inline auto MediaControls::qt_create_metaobjectdata<qt_meta_tag_ZN13MediaControlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MediaControls",
        "on_playPauseButton_clicked",
        "",
        "on_stopButton_clicked",
        "on_nextButton_clicked",
        "on_previousButton_clicked",
        "on_durationLabel_clicked",
        "AbsoluteSliderClicked",
        "AbsoluteSliderReleased",
        "AbsoluteSliderHovered",
        "val",
        "AbsoluteSliderMoved",
        "SetSliderPosition",
        "SetPlayingState",
        "SetPausedState",
        "SetRestartState",
        "RestartMedia",
        "StopMedia",
        "PlaylistNext",
        "PlaylistPrevious",
        "SeekTimerCallback",
        "MoveSliderFoward",
        "seconds",
        "MoveSliderBackwards",
        "UpdateSlideCounter",
        "UpdateLabels",
        "PlayMedia",
        "PauseMedia"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_playPauseButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_stopButton_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nextButton_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_previousButton_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_durationLabel_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AbsoluteSliderClicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AbsoluteSliderReleased'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AbsoluteSliderHovered'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'AbsoluteSliderMoved'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'SetSliderPosition'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetPlayingState'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetPausedState'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetRestartState'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RestartMedia'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StopMedia'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'PlaylistNext'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'PlaylistPrevious'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SeekTimerCallback'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'MoveSliderFoward'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'MoveSliderFoward'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'MoveSliderBackwards'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'MoveSliderBackwards'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'UpdateSlideCounter'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateLabels'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'PlayMedia'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PauseMedia'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MediaControls, qt_meta_tag_ZN13MediaControlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MediaControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MediaControlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MediaControlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13MediaControlsE_t>.metaTypes,
    nullptr
} };

void MediaControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MediaControls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_playPauseButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_nextButton_clicked(); break;
        case 3: _t->on_previousButton_clicked(); break;
        case 4: _t->on_durationLabel_clicked(); break;
        case 5: _t->AbsoluteSliderClicked(); break;
        case 6: _t->AbsoluteSliderReleased(); break;
        case 7: _t->AbsoluteSliderHovered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->AbsoluteSliderMoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->SetSliderPosition(); break;
        case 10: _t->SetPlayingState(); break;
        case 11: _t->SetPausedState(); break;
        case 12: _t->SetRestartState(); break;
        case 13: _t->RestartMedia(); break;
        case 14: _t->StopMedia(); break;
        case 15: _t->PlaylistNext(); break;
        case 16: _t->PlaylistPrevious(); break;
        case 17: _t->SeekTimerCallback(); break;
        case 18: _t->MoveSliderFoward((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->MoveSliderFoward(); break;
        case 20: _t->MoveSliderBackwards((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->MoveSliderBackwards(); break;
        case 22: _t->UpdateSlideCounter(); break;
        case 23: _t->UpdateLabels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->PlayMedia(); break;
        case 25: _t->PauseMedia(); break;
        default: ;
        }
    }
}

const QMetaObject *MediaControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MediaControlsE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MediaControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
