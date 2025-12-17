/****************************************************************************
** Meta object code from reading C++ file 'OBSRemux.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/dialogs/OBSRemux.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSRemux.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8OBSRemuxE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSRemux::qt_create_metaobjectdata<qt_meta_tag_ZN8OBSRemuxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSRemux",
        "remux",
        "",
        "source",
        "target",
        "rowCountChanged",
        "QModelIndex",
        "parent",
        "first",
        "last",
        "updateProgress",
        "percent",
        "remuxFinished",
        "success",
        "beginRemux",
        "stopRemux",
        "clearFinished",
        "clearAll"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'remux'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Slot 'rowCountChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Int, 8 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'updateProgress'
        QtMocHelpers::SlotData<void(float)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 11 },
        }}),
        // Slot 'remuxFinished'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'beginRemux'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopRemux'
        QtMocHelpers::SlotData<bool()>(15, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'clearFinished'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearAll'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSRemux, qt_meta_tag_ZN8OBSRemuxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSRemux::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSRemuxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSRemuxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8OBSRemuxE_t>.metaTypes,
    nullptr
} };

void OBSRemux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSRemux *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->remux((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->rowCountChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->updateProgress((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->remuxFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->beginRemux(); break;
        case 5: { bool _r = _t->stopRemux();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->clearFinished(); break;
        case 7: _t->clearAll(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSRemux::*)(const QString & , const QString & )>(_a, &OBSRemux::remux, 0))
            return;
    }
}

const QMetaObject *OBSRemux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSRemux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSRemuxE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSRemux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OBSRemux::remux(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
