/****************************************************************************
** Meta object code from reading C++ file 'CrashHandler.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/utility/CrashHandler.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CrashHandler.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3OBS12CrashHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto OBS::CrashHandler::qt_create_metaobjectdata<qt_meta_tag_ZN3OBS12CrashHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBS::CrashHandler",
        "crashLogUploadStarted",
        "",
        "crashLogUploadFailed",
        "errorMessage",
        "crashLogUploadFinished",
        "crashLogURL",
        "crashLogUploadResultHandler",
        "uploadResult",
        "error",
        "applicationShutdownHandler"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'crashLogUploadStarted'
        QtMocHelpers::SignalData<void() const>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'crashLogUploadFailed'
        QtMocHelpers::SignalData<void(const QString &) const>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'crashLogUploadFinished'
        QtMocHelpers::SignalData<void(const QString &) const>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'crashLogUploadResultHandler'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'applicationShutdownHandler'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CrashHandler, qt_meta_tag_ZN3OBS12CrashHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBS::CrashHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3OBS12CrashHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3OBS12CrashHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3OBS12CrashHandlerE_t>.metaTypes,
    nullptr
} };

void OBS::CrashHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CrashHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->crashLogUploadStarted(); break;
        case 1: _t->crashLogUploadFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->crashLogUploadFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->crashLogUploadResultHandler((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->applicationShutdownHandler(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CrashHandler::*)() const>(_a, &CrashHandler::crashLogUploadStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CrashHandler::*)(const QString & ) const>(_a, &CrashHandler::crashLogUploadFailed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CrashHandler::*)(const QString & ) const>(_a, &CrashHandler::crashLogUploadFinished, 2))
            return;
    }
}

const QMetaObject *OBS::CrashHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBS::CrashHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3OBS12CrashHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OBS::CrashHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OBS::CrashHandler::crashLogUploadStarted()const
{
    QMetaObject::activate(const_cast< OBS::CrashHandler *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBS::CrashHandler::crashLogUploadFailed(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< OBS::CrashHandler *>(this), &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void OBS::CrashHandler::crashLogUploadFinished(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< OBS::CrashHandler *>(this), &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
