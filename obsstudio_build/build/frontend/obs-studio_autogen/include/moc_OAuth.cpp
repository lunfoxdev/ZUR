/****************************************************************************
** Meta object code from reading C++ file 'OAuth.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/oauth/OAuth.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAuth.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5OAuthE_t {};
} // unnamed namespace

template <> constexpr inline auto OAuth::qt_create_metaobjectdata<qt_meta_tag_ZN5OAuthE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OAuth"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OAuth, qt_meta_tag_ZN5OAuthE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OAuth::staticMetaObject = { {
    QMetaObject::SuperData::link<Auth::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5OAuthE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5OAuthE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5OAuthE_t>.metaTypes,
    nullptr
} };

void OAuth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OAuth *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *OAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5OAuthE_t>.strings))
        return static_cast<void*>(this);
    return Auth::qt_metacast(_clname);
}

int OAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Auth::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14OAuthStreamKeyE_t {};
} // unnamed namespace

template <> constexpr inline auto OAuthStreamKey::qt_create_metaobjectdata<qt_meta_tag_ZN14OAuthStreamKeyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OAuthStreamKey"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OAuthStreamKey, qt_meta_tag_ZN14OAuthStreamKeyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OAuthStreamKey::staticMetaObject = { {
    QMetaObject::SuperData::link<OAuth::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OAuthStreamKeyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OAuthStreamKeyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14OAuthStreamKeyE_t>.metaTypes,
    nullptr
} };

void OAuthStreamKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OAuthStreamKey *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *OAuthStreamKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OAuthStreamKey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OAuthStreamKeyE_t>.strings))
        return static_cast<void*>(this);
    return OAuth::qt_metacast(_clname);
}

int OAuthStreamKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OAuth::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
