/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicFilters.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/dialogs/OBSBasicFilters.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicFilters.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15OBSBasicFiltersE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicFilters::qt_create_metaobjectdata<qt_meta_tag_ZN15OBSBasicFiltersE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicFilters",
        "AddFilter",
        "",
        "OBSSource",
        "filter",
        "focus",
        "RemoveFilter",
        "ReorderFilters",
        "RenameAsyncFilter",
        "RenameEffectFilter",
        "ResetFilters",
        "on_addAsyncFilter_clicked",
        "on_removeAsyncFilter_clicked",
        "on_moveAsyncFilterUp_clicked",
        "on_moveAsyncFilterDown_clicked",
        "on_asyncFilters_currentRowChanged",
        "row",
        "on_asyncFilters_customContextMenuRequested",
        "QPoint",
        "pos",
        "on_asyncFilters_GotFocus",
        "on_addEffectFilter_clicked",
        "on_removeEffectFilter_clicked",
        "on_moveEffectFilterUp_clicked",
        "on_moveEffectFilterDown_clicked",
        "on_effectFilters_currentRowChanged",
        "on_effectFilters_customContextMenuRequested",
        "on_effectFilters_GotFocus",
        "on_actionRemoveFilter_triggered",
        "on_actionMoveUp_triggered",
        "on_actionMoveDown_triggered",
        "on_actionRenameFilter_triggered",
        "CopyFilter",
        "PasteFilter",
        "FiltersMoved",
        "QModelIndex",
        "srcParent",
        "srcIdxStart",
        "srcIdxEnd",
        "dstParent",
        "dstIdx"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'AddFilter'
        QtMocHelpers::SlotData<void(OBSSource, bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'AddFilter'
        QtMocHelpers::SlotData<void(OBSSource)>(1, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'RemoveFilter'
        QtMocHelpers::SlotData<void(OBSSource)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'ReorderFilters'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RenameAsyncFilter'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RenameEffectFilter'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResetFilters'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addAsyncFilter_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_removeAsyncFilter_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveAsyncFilterUp_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveAsyncFilterDown_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_asyncFilters_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'on_asyncFilters_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'on_asyncFilters_GotFocus'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addEffectFilter_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_removeEffectFilter_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveEffectFilterUp_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveEffectFilterDown_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_effectFilters_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'on_effectFilters_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'on_effectFilters_GotFocus'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveFilter_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp_triggered'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRenameFilter_triggered'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'CopyFilter'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'PasteFilter'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'FiltersMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { QMetaType::Int, 37 }, { QMetaType::Int, 38 }, { 0x80000000 | 35, 39 },
            { QMetaType::Int, 40 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicFilters, qt_meta_tag_ZN15OBSBasicFiltersE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicFilters::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicFiltersE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicFiltersE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15OBSBasicFiltersE_t>.metaTypes,
    nullptr
} };

void OBSBasicFilters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicFilters *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->AddFilter((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->AddFilter((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 2: _t->RemoveFilter((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 3: _t->ReorderFilters(); break;
        case 4: _t->RenameAsyncFilter(); break;
        case 5: _t->RenameEffectFilter(); break;
        case 6: _t->ResetFilters(); break;
        case 7: _t->on_addAsyncFilter_clicked(); break;
        case 8: _t->on_removeAsyncFilter_clicked(); break;
        case 9: _t->on_moveAsyncFilterUp_clicked(); break;
        case 10: _t->on_moveAsyncFilterDown_clicked(); break;
        case 11: _t->on_asyncFilters_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_asyncFilters_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->on_asyncFilters_GotFocus(); break;
        case 14: _t->on_addEffectFilter_clicked(); break;
        case 15: _t->on_removeEffectFilter_clicked(); break;
        case 16: _t->on_moveEffectFilterUp_clicked(); break;
        case 17: _t->on_moveEffectFilterDown_clicked(); break;
        case 18: _t->on_effectFilters_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_effectFilters_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 20: _t->on_effectFilters_GotFocus(); break;
        case 21: _t->on_actionRemoveFilter_triggered(); break;
        case 22: _t->on_actionMoveUp_triggered(); break;
        case 23: _t->on_actionMoveDown_triggered(); break;
        case 24: _t->on_actionRenameFilter_triggered(); break;
        case 25: _t->CopyFilter(); break;
        case 26: _t->PasteFilter(); break;
        case 27: _t->FiltersMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicFilters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicFilters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicFiltersE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicFilters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
