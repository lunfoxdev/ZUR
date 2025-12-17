/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicPreview.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/OBSBasicPreview.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicPreview.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15OBSBasicPreviewE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicPreview::qt_create_metaobjectdata<qt_meta_tag_ZN15OBSBasicPreviewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicPreview",
        "scalingChanged",
        "",
        "scalingAmount",
        "fixedScalingChanged",
        "isFixed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scalingChanged'
        QtMocHelpers::SignalData<void(float)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 3 },
        }}),
        // Signal 'fixedScalingChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicPreview, qt_meta_tag_ZN15OBSBasicPreviewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicPreview::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSQTDisplay::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicPreviewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicPreviewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15OBSBasicPreviewE_t>.metaTypes,
    nullptr
} };

void OBSBasicPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicPreview *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scalingChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->fixedScalingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSBasicPreview::*)(float )>(_a, &OBSBasicPreview::scalingChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasicPreview::*)(bool )>(_a, &OBSBasicPreview::fixedScalingChanged, 1))
            return;
    }
}

const QMetaObject *OBSBasicPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OBSBasicPreviewE_t>.strings))
        return static_cast<void*>(this);
    return OBSQTDisplay::qt_metacast(_clname);
}

int OBSBasicPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSQTDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OBSBasicPreview::scalingChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OBSBasicPreview::fixedScalingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
