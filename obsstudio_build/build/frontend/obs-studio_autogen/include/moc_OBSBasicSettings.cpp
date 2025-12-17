/****************************************************************************
** Meta object code from reading C++ file 'OBSBasicSettings.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/settings/OBSBasicSettings.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasicSettings.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16OBSBasicSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasicSettings::qt_create_metaobjectdata<qt_meta_tag_ZN16OBSBasicSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasicSettings",
        "UpdateMultitrackVideo",
        "",
        "RecreateOutputResolutionWidget",
        "UpdateResFPSLimits",
        "DisplayEnforceWarning",
        "checked",
        "on_show_clicked",
        "on_authPwShow_clicked",
        "on_connectAccount_clicked",
        "on_disconnectAccount_clicked",
        "on_useStreamKey_clicked",
        "on_useAuth_toggled",
        "on_server_currentIndexChanged",
        "index",
        "on_hotkeyFilterReset_clicked",
        "on_hotkeyFilterSearch_textChanged",
        "text",
        "on_hotkeyFilterInput_KeyChanged",
        "obs_key_combination_t",
        "combo",
        "on_theme_activated",
        "idx",
        "on_themeVariant_activated",
        "updateAppearanceControls",
        "on_listWidget_itemSelectionChanged",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_service_currentIndexChanged",
        "on_customServer_textChanged",
        "on_simpleOutputBrowse_clicked",
        "on_advOutRecPathBrowse_clicked",
        "on_advOutFFPathBrowse_clicked",
        "on_advOutEncoder_currentIndexChanged",
        "on_advOutRecEncoder_currentIndexChanged",
        "on_advOutFFIgnoreCompat_stateChanged",
        "state",
        "on_advOutFFFormat_currentIndexChanged",
        "on_advOutFFAEncoder_currentIndexChanged",
        "on_advOutFFVEncoder_currentIndexChanged",
        "on_advOutFFType_currentIndexChanged",
        "on_colorFormat_currentIndexChanged",
        "on_colorSpace_currentIndexChanged",
        "on_filenameFormatting_textEdited",
        "on_outputResolution_editTextChanged",
        "on_baseResolution_editTextChanged",
        "on_disableOSXVSync_clicked",
        "on_choose1_clicked",
        "on_choose2_clicked",
        "on_choose3_clicked",
        "on_choose4_clicked",
        "on_choose5_clicked",
        "on_choose6_clicked",
        "on_choose7_clicked",
        "on_choose8_clicked",
        "on_choose9_clicked",
        "on_colorPreset_currentIndexChanged",
        "GeneralChanged",
        "HideOBSWindowWarning",
        "Qt::CheckState",
        "AudioChanged",
        "AudioChangedRestart",
        "ReloadAudioSources",
        "SurroundWarning",
        "SpeakerLayoutChanged",
        "LowLatencyBufferingChanged",
        "UpdateAudioWarnings",
        "OutputsChanged",
        "Stream1Changed",
        "VideoChanged",
        "VideoChangedResolution",
        "HotkeysChanged",
        "ScanDuplicateHotkeys",
        "QFormLayout*",
        "layout",
        "ReloadHotkeys",
        "obs_hotkey_id",
        "ignoreKey",
        "A11yChanged",
        "AppearanceChanged",
        "AdvancedChanged",
        "AdvancedChangedRestart",
        "UpdateStreamDelayEstimate",
        "UpdateAutomaticReplayBufferCheckboxes",
        "AdvOutSplitFileChanged",
        "AdvOutRecCheckWarnings",
        "AdvOutRecCheckCodecs",
        "SimpleRecordingQualityChanged",
        "SimpleRecordingEncoderChanged",
        "SimpleRecordingQualityLosslessWarning",
        "SimpleReplayBufferChanged",
        "AdvReplayBufferChanged",
        "SimpleStreamingEncoderChanged",
        "SpawnTempService",
        "OBSService",
        "SetGeneralIcon",
        "QIcon",
        "icon",
        "SetAppearanceIcon",
        "SetStreamIcon",
        "SetOutputIcon",
        "SetAudioIcon",
        "SetVideoIcon",
        "SetHotkeysIcon",
        "SetAccessibilityIcon",
        "SetAdvancedIcon",
        "UseStreamKeyAdvClicked",
        "SimpleStreamAudioEncoderChanged",
        "AdvAudioEncodersChanged",
        "generalIcon",
        "appearanceIcon",
        "streamIcon",
        "outputIcon",
        "audioIcon",
        "videoIcon",
        "hotkeysIcon",
        "accessibilityIcon",
        "advancedIcon"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'UpdateMultitrackVideo'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecreateOutputResolutionWidget'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateResFPSLimits'
        QtMocHelpers::SlotData<bool()>(4, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'DisplayEnforceWarning'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_show_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_authPwShow_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_connectAccount_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_disconnectAccount_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_useStreamKey_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_useAuth_toggled'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_server_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'on_hotkeyFilterReset_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hotkeyFilterSearch_textChanged'
        QtMocHelpers::SlotData<void(const QString)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_hotkeyFilterInput_KeyChanged'
        QtMocHelpers::SlotData<void(obs_key_combination_t)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'on_theme_activated'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_themeVariant_activated'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'updateAppearanceControls'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'on_service_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_customServer_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_simpleOutputBrowse_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_advOutRecPathBrowse_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_advOutFFPathBrowse_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_advOutEncoder_currentIndexChanged'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_advOutRecEncoder_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_advOutFFIgnoreCompat_stateChanged'
        QtMocHelpers::SlotData<void(int)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 37 },
        }}),
        // Slot 'on_advOutFFFormat_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_advOutFFAEncoder_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_advOutFFVEncoder_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_advOutFFType_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_colorFormat_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_colorSpace_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_filenameFormatting_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_outputResolution_editTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_baseResolution_editTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_disableOSXVSync_clicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose1_clicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose2_clicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose3_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose4_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose5_clicked'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose6_clicked'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose7_clicked'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose8_clicked'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_choose9_clicked'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_colorPreset_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'GeneralChanged'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'HideOBSWindowWarning'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 60, 37 },
        }}),
        // Slot 'AudioChanged'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AudioChangedRestart'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReloadAudioSources'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SurroundWarning'
        QtMocHelpers::SlotData<void(int)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'SpeakerLayoutChanged'
        QtMocHelpers::SlotData<void(int)>(65, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'LowLatencyBufferingChanged'
        QtMocHelpers::SlotData<void(bool)>(66, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'UpdateAudioWarnings'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OutputsChanged'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Stream1Changed'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VideoChanged'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VideoChangedResolution'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'HotkeysChanged'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ScanDuplicateHotkeys'
        QtMocHelpers::SlotData<bool(QFormLayout *)>(73, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 74, 75 },
        }}),
        // Slot 'ReloadHotkeys'
        QtMocHelpers::SlotData<void(obs_hotkey_id)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 77, 78 },
        }}),
        // Slot 'ReloadHotkeys'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'A11yChanged'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AppearanceChanged'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvancedChanged'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvancedChangedRestart'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateStreamDelayEstimate'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UpdateAutomaticReplayBufferCheckboxes'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvOutSplitFileChanged'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvOutRecCheckWarnings'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvOutRecCheckCodecs'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SimpleRecordingQualityChanged'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SimpleRecordingEncoderChanged'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SimpleRecordingQualityLosslessWarning'
        QtMocHelpers::SlotData<void(int)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'SimpleReplayBufferChanged'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvReplayBufferChanged'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SimpleStreamingEncoderChanged'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SpawnTempService'
        QtMocHelpers::SlotData<OBSService()>(94, 2, QMC::AccessPrivate, 0x80000000 | 95),
        // Slot 'SetGeneralIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetAppearanceIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetStreamIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(100, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetOutputIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(101, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetAudioIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetVideoIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetHotkeysIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetAccessibilityIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(105, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'SetAdvancedIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(106, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 97, 98 },
        }}),
        // Slot 'UseStreamKeyAdvClicked'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SimpleStreamAudioEncoderChanged'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AdvAudioEncodersChanged'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'generalIcon'
        QtMocHelpers::PropertyData<QIcon>(110, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'appearanceIcon'
        QtMocHelpers::PropertyData<QIcon>(111, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'streamIcon'
        QtMocHelpers::PropertyData<QIcon>(112, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'outputIcon'
        QtMocHelpers::PropertyData<QIcon>(113, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'audioIcon'
        QtMocHelpers::PropertyData<QIcon>(114, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'videoIcon'
        QtMocHelpers::PropertyData<QIcon>(115, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'hotkeysIcon'
        QtMocHelpers::PropertyData<QIcon>(116, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'accessibilityIcon'
        QtMocHelpers::PropertyData<QIcon>(117, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'advancedIcon'
        QtMocHelpers::PropertyData<QIcon>(118, 0x80000000 | 97, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasicSettings, qt_meta_tag_ZN16OBSBasicSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasicSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16OBSBasicSettingsE_t>.metaTypes,
    nullptr
} };

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasicSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->UpdateMultitrackVideo(); break;
        case 1: _t->RecreateOutputResolutionWidget(); break;
        case 2: { bool _r = _t->UpdateResFPSLimits();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->DisplayEnforceWarning((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_show_clicked(); break;
        case 5: _t->on_authPwShow_clicked(); break;
        case 6: _t->on_connectAccount_clicked(); break;
        case 7: _t->on_disconnectAccount_clicked(); break;
        case 8: _t->on_useStreamKey_clicked(); break;
        case 9: _t->on_useAuth_toggled(); break;
        case 10: _t->on_server_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_hotkeyFilterReset_clicked(); break;
        case 12: _t->on_hotkeyFilterSearch_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->on_hotkeyFilterInput_KeyChanged((*reinterpret_cast<std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 14: _t->on_theme_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_themeVariant_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->updateAppearanceControls(); break;
        case 17: _t->on_listWidget_itemSelectionChanged(); break;
        case 18: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 19: _t->on_service_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_customServer_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_simpleOutputBrowse_clicked(); break;
        case 22: _t->on_advOutRecPathBrowse_clicked(); break;
        case 23: _t->on_advOutFFPathBrowse_clicked(); break;
        case 24: _t->on_advOutEncoder_currentIndexChanged(); break;
        case 25: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->on_colorSpace_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_filenameFormatting_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->on_outputResolution_editTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->on_baseResolution_editTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->on_disableOSXVSync_clicked(); break;
        case 37: _t->on_choose1_clicked(); break;
        case 38: _t->on_choose2_clicked(); break;
        case 39: _t->on_choose3_clicked(); break;
        case 40: _t->on_choose4_clicked(); break;
        case 41: _t->on_choose5_clicked(); break;
        case 42: _t->on_choose6_clicked(); break;
        case 43: _t->on_choose7_clicked(); break;
        case 44: _t->on_choose8_clicked(); break;
        case 45: _t->on_choose9_clicked(); break;
        case 46: _t->on_colorPreset_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->GeneralChanged(); break;
        case 48: _t->HideOBSWindowWarning((*reinterpret_cast<std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 49: _t->AudioChanged(); break;
        case 50: _t->AudioChangedRestart(); break;
        case 51: _t->ReloadAudioSources(); break;
        case 52: _t->SurroundWarning((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 53: _t->SpeakerLayoutChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->LowLatencyBufferingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->UpdateAudioWarnings(); break;
        case 56: _t->OutputsChanged(); break;
        case 57: _t->Stream1Changed(); break;
        case 58: _t->VideoChanged(); break;
        case 59: _t->VideoChangedResolution(); break;
        case 60: _t->HotkeysChanged(); break;
        case 61: { bool _r = _t->ScanDuplicateHotkeys((*reinterpret_cast<std::add_pointer_t<QFormLayout*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->ReloadHotkeys((*reinterpret_cast<std::add_pointer_t<obs_hotkey_id>>(_a[1]))); break;
        case 63: _t->ReloadHotkeys(); break;
        case 64: _t->A11yChanged(); break;
        case 65: _t->AppearanceChanged(); break;
        case 66: _t->AdvancedChanged(); break;
        case 67: _t->AdvancedChangedRestart(); break;
        case 68: _t->UpdateStreamDelayEstimate(); break;
        case 69: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 70: _t->AdvOutSplitFileChanged(); break;
        case 71: _t->AdvOutRecCheckWarnings(); break;
        case 72: _t->AdvOutRecCheckCodecs(); break;
        case 73: _t->SimpleRecordingQualityChanged(); break;
        case 74: _t->SimpleRecordingEncoderChanged(); break;
        case 75: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 76: _t->SimpleReplayBufferChanged(); break;
        case 77: _t->AdvReplayBufferChanged(); break;
        case 78: _t->SimpleStreamingEncoderChanged(); break;
        case 79: { OBSService _r = _t->SpawnTempService();
            if (_a[0]) *reinterpret_cast<OBSService*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->SetGeneralIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 81: _t->SetAppearanceIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 82: _t->SetStreamIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 83: _t->SetOutputIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 84: _t->SetAudioIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 85: _t->SetVideoIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 86: _t->SetHotkeysIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 87: _t->SetAccessibilityIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 88: _t->SetAdvancedIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 89: _t->UseStreamKeyAdvClicked(); break;
        case 90: _t->SimpleStreamAudioEncoderChanged(); break;
        case 91: _t->AdvAudioEncodersChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QIcon*>(_v) = _t->GetGeneralIcon(); break;
        case 1: *reinterpret_cast<QIcon*>(_v) = _t->GetAppearanceIcon(); break;
        case 2: *reinterpret_cast<QIcon*>(_v) = _t->GetStreamIcon(); break;
        case 3: *reinterpret_cast<QIcon*>(_v) = _t->GetOutputIcon(); break;
        case 4: *reinterpret_cast<QIcon*>(_v) = _t->GetAudioIcon(); break;
        case 5: *reinterpret_cast<QIcon*>(_v) = _t->GetVideoIcon(); break;
        case 6: *reinterpret_cast<QIcon*>(_v) = _t->GetHotkeysIcon(); break;
        case 7: *reinterpret_cast<QIcon*>(_v) = _t->GetAccessibilityIcon(); break;
        case 8: *reinterpret_cast<QIcon*>(_v) = _t->GetAdvancedIcon(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetGeneralIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 1: _t->SetAppearanceIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 2: _t->SetStreamIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 3: _t->SetOutputIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 4: _t->SetAudioIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 5: _t->SetVideoIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 6: _t->SetHotkeysIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 7: _t->SetAccessibilityIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 8: _t->SetAdvancedIcon(*reinterpret_cast<QIcon*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OBSBasicSettingsE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 92)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 92;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
