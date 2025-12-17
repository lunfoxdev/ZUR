/****************************************************************************
** Meta object code from reading C++ file 'scripts.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../frontend/plugins/frontend-tools/scripts.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scripts.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ScriptLogWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto ScriptLogWindow::qt_create_metaobjectdata<qt_meta_tag_ZN15ScriptLogWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScriptLogWindow",
        "AddLogMsg",
        "",
        "log_level",
        "msg",
        "ClearWindow",
        "Clear",
        "ScrollChanged",
        "val"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'AddLogMsg'
        QtMocHelpers::SlotData<void(int, QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
        // Slot 'ClearWindow'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Clear'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ScrollChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptLogWindow, qt_meta_tag_ZN15ScriptLogWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScriptLogWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ScriptLogWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ScriptLogWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ScriptLogWindowE_t>.metaTypes,
    nullptr
} };

void ScriptLogWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptLogWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->AddLogMsg((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->ClearWindow(); break;
        case 2: _t->Clear(); break;
        case 3: _t->ScrollChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScriptLogWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptLogWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ScriptLogWindowE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptLogWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN11ScriptsToolE_t {};
} // unnamed namespace

template <> constexpr inline auto ScriptsTool::qt_create_metaobjectdata<qt_meta_tag_ZN11ScriptsToolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScriptsTool",
        "on_close_clicked",
        "",
        "on_addScripts_clicked",
        "on_removeScripts_clicked",
        "on_reloadScripts_clicked",
        "on_editScript_clicked",
        "on_scriptLog_clicked",
        "on_defaults_clicked",
        "OpenScriptParentDirectory",
        "on_scripts_currentRowChanged",
        "row",
        "on_pythonPathBrowse_clicked",
        "on_description_linkActivated",
        "link",
        "on_scripts_customContextMenuRequested",
        "QPoint",
        "pos"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_close_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_addScripts_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_removeScripts_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_reloadScripts_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_editScript_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_scriptLog_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_defaults_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OpenScriptParentDirectory'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_scripts_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'on_pythonPathBrowse_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_description_linkActivated'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'on_scripts_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptsTool, qt_meta_tag_ZN11ScriptsToolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScriptsTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScriptsToolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScriptsToolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ScriptsToolE_t>.metaTypes,
    nullptr
} };

void ScriptsTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptsTool *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_addScripts_clicked(); break;
        case 2: _t->on_removeScripts_clicked(); break;
        case 3: _t->on_reloadScripts_clicked(); break;
        case 4: _t->on_editScript_clicked(); break;
        case 5: _t->on_scriptLog_clicked(); break;
        case 6: _t->on_defaults_clicked(); break;
        case 7: _t->OpenScriptParentDirectory(); break;
        case 8: _t->on_scripts_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_pythonPathBrowse_clicked(); break;
        case 10: _t->on_description_linkActivated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_scripts_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScriptsTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptsTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScriptsToolE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptsTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
