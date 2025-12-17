/****************************************************************************
** Meta object code from reading C++ file 'SilentUpdateCheckBox.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/components/SilentUpdateCheckBox.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SilentUpdateCheckBox.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20SilentUpdateCheckBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto SilentUpdateCheckBox::qt_create_metaobjectdata<qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SilentUpdateCheckBox",
        "setCheckedSilently",
        "",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setCheckedSilently'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SilentUpdateCheckBox, qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SilentUpdateCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>.metaTypes,
    nullptr
} };

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SilentUpdateCheckBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SilentUpdateCheckBoxE_t>.strings))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
