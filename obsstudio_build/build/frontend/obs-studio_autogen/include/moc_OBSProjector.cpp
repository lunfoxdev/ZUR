/****************************************************************************
** Meta object code from reading C++ file 'OBSProjector.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/OBSProjector.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSProjector.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12OBSProjectorE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSProjector::qt_create_metaobjectdata<qt_meta_tag_ZN12OBSProjectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSProjector",
        "EscapeTriggered",
        "",
        "OpenFullScreenProjector",
        "ResizeToContent",
        "OpenWindowedProjector",
        "AlwaysOnTopToggled",
        "alwaysOnTop",
        "ScreenRemoved",
        "QScreen*",
        "screen",
        "RenameProjector",
        "oldName",
        "newName"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'EscapeTriggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenFullScreenProjector'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResizeToContent'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenWindowedProjector'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AlwaysOnTopToggled'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'ScreenRemoved'
        QtMocHelpers::SlotData<void(QScreen *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'RenameProjector'
        QtMocHelpers::SlotData<void(QString, QString)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSProjector, qt_meta_tag_ZN12OBSProjectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSProjector::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSQTDisplay::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12OBSProjectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12OBSProjectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12OBSProjectorE_t>.metaTypes,
    nullptr
} };

void OBSProjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSProjector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->EscapeTriggered(); break;
        case 1: _t->OpenFullScreenProjector(); break;
        case 2: _t->ResizeToContent(); break;
        case 3: _t->OpenWindowedProjector(); break;
        case 4: _t->AlwaysOnTopToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->ScreenRemoved((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 6: _t->RenameProjector((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSProjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSProjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12OBSProjectorE_t>.strings))
        return static_cast<void*>(this);
    return OBSQTDisplay::qt_metacast(_clname);
}

int OBSProjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSQTDisplay::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
