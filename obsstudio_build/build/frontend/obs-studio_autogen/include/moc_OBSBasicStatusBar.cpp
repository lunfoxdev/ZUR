/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicStatusBar.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/OBSBasicStatusBar.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicStatusBar.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17OBSBasicStatusBarE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicStatusBar::qt_create_metaobjectdata<qt_meta_tag_ZN17OBSBasicStatusBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicStatusBar",
        "UpdateCPUUsage",
        "",
        "clearMessage",
        "showMessage",
        "message",
        "timeout",
        "Reconnect",
        "seconds",
        "ReconnectSuccess",
        "UpdateStatusBar",
        "UpdateCurrentFPS",
        "UpdateIcons"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'UpdateCPUUsage'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearMessage'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showMessage'
        QtMocHelpers::SlotData<void(const QString &, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Int, 6 },
        }}),
        // Slot 'showMessage'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'Reconnect'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'ReconnectSuccess'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateStatusBar'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateCurrentFPS'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateIcons'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicStatusBar, qt_meta_tag_ZN17OBSBasicStatusBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicStatusBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QStatusBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicStatusBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicStatusBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17OBSBasicStatusBarE_t>.metaTypes,
    nullptr
} };

void OBSBasicStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicStatusBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->UpdateCPUUsage(); break;
        case 1: _t->clearMessage(); break;
        case 2: _t->showMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->showMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->Reconnect((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->ReconnectSuccess(); break;
        case 6: _t->UpdateStatusBar(); break;
        case 7: _t->UpdateCurrentFPS(); break;
        case 8: _t->UpdateIcons(); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicStatusBarE_t>.strings))
        return static_cast<void*>(this);
    return QStatusBar::qt_metacast(_clname);
}

int OBSBasicStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
