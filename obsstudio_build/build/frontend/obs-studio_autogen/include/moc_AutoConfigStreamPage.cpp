/****************************************************************************
** Meta object code from reading C++ file 'AutoConfigStreamPage.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/wizards/AutoConfigStreamPage.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoConfigStreamPage.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20AutoConfigStreamPageE_t {};
} // unnamed namespace

template <> constexpr inline auto AutoConfigStreamPage::qt_create_metaobjectdata<qt_meta_tag_ZN20AutoConfigStreamPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AutoConfigStreamPage",
        "on_show_clicked",
        "",
        "on_connectAccount_clicked",
        "on_disconnectAccount_clicked",
        "on_useStreamKey_clicked",
        "on_preferHardware_clicked",
        "ServiceChanged",
        "UpdateKeyLink",
        "UpdateMoreInfoLink",
        "UpdateServerList",
        "UpdateCompleted",
        "reset_service_ui_fields",
        "std::string&",
        "service"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_show_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_connectAccount_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_disconnectAccount_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_useStreamKey_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_preferHardware_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ServiceChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateKeyLink'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateMoreInfoLink'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateServerList'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateCompleted'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset_service_ui_fields'
        QtMocHelpers::SlotData<void(std::string &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AutoConfigStreamPage, qt_meta_tag_ZN20AutoConfigStreamPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AutoConfigStreamPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20AutoConfigStreamPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20AutoConfigStreamPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20AutoConfigStreamPageE_t>.metaTypes,
    nullptr
} };

void AutoConfigStreamPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AutoConfigStreamPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_show_clicked(); break;
        case 1: _t->on_connectAccount_clicked(); break;
        case 2: _t->on_disconnectAccount_clicked(); break;
        case 3: _t->on_useStreamKey_clicked(); break;
        case 4: _t->on_preferHardware_clicked(); break;
        case 5: _t->ServiceChanged(); break;
        case 6: _t->UpdateKeyLink(); break;
        case 7: _t->UpdateMoreInfoLink(); break;
        case 8: _t->UpdateServerList(); break;
        case 9: _t->UpdateCompleted(); break;
        case 10: _t->reset_service_ui_fields((*reinterpret_cast<std::add_pointer_t<std::string&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AutoConfigStreamPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigStreamPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20AutoConfigStreamPageE_t>.strings))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigStreamPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
