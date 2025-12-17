/****************************************************************************
** Meta object code from reading C++ file 'SourceTree.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/components/SourceTree.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SourceTree.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SourceTreeE_t {};
} // unnamed namespace

template <> constexpr inline auto SourceTree::qt_create_metaobjectdata<qt_meta_tag_ZN10SourceTreeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SourceTree",
        "ReorderItems",
        "",
        "RefreshItems",
        "Remove",
        "OBSSceneItem",
        "item",
        "OBSScene",
        "scene",
        "GroupSelectedItems",
        "UngroupSelectedGroups",
        "AddGroup",
        "Edit",
        "idx",
        "NewGroupEdit"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ReorderItems'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RefreshItems'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Remove'
        QtMocHelpers::SlotData<void(OBSSceneItem, OBSScene)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'GroupSelectedItems'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UngroupSelectedGroups'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'AddGroup'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Edit'
        QtMocHelpers::SlotData<bool(int)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'NewGroupEdit'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SourceTree, qt_meta_tag_ZN10SourceTreeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SourceTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SourceTreeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SourceTreeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SourceTreeE_t>.metaTypes,
    nullptr
} };

void SourceTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SourceTree *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ReorderItems(); break;
        case 1: _t->RefreshItems(); break;
        case 2: _t->Remove((*reinterpret_cast<std::add_pointer_t<OBSSceneItem>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<OBSScene>>(_a[2]))); break;
        case 3: _t->GroupSelectedItems(); break;
        case 4: _t->UngroupSelectedGroups(); break;
        case 5: _t->AddGroup(); break;
        case 6: { bool _r = _t->Edit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->NewGroupEdit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SourceTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SourceTreeE_t>.strings))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int SourceTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
