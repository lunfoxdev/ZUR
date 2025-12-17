/****************************************************************************
** Meta object code from reading C++ file 'OBSProxyStyle.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/utility/OBSProxyStyle.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSProxyStyle.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13OBSProxyStyleE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSProxyStyle::qt_create_metaobjectdata<qt_meta_tag_ZN13OBSProxyStyleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSProxyStyle"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSProxyStyle, qt_meta_tag_ZN13OBSProxyStyleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSProxyStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OBSProxyStyleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OBSProxyStyleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13OBSProxyStyleE_t>.metaTypes,
    nullptr
} };

void OBSProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSProxyStyle *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *OBSProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OBSProxyStyleE_t>.strings))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int OBSProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSInvisibleCursorProxyStyle::qt_create_metaobjectdata<qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSInvisibleCursorProxyStyle"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSInvisibleCursorProxyStyle, qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSInvisibleCursorProxyStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSProxyStyle::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>.metaTypes,
    nullptr
} };

void OBSInvisibleCursorProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSInvisibleCursorProxyStyle *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *OBSInvisibleCursorProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSInvisibleCursorProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28OBSInvisibleCursorProxyStyleE_t>.strings))
        return static_cast<void*>(this);
    return OBSProxyStyle::qt_metacast(_clname);
}

int OBSInvisibleCursorProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
