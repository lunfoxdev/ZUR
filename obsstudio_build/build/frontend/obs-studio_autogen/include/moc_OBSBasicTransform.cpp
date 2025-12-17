/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicTransform.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/dialogs/OBSBasicTransform.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicTransform.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17OBSBasicTransformE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicTransform::qt_create_metaobjectdata<qt_meta_tag_ZN17OBSBasicTransformE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicTransform",
        "RefreshControls",
        "",
        "SetItemQt",
        "OBSSceneItem",
        "newItem",
        "OnBoundsType",
        "index",
        "OnControlChanged",
        "OnCropChanged",
        "SetEnabled",
        "enable",
        "OnSceneChanged",
        "QListWidgetItem*",
        "current",
        "prev"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'RefreshControls'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetItemQt'
        QtMocHelpers::SlotData<void(OBSSceneItem)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'OnBoundsType'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'OnControlChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnCropChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetEnabled'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'OnSceneChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *, QListWidgetItem *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 13, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicTransform, qt_meta_tag_ZN17OBSBasicTransformE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicTransformE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicTransformE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17OBSBasicTransformE_t>.metaTypes,
    nullptr
} };

void OBSBasicTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicTransform *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->RefreshControls(); break;
        case 1: _t->SetItemQt((*reinterpret_cast<std::add_pointer_t<OBSSceneItem>>(_a[1]))); break;
        case 2: _t->OnBoundsType((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->OnControlChanged(); break;
        case 4: _t->OnCropChanged(); break;
        case 5: _t->SetEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->OnSceneChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSBasicTransformE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
