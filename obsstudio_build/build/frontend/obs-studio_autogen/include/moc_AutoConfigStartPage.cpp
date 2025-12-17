/****************************************************************************
** Meta object code from reading C++ file 'AutoConfigStartPage.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/wizards/AutoConfigStartPage.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoConfigStartPage.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19AutoConfigStartPageE_t {};
} // unnamed namespace

template <> constexpr inline auto AutoConfigStartPage::qt_create_metaobjectdata<qt_meta_tag_ZN19AutoConfigStartPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AutoConfigStartPage",
        "on_prioritizeStreaming_clicked",
        "",
        "on_prioritizeRecording_clicked",
        "PrioritizeVCam"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_prioritizeStreaming_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_prioritizeRecording_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PrioritizeVCam'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AutoConfigStartPage, qt_meta_tag_ZN19AutoConfigStartPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AutoConfigStartPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19AutoConfigStartPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19AutoConfigStartPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19AutoConfigStartPageE_t>.metaTypes,
    nullptr
} };

void AutoConfigStartPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AutoConfigStartPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_prioritizeStreaming_clicked(); break;
        case 1: _t->on_prioritizeRecording_clicked(); break;
        case 2: _t->PrioritizeVCam(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AutoConfigStartPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigStartPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19AutoConfigStartPageE_t>.strings))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigStartPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
