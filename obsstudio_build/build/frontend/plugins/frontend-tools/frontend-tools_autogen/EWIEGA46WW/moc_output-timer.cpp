/****************************************************************************
** Meta object code from reading C++ file 'output-timer.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../frontend/plugins/frontend-tools/output-timer.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'output-timer.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11OutputTimerE_t {};
} // unnamed namespace

template <> constexpr inline auto OutputTimer::qt_create_metaobjectdata<qt_meta_tag_ZN11OutputTimerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutputTimer",
        "StreamingTimerButton",
        "",
        "RecordingTimerButton",
        "StreamTimerStart",
        "RecordTimerStart",
        "StreamTimerStop",
        "RecordTimerStop",
        "UpdateStreamTimerDisplay",
        "UpdateRecordTimerDisplay",
        "ShowHideDialog",
        "EventStopStreaming",
        "EventStopRecording"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'StreamingTimerButton'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordingTimerButton'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamTimerStart'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordTimerStart'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamTimerStop'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordTimerStop'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateStreamTimerDisplay'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateRecordTimerDisplay'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ShowHideDialog'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EventStopStreaming'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EventStopRecording'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutputTimer, qt_meta_tag_ZN11OutputTimerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutputTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11OutputTimerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11OutputTimerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11OutputTimerE_t>.metaTypes,
    nullptr
} };

void OutputTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutputTimer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->StreamingTimerButton(); break;
        case 1: _t->RecordingTimerButton(); break;
        case 2: _t->StreamTimerStart(); break;
        case 3: _t->RecordTimerStart(); break;
        case 4: _t->StreamTimerStop(); break;
        case 5: _t->RecordTimerStop(); break;
        case 6: _t->UpdateStreamTimerDisplay(); break;
        case 7: _t->UpdateRecordTimerDisplay(); break;
        case 8: _t->ShowHideDialog(); break;
        case 9: _t->EventStopStreaming(); break;
        case 10: _t->EventStopRecording(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *OutputTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11OutputTimerE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OutputTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
