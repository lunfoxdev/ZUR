/****************************************************************************
** Meta object code from reading C++ file 'Row.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../shared/qt/idian/include/Idian/Row.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Row.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5idian10GenericRowE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::GenericRow::qt_create_metaobjectdata<qt_meta_tag_ZN5idian10GenericRowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::GenericRow"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericRow, qt_meta_tag_ZN5idian10GenericRowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::GenericRow::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian10GenericRowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian10GenericRowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian10GenericRowE_t>.metaTypes,
    nullptr
} };

void idian::GenericRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericRow *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *idian::GenericRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::GenericRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian10GenericRowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Utils"))
        return static_cast< Utils*>(this);
    return QFrame::qt_metacast(_clname);
}

int idian::GenericRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5idian3RowE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::Row::qt_create_metaobjectdata<qt_meta_tag_ZN5idian3RowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::Row",
        "clicked",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Row, qt_meta_tag_ZN5idian3RowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::Row::staticMetaObject = { {
    QMetaObject::SuperData::link<GenericRow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian3RowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian3RowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian3RowE_t>.metaTypes,
    nullptr
} };

void idian::Row::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Row *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Row::*)()>(_a, &Row::clicked, 0))
            return;
    }
}

const QMetaObject *idian::Row::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::Row::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian3RowE_t>.strings))
        return static_cast<void*>(this);
    return GenericRow::qt_metacast(_clname);
}

int idian::Row::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericRow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void idian::Row::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN5idian12ExpandButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::ExpandButton::qt_create_metaobjectdata<qt_meta_tag_ZN5idian12ExpandButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::ExpandButton"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExpandButton, qt_meta_tag_ZN5idian12ExpandButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::ExpandButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ExpandButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ExpandButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian12ExpandButtonE_t>.metaTypes,
    nullptr
} };

void idian::ExpandButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExpandButton *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *idian::ExpandButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::ExpandButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian12ExpandButtonE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Utils"))
        return static_cast< Utils*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int idian::ExpandButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5idian8RowFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::RowFrame::qt_create_metaobjectdata<qt_meta_tag_ZN5idian8RowFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::RowFrame",
        "clicked",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RowFrame, qt_meta_tag_ZN5idian8RowFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::RowFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian8RowFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian8RowFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian8RowFrameE_t>.metaTypes,
    nullptr
} };

void idian::RowFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RowFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RowFrame::*)()>(_a, &RowFrame::clicked, 0))
            return;
    }
}

const QMetaObject *idian::RowFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::RowFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian8RowFrameE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Utils"))
        return static_cast< Utils*>(this);
    return QFrame::qt_metacast(_clname);
}

int idian::RowFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void idian::RowFrame::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN5idian14CollapsibleRowE_t {};
} // unnamed namespace

template <> constexpr inline auto idian::CollapsibleRow::qt_create_metaobjectdata<qt_meta_tag_ZN5idian14CollapsibleRowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "idian::CollapsibleRow",
        "toggled",
        "",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toggled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CollapsibleRow, qt_meta_tag_ZN5idian14CollapsibleRowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject idian::CollapsibleRow::staticMetaObject = { {
    QMetaObject::SuperData::link<GenericRow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian14CollapsibleRowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian14CollapsibleRowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5idian14CollapsibleRowE_t>.metaTypes,
    nullptr
} };

void idian::CollapsibleRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CollapsibleRow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CollapsibleRow::*)(bool )>(_a, &CollapsibleRow::toggled, 0))
            return;
    }
}

const QMetaObject *idian::CollapsibleRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *idian::CollapsibleRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5idian14CollapsibleRowE_t>.strings))
        return static_cast<void*>(this);
    return GenericRow::qt_metacast(_clname);
}

int idian::CollapsibleRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericRow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void idian::CollapsibleRow::toggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
