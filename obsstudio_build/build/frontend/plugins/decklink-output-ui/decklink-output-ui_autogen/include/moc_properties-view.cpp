/****************************************************************************
** Meta object code from reading C++ file 'properties-view.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../shared/properties-view/properties-view.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'properties-view.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10WidgetInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto WidgetInfo::qt_create_metaobjectdata<qt_meta_tag_ZN10WidgetInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WidgetInfo",
        "ControlChanged",
        "",
        "EditListAdd",
        "EditListAddText",
        "EditListAddFiles",
        "EditListAddDir",
        "EditListRemove",
        "EditListEdit",
        "EditListUp",
        "EditListDown"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ControlChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListAdd'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListAddText'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListAddFiles'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListAddDir'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListRemove'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListEdit'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListUp'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditListDown'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WidgetInfo, qt_meta_tag_ZN10WidgetInfoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WidgetInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WidgetInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WidgetInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10WidgetInfoE_t>.metaTypes,
    nullptr
} };

void WidgetInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WidgetInfo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ControlChanged(); break;
        case 1: _t->EditListAdd(); break;
        case 2: _t->EditListAddText(); break;
        case 3: _t->EditListAddFiles(); break;
        case 4: _t->EditListAddDir(); break;
        case 5: _t->EditListRemove(); break;
        case 6: _t->EditListEdit(); break;
        case 7: _t->EditListUp(); break;
        case 8: _t->EditListDown(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *WidgetInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WidgetInfoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WidgetInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17OBSPropertiesViewE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSPropertiesView::qt_create_metaobjectdata<qt_meta_tag_ZN17OBSPropertiesViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSPropertiesView",
        "PropertiesResized",
        "",
        "Changed",
        "PropertiesRefreshed",
        "RefreshProperties",
        "ReloadProperties",
        "SignalChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'PropertiesResized'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Changed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'PropertiesRefreshed'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RefreshProperties'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReloadProperties'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SignalChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSPropertiesView, qt_meta_tag_ZN17OBSPropertiesViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSPropertiesView::staticMetaObject = { {
    QMetaObject::SuperData::link<VScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSPropertiesViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSPropertiesViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17OBSPropertiesViewE_t>.metaTypes,
    nullptr
} };

void OBSPropertiesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSPropertiesView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->PropertiesResized(); break;
        case 1: _t->Changed(); break;
        case 2: _t->PropertiesRefreshed(); break;
        case 3: _t->RefreshProperties(); break;
        case 4: _t->ReloadProperties(); break;
        case 5: _t->SignalChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSPropertiesView::*)()>(_a, &OBSPropertiesView::PropertiesResized, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSPropertiesView::*)()>(_a, &OBSPropertiesView::Changed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSPropertiesView::*)()>(_a, &OBSPropertiesView::PropertiesRefreshed, 2))
            return;
    }
}

const QMetaObject *OBSPropertiesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSPropertiesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OBSPropertiesViewE_t>.strings))
        return static_cast<void*>(this);
    return VScrollArea::qt_metacast(_clname);
}

int OBSPropertiesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OBSPropertiesView::PropertiesResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSPropertiesView::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OBSPropertiesView::PropertiesRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
