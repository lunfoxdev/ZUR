/****************************************************************************
** Meta object code from reading C++ file 'AutoConfigTestPage.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/wizards/AutoConfigTestPage.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoConfigTestPage.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18AutoConfigTestPageE_t {};
} // unnamed namespace

template <> constexpr inline auto AutoConfigTestPage::qt_create_metaobjectdata<qt_meta_tag_ZN18AutoConfigTestPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AutoConfigTestPage",
        "NextStage",
        "",
        "UpdateMessage",
        "message",
        "Failure",
        "Progress",
        "percentage"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'NextStage'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateMessage'
        QtMocHelpers::SlotData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'Failure'
        QtMocHelpers::SlotData<void(QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'Progress'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AutoConfigTestPage, qt_meta_tag_ZN18AutoConfigTestPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AutoConfigTestPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AutoConfigTestPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AutoConfigTestPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18AutoConfigTestPageE_t>.metaTypes,
    nullptr
} };

void AutoConfigTestPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AutoConfigTestPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->NextStage(); break;
        case 1: _t->UpdateMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->Failure((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Progress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AutoConfigTestPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigTestPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AutoConfigTestPageE_t>.strings))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigTestPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
