/****************************************************************************
** Meta object code from reading C++ file 'VolumeMeter.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/VolumeMeter.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VolumeMeter.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11VolumeMeterE_t {};
} // unnamed namespace

template <> constexpr inline auto VolumeMeter::qt_create_metaobjectdata<qt_meta_tag_ZN11VolumeMeterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VolumeMeter",
        "backgroundNominalColor",
        "QColor",
        "backgroundWarningColor",
        "backgroundErrorColor",
        "foregroundNominalColor",
        "foregroundWarningColor",
        "foregroundErrorColor",
        "backgroundNominalColorDisabled",
        "backgroundWarningColorDisabled",
        "backgroundErrorColorDisabled",
        "foregroundNominalColorDisabled",
        "foregroundWarningColorDisabled",
        "foregroundErrorColorDisabled",
        "clipColor",
        "magnitudeColor",
        "majorTickColor",
        "minorTickColor",
        "meterThickness",
        "meterFontScaling",
        "minimumLevel",
        "warningLevel",
        "errorLevel",
        "clipLevel",
        "minimumInputLevel",
        "peakDecayRate",
        "magnitudeIntegrationTime",
        "peakHoldDuration",
        "inputPeakHoldDuration"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'backgroundNominalColor'
        QtMocHelpers::PropertyData<QColor>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundWarningColor'
        QtMocHelpers::PropertyData<QColor>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundErrorColor'
        QtMocHelpers::PropertyData<QColor>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundNominalColor'
        QtMocHelpers::PropertyData<QColor>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundWarningColor'
        QtMocHelpers::PropertyData<QColor>(6, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundErrorColor'
        QtMocHelpers::PropertyData<QColor>(7, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundNominalColorDisabled'
        QtMocHelpers::PropertyData<QColor>(8, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundWarningColorDisabled'
        QtMocHelpers::PropertyData<QColor>(9, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundErrorColorDisabled'
        QtMocHelpers::PropertyData<QColor>(10, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundNominalColorDisabled'
        QtMocHelpers::PropertyData<QColor>(11, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundWarningColorDisabled'
        QtMocHelpers::PropertyData<QColor>(12, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundErrorColorDisabled'
        QtMocHelpers::PropertyData<QColor>(13, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'clipColor'
        QtMocHelpers::PropertyData<QColor>(14, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'magnitudeColor'
        QtMocHelpers::PropertyData<QColor>(15, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'majorTickColor'
        QtMocHelpers::PropertyData<QColor>(16, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'minorTickColor'
        QtMocHelpers::PropertyData<QColor>(17, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'meterThickness'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'meterFontScaling'
        QtMocHelpers::PropertyData<qreal>(19, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'minimumLevel'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'warningLevel'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'errorLevel'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'clipLevel'
        QtMocHelpers::PropertyData<qreal>(23, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'minimumInputLevel'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'peakDecayRate'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'magnitudeIntegrationTime'
        QtMocHelpers::PropertyData<qreal>(26, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'peakHoldDuration'
        QtMocHelpers::PropertyData<qreal>(27, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'inputPeakHoldDuration'
        QtMocHelpers::PropertyData<qreal>(28, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VolumeMeter, qt_meta_tag_ZN11VolumeMeterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VolumeMeter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumeMeterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumeMeterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11VolumeMeterE_t>.metaTypes,
    nullptr
} };

void VolumeMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VolumeMeter *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundNominalColor(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundWarningColor(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundErrorColor(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->getForegroundNominalColor(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->getForegroundWarningColor(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->getForegroundErrorColor(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundNominalColorDisabled(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundWarningColorDisabled(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundErrorColorDisabled(); break;
        case 9: *reinterpret_cast<QColor*>(_v) = _t->getForegroundNominalColorDisabled(); break;
        case 10: *reinterpret_cast<QColor*>(_v) = _t->getForegroundWarningColorDisabled(); break;
        case 11: *reinterpret_cast<QColor*>(_v) = _t->getForegroundErrorColorDisabled(); break;
        case 12: *reinterpret_cast<QColor*>(_v) = _t->getClipColor(); break;
        case 13: *reinterpret_cast<QColor*>(_v) = _t->getMagnitudeColor(); break;
        case 14: *reinterpret_cast<QColor*>(_v) = _t->getMajorTickColor(); break;
        case 15: *reinterpret_cast<QColor*>(_v) = _t->getMinorTickColor(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->getMeterThickness(); break;
        case 17: *reinterpret_cast<qreal*>(_v) = _t->getMeterFontScaling(); break;
        case 18: *reinterpret_cast<qreal*>(_v) = _t->getMinimumLevel(); break;
        case 19: *reinterpret_cast<qreal*>(_v) = _t->getWarningLevel(); break;
        case 20: *reinterpret_cast<qreal*>(_v) = _t->getErrorLevel(); break;
        case 21: *reinterpret_cast<qreal*>(_v) = _t->getClipLevel(); break;
        case 22: *reinterpret_cast<qreal*>(_v) = _t->getMinimumInputLevel(); break;
        case 23: *reinterpret_cast<qreal*>(_v) = _t->getPeakDecayRate(); break;
        case 24: *reinterpret_cast<qreal*>(_v) = _t->getMagnitudeIntegrationTime(); break;
        case 25: *reinterpret_cast<qreal*>(_v) = _t->getPeakHoldDuration(); break;
        case 26: *reinterpret_cast<qreal*>(_v) = _t->getInputPeakHoldDuration(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundNominalColor(*reinterpret_cast<QColor*>(_v)); break;
        case 1: _t->setBackgroundWarningColor(*reinterpret_cast<QColor*>(_v)); break;
        case 2: _t->setBackgroundErrorColor(*reinterpret_cast<QColor*>(_v)); break;
        case 3: _t->setForegroundNominalColor(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setForegroundWarningColor(*reinterpret_cast<QColor*>(_v)); break;
        case 5: _t->setForegroundErrorColor(*reinterpret_cast<QColor*>(_v)); break;
        case 6: _t->setBackgroundNominalColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 7: _t->setBackgroundWarningColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 8: _t->setBackgroundErrorColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 9: _t->setForegroundNominalColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 10: _t->setForegroundWarningColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 11: _t->setForegroundErrorColorDisabled(*reinterpret_cast<QColor*>(_v)); break;
        case 12: _t->setClipColor(*reinterpret_cast<QColor*>(_v)); break;
        case 13: _t->setMagnitudeColor(*reinterpret_cast<QColor*>(_v)); break;
        case 14: _t->setMajorTickColor(*reinterpret_cast<QColor*>(_v)); break;
        case 15: _t->setMinorTickColor(*reinterpret_cast<QColor*>(_v)); break;
        case 16: _t->setMeterThickness(*reinterpret_cast<int*>(_v)); break;
        case 17: _t->setMeterFontScaling(*reinterpret_cast<qreal*>(_v)); break;
        case 18: _t->setMinimumLevel(*reinterpret_cast<qreal*>(_v)); break;
        case 19: _t->setWarningLevel(*reinterpret_cast<qreal*>(_v)); break;
        case 20: _t->setErrorLevel(*reinterpret_cast<qreal*>(_v)); break;
        case 21: _t->setClipLevel(*reinterpret_cast<qreal*>(_v)); break;
        case 22: _t->setMinimumInputLevel(*reinterpret_cast<qreal*>(_v)); break;
        case 23: _t->setPeakDecayRate(*reinterpret_cast<qreal*>(_v)); break;
        case 24: _t->setMagnitudeIntegrationTime(*reinterpret_cast<qreal*>(_v)); break;
        case 25: _t->setPeakHoldDuration(*reinterpret_cast<qreal*>(_v)); break;
        case 26: _t->setInputPeakHoldDuration(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *VolumeMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumeMeterE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VolumeMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
