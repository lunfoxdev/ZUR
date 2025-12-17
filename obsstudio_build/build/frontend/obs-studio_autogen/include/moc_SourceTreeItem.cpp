/****************************************************************************
** Meta object code from reading C++ file 'SourceTreeItem.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/components/SourceTreeItem.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SourceTreeItem.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SourceTreeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SourceTreeItem::qt_create_metaobjectdata<qt_meta_tag_ZN14SourceTreeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SourceTreeItem",
        "Clear",
        "",
        "EnterEditMode",
        "ExitEditMode",
        "save",
        "VisibilityChanged",
        "visible",
        "LockedChanged",
        "locked",
        "ExpandClicked",
        "checked",
        "Select",
        "Deselect"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Clear'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EnterEditMode'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ExitEditMode'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'VisibilityChanged'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'LockedChanged'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'ExpandClicked'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'Select'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Deselect'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SourceTreeItem, qt_meta_tag_ZN14SourceTreeItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SourceTreeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SourceTreeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SourceTreeItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SourceTreeItemE_t>.metaTypes,
    nullptr
} };

void SourceTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SourceTreeItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Clear(); break;
        case 1: _t->EnterEditMode(); break;
        case 2: _t->ExitEditMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->VisibilityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->LockedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->ExpandClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->Select(); break;
        case 7: _t->Deselect(); break;
        default: ;
        }
    }
}

const QMetaObject *SourceTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SourceTreeItemE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SourceTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
