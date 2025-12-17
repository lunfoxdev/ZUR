/****************************************************************************
** Meta object code from reading C++ file 'ToggleSwitch.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../shared/qt/idian/include/Idian/ToggleSwitch.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToggleSwitch.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5idian12ToggleSwitchE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::ToggleSwitch::qt_create_metaobjectdata<qt_meta_tag_ZN5idian12ToggleSwitchE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::ToggleSwitch",
        "pendingChecked",
        "",
        "pendingUnchecked",
        "click",
        "onClicked",
        "checked",
        "xpos",
        "background",
        "QColor",
        "background_hover",
        "background_checked",
        "background_checked_hover",
        "handleColor",
        "handleSize",
        "blend"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pendingChecked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pendingUnchecked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'click'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onClicked'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'xpos'
        QtMocHelpers::PropertyData<int>(7, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'background'
        QtMocHelpers::PropertyData<QColor>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'background_hover'
        QtMocHelpers::PropertyData<QColor>(10, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'background_checked'
        QtMocHelpers::PropertyData<QColor>(11, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'background_checked_hover'
        QtMocHelpers::PropertyData<QColor>(12, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'handleColor'
        QtMocHelpers::PropertyData<QColor>(13, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'handleSize'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'blend'
        QtMocHelpers::PropertyData<float>(15, QMetaType::Float, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::Stored | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ToggleSwitch, qt_meta_tag_ZN5idian12ToggleSwitchE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::ToggleSwitch::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ToggleSwitchE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ToggleSwitchE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian12ToggleSwitchE_t>.metaTypes,
    nullptr
} };

void idian::ToggleSwitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ToggleSwitch *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pendingChecked(); break;
        case 1: _t->pendingUnchecked(); break;
        case 2: _t->click(); break;
        case 3: _t->onClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)()>(_a, &ToggleSwitch::pendingChecked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)()>(_a, &ToggleSwitch::pendingUnchecked, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->xPos; break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->backgroundInactive; break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->backgroundInactiveHover; break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->backgroundActive; break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->backgroundActiveHover; break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->handleColor; break;
        case 6: *reinterpret_cast<int*>(_v) = _t->handleSize; break;
        case 7: *reinterpret_cast<float*>(_v) = _t->blend; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPos(*reinterpret_cast<int*>(_v)); break;
        case 1: QtMocHelpers::setProperty(_t->backgroundInactive, *reinterpret_cast<QColor*>(_v)); break;
        case 2: QtMocHelpers::setProperty(_t->backgroundInactiveHover, *reinterpret_cast<QColor*>(_v)); break;
        case 3: QtMocHelpers::setProperty(_t->backgroundActive, *reinterpret_cast<QColor*>(_v)); break;
        case 4: QtMocHelpers::setProperty(_t->backgroundActiveHover, *reinterpret_cast<QColor*>(_v)); break;
        case 5: QtMocHelpers::setProperty(_t->handleColor, *reinterpret_cast<QColor*>(_v)); break;
        case 6: QtMocHelpers::setProperty(_t->handleSize, *reinterpret_cast<int*>(_v)); break;
        case 7: _t->setBlend(*reinterpret_cast<float*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *idian::ToggleSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::ToggleSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ToggleSwitchE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Utils"))
        return static_cast< Utils*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int idian::ToggleSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void idian::ToggleSwitch::pendingChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void idian::ToggleSwitch::pendingUnchecked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
