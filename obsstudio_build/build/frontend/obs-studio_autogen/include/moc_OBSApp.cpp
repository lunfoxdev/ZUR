/****************************************************************************
** Meta object code from reading C++ file 'OBSApp.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/OBSApp.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSApp.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6OBSAppE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSApp::qt_create_metaobjectdata<qt_meta_tag_ZN6OBSAppE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSApp",
        "logLineAdded",
        "",
        "logLevel",
        "message",
        "StyleChanged",
        "logUploadFinished",
        "OBS::LogFileType",
        "fileUrl",
        "logUploadFailed",
        "errorMessage",
        "commitData",
        "QSessionManager&",
        "manager",
        "addLogLine",
        "themeFileChanged",
        "applicationShutdown",
        "Exec",
        "VoidFunc",
        "func",
        "ProcessSigInt",
        "ProcessSigTerm"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'logLineAdded'
        QtMocHelpers::SignalData<void(int, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'StyleChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'logUploadFinished'
        QtMocHelpers::SignalData<void(OBS::LogFileType, const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 }, { QMetaType::QString, 8 },
        }}),
        // Signal 'logUploadFailed'
        QtMocHelpers::SignalData<void(OBS::LogFileType, const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'commitData'
        QtMocHelpers::SlotData<void(QSessionManager &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'addLogLine'
        QtMocHelpers::SlotData<void(int, const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
        // Slot 'themeFileChanged'
        QtMocHelpers::SlotData<void(const QString &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'applicationShutdown'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Exec'
        QtMocHelpers::SlotData<void(VoidFunc)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'ProcessSigInt'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ProcessSigTerm'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSApp, qt_meta_tag_ZN6OBSAppE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6OBSAppE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6OBSAppE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6OBSAppE_t>.metaTypes,
    nullptr
} };

void OBSApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSApp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->logLineAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->StyleChanged(); break;
        case 2: _t->logUploadFinished((*reinterpret_cast<std::add_pointer_t<OBS::LogFileType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->logUploadFailed((*reinterpret_cast<std::add_pointer_t<OBS::LogFileType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->commitData((*reinterpret_cast<std::add_pointer_t<QSessionManager&>>(_a[1]))); break;
        case 5: _t->addLogLine((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->themeFileChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->applicationShutdown(); break;
        case 8: _t->Exec((*reinterpret_cast<std::add_pointer_t<VoidFunc>>(_a[1]))); break;
        case 9: _t->ProcessSigInt(); break;
        case 10: _t->ProcessSigTerm(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VoidFunc >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSApp::*)(int , const QString & )>(_a, &OBSApp::logLineAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSApp::*)()>(_a, &OBSApp::StyleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSApp::*)(OBS::LogFileType , const QString & )>(_a, &OBSApp::logUploadFinished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSApp::*)(OBS::LogFileType , const QString & )>(_a, &OBSApp::logUploadFailed, 3))
            return;
    }
}

const QMetaObject *OBSApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6OBSAppE_t>.strings))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int OBSApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OBSApp::logLineAdded(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OBSApp::StyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OBSApp::logUploadFinished(OBS::LogFileType _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void OBSApp::logUploadFailed(OBS::LogFileType _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP
