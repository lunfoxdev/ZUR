/****************************************************************************
** Meta object code from reading C++ file 'OBSBasic.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frontend/widgets/OBSBasic.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OBSBasic.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8OBSBasicE_t {};
} // unnamed namespace

template <> constexpr inline auto OBSBasic::qt_create_metaobjectdata<qt_meta_tag_ZN8OBSBasicE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OBSBasic",
        "mainWindowClosed",
        "",
        "CanvasResized",
        "uint32_t",
        "width",
        "height",
        "OutputResized",
        "PreviewZoomIn",
        "PreviewZoomOut",
        "PreviewResetZoom",
        "RecordingStarted",
        "pausable",
        "RecordingPaused",
        "RecordingUnpaused",
        "RecordingStopping",
        "RecordingStopped",
        "ReplayBufEnabled",
        "enabled",
        "ReplayBufStarted",
        "ReplayBufStopping",
        "ReplayBufStopped",
        "StreamingPreparing",
        "StreamingStarting",
        "broadcastAutoStart",
        "StreamingStarted",
        "withDelay",
        "StreamingStopping",
        "StreamingStopped",
        "PreviewProgramModeChanged",
        "TransitionAdded",
        "name",
        "uuid",
        "TransitionRenamed",
        "newName",
        "TransitionRemoved",
        "TransitionsCleared",
        "CurrentTransitionChanged",
        "TransitionDurationChanged",
        "duration",
        "VirtualCamEnabled",
        "VirtualCamStarted",
        "VirtualCamStopped",
        "BroadcastFlowEnabled",
        "BroadcastStreamReady",
        "ready",
        "BroadcastStreamActive",
        "BroadcastStreamStarted",
        "autoStop",
        "close",
        "UpdatePatronJson",
        "text",
        "error",
        "UpdateEditMenu",
        "applicationShutdown",
        "on_actionCopySource_triggered",
        "on_actionPasteRef_triggered",
        "on_actionPasteDup_triggered",
        "on_actionCopyFilters_triggered",
        "on_actionPasteFilters_triggered",
        "AudioMixerCopyFilters",
        "AudioMixerPasteFilters",
        "SourcePasteFilters",
        "OBSSource",
        "source",
        "dstSource",
        "SceneCopyFilters",
        "ScenePasteFilters",
        "on_actionCopyTransform_triggered",
        "on_actionPasteTransform_triggered",
        "on_toggleContextBar_toggled",
        "visible",
        "ShowContextBar",
        "HideContextBar",
        "ClearContextBar",
        "UpdateContextBar",
        "force",
        "UpdateContextBarDeferred",
        "UpdateContextBarVisibility",
        "on_resetDocks_triggered",
        "on_lockDocks_toggled",
        "lock",
        "on_sideDocks_toggled",
        "side",
        "RepairCustomExtraDockName",
        "ProcessHotkey",
        "obs_hotkey_id",
        "id",
        "pressed",
        "ResetStatsHotkey",
        "SetImageIcon",
        "QIcon",
        "icon",
        "SetColorIcon",
        "SetSlideshowIcon",
        "SetAudioInputIcon",
        "SetAudioOutputIcon",
        "SetDesktopCapIcon",
        "SetWindowCapIcon",
        "SetGameCapIcon",
        "SetCameraIcon",
        "SetTextIcon",
        "SetMediaIcon",
        "SetBrowserIcon",
        "SetGroupIcon",
        "SetSceneIcon",
        "SetDefaultIcon",
        "SetAudioProcessOutputIcon",
        "on_actionMainUndo_triggered",
        "on_actionMainRedo_triggered",
        "ToggleAlwaysOnTop",
        "SetShowing",
        "showing",
        "ToggleShowHide",
        "on_actionShowAbout_triggered",
        "on_actionFullscreenInterface_triggered",
        "on_actionRemux_triggered",
        "on_action_Settings_triggered",
        "on_actionShowMacPermissions_triggered",
        "on_actionAdvAudioProperties_triggered",
        "on_actionShowLogs_triggered",
        "on_actionUploadCurrentLog_triggered",
        "on_actionUploadLastLog_triggered",
        "on_actionViewCurrentLog_triggered",
        "on_actionCheckForUpdates_triggered",
        "on_actionRepair_triggered",
        "on_actionShowWhatsNew_triggered",
        "on_actionRestartSafe_triggered",
        "on_actionShowCrashLogs_triggered",
        "on_actionUploadLastCrashLog_triggered",
        "on_OBSBasic_customContextMenuRequested",
        "QPoint",
        "pos",
        "on_actionHelpPortal_triggered",
        "on_actionWebsite_triggered",
        "on_actionDiscord_triggered",
        "on_actionReleaseNotes_triggered",
        "on_actionShowSettingsFolder_triggered",
        "on_actionShowProfileFolder_triggered",
        "on_actionAlwaysOnTop_triggered",
        "on_toggleListboxToolbars_toggled",
        "on_toggleStatusBar_toggled",
        "on_autoConfigure_triggered",
        "on_stats_triggered",
        "on_idianPlayground_triggered",
        "on_resetUI_triggered",
        "logUploadFinished",
        "OBS::LogFileType",
        "uploadType",
        "updateCheckFinished",
        "ResizeOutputSizeOfSource",
        "on_actionOpenPluginManager_triggered",
        "PreviewScalingModeChanged",
        "value",
        "ColorChange",
        "EnablePreview",
        "DisablePreview",
        "setPreviewScalingWindow",
        "setPreviewScalingCanvas",
        "setPreviewScalingOutput",
        "on_actionLockPreview_triggered",
        "on_scalingMenu_aboutToShow",
        "on_preview_customContextMenuRequested",
        "on_previewDisabledWidget_customContextMenuRequested",
        "EnablePreviewDisplay",
        "enable",
        "TogglePreview",
        "on_actionNewProfile_triggered",
        "on_actionDupProfile_triggered",
        "on_actionRenameProfile_triggered",
        "on_actionRemoveProfile_triggered",
        "skipConfirmation",
        "on_actionImportProfile_triggered",
        "on_actionExportProfile_triggered",
        "CreateNewProfile",
        "CreateDuplicateProfile",
        "DeleteProfile",
        "profileName",
        "OpenSavedProjector",
        "SavedProjectorInfo*",
        "info",
        "OpenPreviewProjector",
        "OpenSourceProjector",
        "OpenMultiviewProjector",
        "OpenSceneProjector",
        "OpenPreviewWindow",
        "OpenSourceWindow",
        "OpenSceneWindow",
        "openMultiviewWindow",
        "on_actionShow_Recordings_triggered",
        "RecordActionTriggered",
        "RecordPauseToggled",
        "StartRecording",
        "StopRecording",
        "RecordingStart",
        "RecordStopping",
        "RecordingStop",
        "code",
        "last_error",
        "RecordingFileChanged",
        "lastRecordingPath",
        "PauseRecording",
        "UnpauseRecording",
        "CheckDiskSpaceRemaining",
        "RecordingActive",
        "ShowReplayBufferPauseWarning",
        "StartReplayBuffer",
        "StopReplayBuffer",
        "ReplayBufferStart",
        "ReplayBufferSave",
        "ReplayBufferSaved",
        "ReplayBufferStopping",
        "ReplayBufferStop",
        "ReplayBufferActive",
        "ReplayBufferActionTriggered",
        "DeferSaveBegin",
        "DeferSaveEnd",
        "SaveProjectDeferred",
        "SaveProject",
        "CreateNewSceneCollection",
        "on_actionShowMissingFiles_triggered",
        "on_actionNewSceneCollection_triggered",
        "on_actionDupSceneCollection_triggered",
        "on_actionRenameSceneCollection_triggered",
        "on_actionRemoveSceneCollection_triggered",
        "on_actionImportSceneCollection_triggered",
        "on_actionExportSceneCollection_triggered",
        "on_actionRemigrateSceneCollection_triggered",
        "RemoveCanvas",
        "OBSCanvas",
        "canvas",
        "RenameSources",
        "prevName",
        "ActivateAudioSource",
        "DeactivateAudioSource",
        "ReorderSources",
        "OBSScene",
        "scene",
        "RefreshSources",
        "SetDeinterlacingMode",
        "SetDeinterlacingOrder",
        "SetScaleFilter",
        "SetBlendingMethod",
        "SetBlendingMode",
        "MixerRenameSource",
        "on_actionRotate90CW_triggered",
        "on_actionRotate90CCW_triggered",
        "on_actionRotate180_triggered",
        "on_actionFlipHorizontal_triggered",
        "on_actionFlipVertical_triggered",
        "on_actionFitToScreen_triggered",
        "on_actionStretchToScreen_triggered",
        "on_actionCenterToScreen_triggered",
        "on_actionVerticalCenter_triggered",
        "on_actionHorizontalCenter_triggered",
        "on_actionEditTransform_triggered",
        "on_sources_customContextMenuRequested",
        "on_sourcePropertiesButton_clicked",
        "on_sourceFiltersButton_clicked",
        "on_sourceInteractButton_clicked",
        "on_actionAddSource_triggered",
        "on_actionRemoveSource_triggered",
        "on_actionInteract_triggered",
        "on_actionSourceProperties_triggered",
        "on_actionSourceUp_triggered",
        "on_actionSourceDown_triggered",
        "on_actionMoveUp_triggered",
        "on_actionMoveDown_triggered",
        "on_actionMoveToTop_triggered",
        "on_actionMoveToBottom_triggered",
        "on_toggleSourceIcons_toggled",
        "OpenFilters",
        "OpenProperties",
        "OpenInteraction",
        "OpenEditTransform",
        "OBSSceneItem",
        "item",
        "on_actionResetTransform_triggered",
        "AddSceneItem",
        "AddScene",
        "RemoveScene",
        "DuplicateSelectedScene",
        "RemoveSelectedScene",
        "GetItemWidgetFromSceneItem",
        "SourceTreeItem*",
        "obs_sceneitem_t*",
        "sceneItem",
        "on_actionSceneFilters_triggered",
        "on_scenes_currentItemChanged",
        "QListWidgetItem*",
        "current",
        "prev",
        "on_scenes_customContextMenuRequested",
        "GridActionClicked",
        "on_actionSceneListMode_triggered",
        "on_actionSceneGridMode_triggered",
        "on_actionAddScene_triggered",
        "on_actionRemoveScene_triggered",
        "on_actionSceneUp_triggered",
        "on_actionSceneDown_triggered",
        "on_scenes_itemDoubleClicked",
        "MoveSceneToTop",
        "MoveSceneToBottom",
        "EditSceneName",
        "EditSceneItemName",
        "SceneNameEdited",
        "QWidget*",
        "editor",
        "OpenSceneFilters",
        "Screenshot",
        "source_",
        "ScreenshotSelectedSource",
        "ScreenshotProgram",
        "ScreenshotScene",
        "DisplayStreamStartError",
        "StartStreaming",
        "StopStreaming",
        "ForceStopStreaming",
        "StreamDelayStarting",
        "sec",
        "StreamDelayStopping",
        "StreamingStart",
        "StreamStopping",
        "StreamingStop",
        "errorcode",
        "StreamingActive",
        "StreamActionTriggered",
        "EnablePreviewProgram",
        "DisablePreviewProgram",
        "ProgramViewContextMenuRequested",
        "OpenStudioProgramProjector",
        "OpenStudioProgramWindow",
        "TogglePreviewProgramMode",
        "IconActivated",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "SetCurrentScene",
        "SetTransition",
        "transition",
        "OverrideTransition",
        "TransitionToScene",
        "quickTransition",
        "quickDuration",
        "black",
        "manual",
        "SetCurrentTransition",
        "SetTransitionDuration",
        "AddTransition",
        "const char*",
        "RenameTransition",
        "TransitionClicked",
        "TransitionStopped",
        "TransitionFullyStopped",
        "TriggerQuickTransition",
        "TBarChanged",
        "TBarReleased",
        "on_transitionAdd_clicked",
        "on_transitionRemove_clicked",
        "on_transitionProps_clicked",
        "ShowTransitionProperties",
        "HideTransitionProperties",
        "StartVirtualCam",
        "StopVirtualCam",
        "OnVirtualCamStart",
        "OnVirtualCamStop",
        "VirtualCamActive",
        "UpdateVirtualCamConfig",
        "VCamConfig",
        "config",
        "RestartVirtualCam",
        "RestartingVirtualCam",
        "VirtualCamActionTriggered",
        "OpenVirtualCamConfig",
        "HideAudioControl",
        "UnhideAllAudioControls",
        "ToggleHideMixer",
        "on_vMixerScrollArea_customContextMenuRequested",
        "on_hMixerScrollArea_customContextMenuRequested",
        "LockVolumeControl",
        "on_actionMixerToolbarAdvAudio_triggered",
        "on_actionMixerToolbarMenu_triggered",
        "StackedMixerAreaContextMenuRequested",
        "SetupBroadcast",
        "imageIcon",
        "colorIcon",
        "slideshowIcon",
        "audioInputIcon",
        "audioOutputIcon",
        "desktopCapIcon",
        "windowCapIcon",
        "gameCapIcon",
        "cameraIcon",
        "textIcon",
        "mediaIcon",
        "browserIcon",
        "groupIcon",
        "sceneIcon",
        "defaultIcon",
        "audioProcessOutputIcon"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mainWindowClosed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CanvasResized'
        QtMocHelpers::SignalData<void(uint32_t, uint32_t)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 },
        }}),
        // Signal 'OutputResized'
        QtMocHelpers::SignalData<void(uint32_t, uint32_t)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 },
        }}),
        // Signal 'PreviewZoomIn'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'PreviewZoomOut'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'PreviewResetZoom'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'RecordingStarted'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Signal 'RecordingStarted'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'RecordingPaused'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'RecordingUnpaused'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'RecordingStopping'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'RecordingStopped'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ReplayBufEnabled'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'ReplayBufStarted'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ReplayBufStopping'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ReplayBufStopped'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StreamingPreparing'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StreamingStarting'
        QtMocHelpers::SignalData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Signal 'StreamingStarted'
        QtMocHelpers::SignalData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'StreamingStarted'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'StreamingStopping'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StreamingStopped'
        QtMocHelpers::SignalData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'StreamingStopped'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'PreviewProgramModeChanged'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'TransitionAdded'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 }, { QMetaType::QString, 32 },
        }}),
        // Signal 'TransitionRenamed'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 }, { QMetaType::QString, 34 },
        }}),
        // Signal 'TransitionRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Signal 'TransitionsCleared'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CurrentTransitionChanged'
        QtMocHelpers::SignalData<void(const QString &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Signal 'TransitionDurationChanged'
        QtMocHelpers::SignalData<void(const int &)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 39 },
        }}),
        // Signal 'VirtualCamEnabled'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'VirtualCamStarted'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'VirtualCamStopped'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'BroadcastFlowEnabled'
        QtMocHelpers::SignalData<void(bool)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'BroadcastStreamReady'
        QtMocHelpers::SignalData<void(bool)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Signal 'BroadcastStreamActive'
        QtMocHelpers::SignalData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'BroadcastStreamStarted'
        QtMocHelpers::SignalData<void(bool)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 48 },
        }}),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdatePatronJson'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 51 }, { QMetaType::QString, 52 },
        }}),
        // Slot 'UpdateEditMenu'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applicationShutdown'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionCopySource_triggered'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteRef_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteDup_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyFilters_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteFilters_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AudioMixerCopyFilters'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AudioMixerPasteFilters'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SourcePasteFilters'
        QtMocHelpers::SlotData<void(OBSSource, OBSSource)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 }, { 0x80000000 | 63, 65 },
        }}),
        // Slot 'SceneCopyFilters'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ScenePasteFilters'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyTransform_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteTransform_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toggleContextBar_toggled'
        QtMocHelpers::SlotData<void(bool)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 71 },
        }}),
        // Slot 'ShowContextBar'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'HideContextBar'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ClearContextBar'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateContextBar'
        QtMocHelpers::SlotData<void(bool)>(75, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 76 },
        }}),
        // Slot 'UpdateContextBar'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'UpdateContextBarDeferred'
        QtMocHelpers::SlotData<void(bool)>(77, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 76 },
        }}),
        // Slot 'UpdateContextBarDeferred'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'UpdateContextBarVisibility'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_resetDocks_triggered'
        QtMocHelpers::SlotData<void(bool)>(79, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 76 },
        }}),
        // Slot 'on_resetDocks_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_lockDocks_toggled'
        QtMocHelpers::SlotData<void(bool)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'on_sideDocks_toggled'
        QtMocHelpers::SlotData<void(bool)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 83 },
        }}),
        // Slot 'RepairCustomExtraDockName'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ProcessHotkey'
        QtMocHelpers::SlotData<void(obs_hotkey_id, bool)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 86, 87 }, { QMetaType::Bool, 88 },
        }}),
        // Slot 'ResetStatsHotkey'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetImageIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetColorIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(93, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetSlideshowIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetAudioInputIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(95, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetAudioOutputIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetDesktopCapIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(97, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetWindowCapIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(98, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetGameCapIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetCameraIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(100, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetTextIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(101, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetMediaIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetBrowserIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetGroupIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetSceneIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(105, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetDefaultIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(106, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'SetAudioProcessOutputIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(107, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'on_actionMainUndo_triggered'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMainRedo_triggered'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ToggleAlwaysOnTop'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetShowing'
        QtMocHelpers::SlotData<void(bool)>(111, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 112 },
        }}),
        // Slot 'ToggleShowHide'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAbout_triggered'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFullscreenInterface_triggered'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemux_triggered'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Settings_triggered'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowMacPermissions_triggered'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAdvAudioProperties_triggered'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowLogs_triggered'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUploadCurrentLog_triggered'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUploadLastLog_triggered'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewCurrentLog_triggered'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCheckForUpdates_triggered'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRepair_triggered'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowWhatsNew_triggered'
        QtMocHelpers::SlotData<void()>(126, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRestartSafe_triggered'
        QtMocHelpers::SlotData<void()>(127, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowCrashLogs_triggered'
        QtMocHelpers::SlotData<void()>(128, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUploadLastCrashLog_triggered'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_OBSBasic_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(130, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 131, 132 },
        }}),
        // Slot 'on_actionHelpPortal_triggered'
        QtMocHelpers::SlotData<void()>(133, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionWebsite_triggered'
        QtMocHelpers::SlotData<void()>(134, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDiscord_triggered'
        QtMocHelpers::SlotData<void()>(135, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReleaseNotes_triggered'
        QtMocHelpers::SlotData<void()>(136, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowSettingsFolder_triggered'
        QtMocHelpers::SlotData<void()>(137, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowProfileFolder_triggered'
        QtMocHelpers::SlotData<void()>(138, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAlwaysOnTop_triggered'
        QtMocHelpers::SlotData<void()>(139, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toggleListboxToolbars_toggled'
        QtMocHelpers::SlotData<void(bool)>(140, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 71 },
        }}),
        // Slot 'on_toggleStatusBar_toggled'
        QtMocHelpers::SlotData<void(bool)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 71 },
        }}),
        // Slot 'on_autoConfigure_triggered'
        QtMocHelpers::SlotData<void()>(142, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_stats_triggered'
        QtMocHelpers::SlotData<void()>(143, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_idianPlayground_triggered'
        QtMocHelpers::SlotData<void()>(144, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_resetUI_triggered'
        QtMocHelpers::SlotData<void()>(145, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'logUploadFinished'
        QtMocHelpers::SlotData<void(const QString &, const QString &, OBS::LogFileType)>(146, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 51 }, { QMetaType::QString, 52 }, { 0x80000000 | 147, 148 },
        }}),
        // Slot 'updateCheckFinished'
        QtMocHelpers::SlotData<void()>(149, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResizeOutputSizeOfSource'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenPluginManager_triggered'
        QtMocHelpers::SlotData<void()>(151, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'PreviewScalingModeChanged'
        QtMocHelpers::SlotData<void(int)>(152, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 153 },
        }}),
        // Slot 'ColorChange'
        QtMocHelpers::SlotData<void()>(154, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EnablePreview'
        QtMocHelpers::SlotData<void()>(155, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DisablePreview'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreviewScalingWindow'
        QtMocHelpers::SlotData<void()>(157, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreviewScalingCanvas'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreviewScalingOutput'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLockPreview_triggered'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_scalingMenu_aboutToShow'
        QtMocHelpers::SlotData<void()>(161, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_preview_customContextMenuRequested'
        QtMocHelpers::SlotData<void()>(162, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_previewDisabledWidget_customContextMenuRequested'
        QtMocHelpers::SlotData<void()>(163, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EnablePreviewDisplay'
        QtMocHelpers::SlotData<void(bool)>(164, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 165 },
        }}),
        // Slot 'TogglePreview'
        QtMocHelpers::SlotData<void()>(166, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewProfile_triggered'
        QtMocHelpers::SlotData<void()>(167, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDupProfile_triggered'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRenameProfile_triggered'
        QtMocHelpers::SlotData<void()>(169, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveProfile_triggered'
        QtMocHelpers::SlotData<void(bool)>(170, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 171 },
        }}),
        // Slot 'on_actionRemoveProfile_triggered'
        QtMocHelpers::SlotData<void()>(170, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_actionImportProfile_triggered'
        QtMocHelpers::SlotData<void()>(172, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportProfile_triggered'
        QtMocHelpers::SlotData<void()>(173, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'CreateNewProfile'
        QtMocHelpers::SlotData<bool(const QString &)>(174, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'CreateDuplicateProfile'
        QtMocHelpers::SlotData<bool(const QString &)>(175, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'DeleteProfile'
        QtMocHelpers::SlotData<void(const QString &)>(176, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 177 },
        }}),
        // Slot 'OpenSavedProjector'
        QtMocHelpers::SlotData<void(SavedProjectorInfo *)>(178, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 179, 180 },
        }}),
        // Slot 'OpenPreviewProjector'
        QtMocHelpers::SlotData<void()>(181, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenSourceProjector'
        QtMocHelpers::SlotData<void()>(182, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenMultiviewProjector'
        QtMocHelpers::SlotData<void()>(183, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenSceneProjector'
        QtMocHelpers::SlotData<void()>(184, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenPreviewWindow'
        QtMocHelpers::SlotData<void()>(185, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenSourceWindow'
        QtMocHelpers::SlotData<void()>(186, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenSceneWindow'
        QtMocHelpers::SlotData<void()>(187, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openMultiviewWindow'
        QtMocHelpers::SlotData<void()>(188, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_Recordings_triggered'
        QtMocHelpers::SlotData<void()>(189, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordActionTriggered'
        QtMocHelpers::SlotData<void()>(190, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordPauseToggled'
        QtMocHelpers::SlotData<void()>(191, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StartRecording'
        QtMocHelpers::SlotData<void()>(192, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StopRecording'
        QtMocHelpers::SlotData<void()>(193, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordingStart'
        QtMocHelpers::SlotData<void()>(194, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordStopping'
        QtMocHelpers::SlotData<void()>(195, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordingStop'
        QtMocHelpers::SlotData<void(int, QString)>(196, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 197 }, { QMetaType::QString, 198 },
        }}),
        // Slot 'RecordingFileChanged'
        QtMocHelpers::SlotData<void(QString)>(199, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 200 },
        }}),
        // Slot 'PauseRecording'
        QtMocHelpers::SlotData<void()>(201, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UnpauseRecording'
        QtMocHelpers::SlotData<void()>(202, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'CheckDiskSpaceRemaining'
        QtMocHelpers::SlotData<void()>(203, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RecordingActive'
        QtMocHelpers::SlotData<bool()>(204, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'ShowReplayBufferPauseWarning'
        QtMocHelpers::SlotData<void()>(205, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StartReplayBuffer'
        QtMocHelpers::SlotData<void()>(206, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StopReplayBuffer'
        QtMocHelpers::SlotData<void()>(207, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ReplayBufferStart'
        QtMocHelpers::SlotData<void()>(208, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ReplayBufferSave'
        QtMocHelpers::SlotData<void()>(209, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ReplayBufferSaved'
        QtMocHelpers::SlotData<void()>(210, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ReplayBufferStopping'
        QtMocHelpers::SlotData<void()>(211, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ReplayBufferStop'
        QtMocHelpers::SlotData<void(int)>(212, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 197 },
        }}),
        // Slot 'ReplayBufferActive'
        QtMocHelpers::SlotData<bool()>(213, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'ReplayBufferActionTriggered'
        QtMocHelpers::SlotData<void()>(214, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DeferSaveBegin'
        QtMocHelpers::SlotData<void()>(215, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'DeferSaveEnd'
        QtMocHelpers::SlotData<void()>(216, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SaveProjectDeferred'
        QtMocHelpers::SlotData<void()>(217, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SaveProject'
        QtMocHelpers::SlotData<void()>(218, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'CreateNewSceneCollection'
        QtMocHelpers::SlotData<bool(const QString &)>(219, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'on_actionShowMissingFiles_triggered'
        QtMocHelpers::SlotData<void()>(220, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(221, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDupSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(222, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRenameSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(223, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveSceneCollection_triggered'
        QtMocHelpers::SlotData<void(bool)>(224, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 171 },
        }}),
        // Slot 'on_actionRemoveSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(224, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_actionImportSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(225, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(226, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemigrateSceneCollection_triggered'
        QtMocHelpers::SlotData<void()>(227, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RemoveCanvas'
        QtMocHelpers::SlotData<bool(OBSCanvas)>(228, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 229, 230 },
        }}),
        // Slot 'RenameSources'
        QtMocHelpers::SlotData<void(OBSSource, QString, QString)>(231, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 }, { QMetaType::QString, 34 }, { QMetaType::QString, 232 },
        }}),
        // Slot 'ActivateAudioSource'
        QtMocHelpers::SlotData<void(OBSSource)>(233, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'DeactivateAudioSource'
        QtMocHelpers::SlotData<void(OBSSource)>(234, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'ReorderSources'
        QtMocHelpers::SlotData<void(OBSScene)>(235, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 236, 237 },
        }}),
        // Slot 'RefreshSources'
        QtMocHelpers::SlotData<void(OBSScene)>(238, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 236, 237 },
        }}),
        // Slot 'SetDeinterlacingMode'
        QtMocHelpers::SlotData<void()>(239, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetDeinterlacingOrder'
        QtMocHelpers::SlotData<void()>(240, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetScaleFilter'
        QtMocHelpers::SlotData<void()>(241, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetBlendingMethod'
        QtMocHelpers::SlotData<void()>(242, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetBlendingMode'
        QtMocHelpers::SlotData<void()>(243, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'MixerRenameSource'
        QtMocHelpers::SlotData<void()>(244, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRotate90CW_triggered'
        QtMocHelpers::SlotData<void()>(245, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRotate90CCW_triggered'
        QtMocHelpers::SlotData<void()>(246, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRotate180_triggered'
        QtMocHelpers::SlotData<void()>(247, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFlipHorizontal_triggered'
        QtMocHelpers::SlotData<void()>(248, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFlipVertical_triggered'
        QtMocHelpers::SlotData<void()>(249, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFitToScreen_triggered'
        QtMocHelpers::SlotData<void()>(250, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStretchToScreen_triggered'
        QtMocHelpers::SlotData<void()>(251, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCenterToScreen_triggered'
        QtMocHelpers::SlotData<void()>(252, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVerticalCenter_triggered'
        QtMocHelpers::SlotData<void()>(253, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHorizontalCenter_triggered'
        QtMocHelpers::SlotData<void()>(254, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditTransform_triggered'
        QtMocHelpers::SlotData<void()>(255, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_sources_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(256, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 131, 132 },
        }}),
        // Slot 'on_sourcePropertiesButton_clicked'
        QtMocHelpers::SlotData<void()>(257, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_sourceFiltersButton_clicked'
        QtMocHelpers::SlotData<void()>(258, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_sourceInteractButton_clicked'
        QtMocHelpers::SlotData<void()>(259, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddSource_triggered'
        QtMocHelpers::SlotData<void()>(260, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveSource_triggered'
        QtMocHelpers::SlotData<void()>(261, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInteract_triggered'
        QtMocHelpers::SlotData<void()>(262, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSourceProperties_triggered'
        QtMocHelpers::SlotData<void()>(263, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSourceUp_triggered'
        QtMocHelpers::SlotData<void()>(264, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSourceDown_triggered'
        QtMocHelpers::SlotData<void()>(265, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp_triggered'
        QtMocHelpers::SlotData<void()>(266, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown_triggered'
        QtMocHelpers::SlotData<void()>(267, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveToTop_triggered'
        QtMocHelpers::SlotData<void()>(268, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveToBottom_triggered'
        QtMocHelpers::SlotData<void()>(269, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toggleSourceIcons_toggled'
        QtMocHelpers::SlotData<void(bool)>(270, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 71 },
        }}),
        // Slot 'OpenFilters'
        QtMocHelpers::SlotData<void(OBSSource)>(271, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'OpenFilters'
        QtMocHelpers::SlotData<void()>(271, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'OpenProperties'
        QtMocHelpers::SlotData<void(OBSSource)>(272, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'OpenProperties'
        QtMocHelpers::SlotData<void()>(272, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'OpenInteraction'
        QtMocHelpers::SlotData<void(OBSSource)>(273, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'OpenInteraction'
        QtMocHelpers::SlotData<void()>(273, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'OpenEditTransform'
        QtMocHelpers::SlotData<void(OBSSceneItem)>(274, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 275, 276 },
        }}),
        // Slot 'OpenEditTransform'
        QtMocHelpers::SlotData<void()>(274, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_actionResetTransform_triggered'
        QtMocHelpers::SlotData<void()>(277, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'AddSceneItem'
        QtMocHelpers::SlotData<void(OBSSceneItem)>(278, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 275, 276 },
        }}),
        // Slot 'AddScene'
        QtMocHelpers::SlotData<void(OBSSource)>(279, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'RemoveScene'
        QtMocHelpers::SlotData<void(OBSSource)>(280, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 64 },
        }}),
        // Slot 'DuplicateSelectedScene'
        QtMocHelpers::SlotData<void()>(281, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RemoveSelectedScene'
        QtMocHelpers::SlotData<void()>(282, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'GetItemWidgetFromSceneItem'
        QtMocHelpers::SlotData<SourceTreeItem *(obs_sceneitem_t *)>(283, 2, QMC::AccessPrivate, 0x80000000 | 284, {{
            { 0x80000000 | 285, 286 },
        }}),
        // Slot 'on_actionSceneFilters_triggered'
        QtMocHelpers::SlotData<void()>(287, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_scenes_currentItemChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *, QListWidgetItem *)>(288, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 289, 290 }, { 0x80000000 | 289, 291 },
        }}),
        // Slot 'on_scenes_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(292, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 131, 132 },
        }}),
        // Slot 'GridActionClicked'
        QtMocHelpers::SlotData<void()>(293, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSceneListMode_triggered'
        QtMocHelpers::SlotData<void()>(294, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSceneGridMode_triggered'
        QtMocHelpers::SlotData<void()>(295, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddScene_triggered'
        QtMocHelpers::SlotData<void()>(296, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveScene_triggered'
        QtMocHelpers::SlotData<void()>(297, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSceneUp_triggered'
        QtMocHelpers::SlotData<void()>(298, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSceneDown_triggered'
        QtMocHelpers::SlotData<void()>(299, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_scenes_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(300, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 289, 276 },
        }}),
        // Slot 'MoveSceneToTop'
        QtMocHelpers::SlotData<void()>(301, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'MoveSceneToBottom'
        QtMocHelpers::SlotData<void()>(302, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EditSceneName'
        QtMocHelpers::SlotData<void()>(303, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EditSceneItemName'
        QtMocHelpers::SlotData<void()>(304, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SceneNameEdited'
        QtMocHelpers::SlotData<void(QWidget *)>(305, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 306, 307 },
        }}),
        // Slot 'OpenSceneFilters'
        QtMocHelpers::SlotData<void()>(308, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Screenshot'
        QtMocHelpers::SlotData<void(OBSSource)>(309, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 310 },
        }}),
        // Slot 'Screenshot'
        QtMocHelpers::SlotData<void()>(309, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'ScreenshotSelectedSource'
        QtMocHelpers::SlotData<void()>(311, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ScreenshotProgram'
        QtMocHelpers::SlotData<void()>(312, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ScreenshotScene'
        QtMocHelpers::SlotData<void()>(313, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DisplayStreamStartError'
        QtMocHelpers::SlotData<void()>(314, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StartStreaming'
        QtMocHelpers::SlotData<void()>(315, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StopStreaming'
        QtMocHelpers::SlotData<void()>(316, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ForceStopStreaming'
        QtMocHelpers::SlotData<void()>(317, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamDelayStarting'
        QtMocHelpers::SlotData<void(int)>(318, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 319 },
        }}),
        // Slot 'StreamDelayStopping'
        QtMocHelpers::SlotData<void(int)>(320, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 319 },
        }}),
        // Slot 'StreamingStart'
        QtMocHelpers::SlotData<void()>(321, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamStopping'
        QtMocHelpers::SlotData<void()>(322, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StreamingStop'
        QtMocHelpers::SlotData<void(int, QString)>(323, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 324 }, { QMetaType::QString, 198 },
        }}),
        // Slot 'StreamingActive'
        QtMocHelpers::SlotData<bool()>(325, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'StreamActionTriggered'
        QtMocHelpers::SlotData<void()>(326, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EnablePreviewProgram'
        QtMocHelpers::SlotData<void()>(327, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DisablePreviewProgram'
        QtMocHelpers::SlotData<void()>(328, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ProgramViewContextMenuRequested'
        QtMocHelpers::SlotData<void()>(329, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenStudioProgramProjector'
        QtMocHelpers::SlotData<void()>(330, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenStudioProgramWindow'
        QtMocHelpers::SlotData<void()>(331, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TogglePreviewProgramMode'
        QtMocHelpers::SlotData<void()>(332, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'IconActivated'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(333, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 334, 335 },
        }}),
        // Slot 'SetCurrentScene'
        QtMocHelpers::SlotData<void(OBSSource, bool)>(336, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 },
        }}),
        // Slot 'SetCurrentScene'
        QtMocHelpers::SlotData<void(OBSSource)>(336, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 },
        }}),
        // Slot 'SetTransition'
        QtMocHelpers::SlotData<void(OBSSource)>(337, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 63, 338 },
        }}),
        // Slot 'OverrideTransition'
        QtMocHelpers::SlotData<void(OBSSource)>(339, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 63, 338 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSScene, bool)>(340, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 236, 237 }, { QMetaType::Bool, 76 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSScene)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 236, 237 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource, bool, bool, int, bool, bool)>(340, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 }, { QMetaType::Bool, 341 }, { QMetaType::Int, 342 },
            { QMetaType::Bool, 343 }, { QMetaType::Bool, 344 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource, bool, bool, int, bool)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 }, { QMetaType::Bool, 341 }, { QMetaType::Int, 342 },
            { QMetaType::Bool, 343 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource, bool, bool, int)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 }, { QMetaType::Bool, 341 }, { QMetaType::Int, 342 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource, bool, bool)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 }, { QMetaType::Bool, 341 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource, bool)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 }, { QMetaType::Bool, 76 },
        }}),
        // Slot 'TransitionToScene'
        QtMocHelpers::SlotData<void(OBSSource)>(340, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 63, 237 },
        }}),
        // Slot 'SetCurrentTransition'
        QtMocHelpers::SlotData<void(const QString &)>(345, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Slot 'SetTransitionDuration'
        QtMocHelpers::SlotData<void(int)>(346, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 39 },
        }}),
        // Slot 'AddTransition'
        QtMocHelpers::SlotData<void(const char *)>(347, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 348, 87 },
        }}),
        // Slot 'RenameTransition'
        QtMocHelpers::SlotData<void(OBSSource)>(349, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 63, 338 },
        }}),
        // Slot 'TransitionClicked'
        QtMocHelpers::SlotData<void()>(350, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TransitionStopped'
        QtMocHelpers::SlotData<void()>(351, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TransitionFullyStopped'
        QtMocHelpers::SlotData<void()>(352, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TriggerQuickTransition'
        QtMocHelpers::SlotData<void(int)>(353, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 87 },
        }}),
        // Slot 'TBarChanged'
        QtMocHelpers::SlotData<void(int)>(354, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 153 },
        }}),
        // Slot 'TBarReleased'
        QtMocHelpers::SlotData<void()>(355, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_transitionAdd_clicked'
        QtMocHelpers::SlotData<void()>(356, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_transitionRemove_clicked'
        QtMocHelpers::SlotData<void()>(357, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_transitionProps_clicked'
        QtMocHelpers::SlotData<void()>(358, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ShowTransitionProperties'
        QtMocHelpers::SlotData<void()>(359, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'HideTransitionProperties'
        QtMocHelpers::SlotData<void()>(360, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StartVirtualCam'
        QtMocHelpers::SlotData<void()>(361, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'StopVirtualCam'
        QtMocHelpers::SlotData<void()>(362, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnVirtualCamStart'
        QtMocHelpers::SlotData<void()>(363, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnVirtualCamStop'
        QtMocHelpers::SlotData<void(int)>(364, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 197 },
        }}),
        // Slot 'VirtualCamActive'
        QtMocHelpers::SlotData<bool()>(365, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'UpdateVirtualCamConfig'
        QtMocHelpers::SlotData<void(const VCamConfig &)>(366, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 367, 368 },
        }}),
        // Slot 'RestartVirtualCam'
        QtMocHelpers::SlotData<void(const VCamConfig &)>(369, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 367, 368 },
        }}),
        // Slot 'RestartingVirtualCam'
        QtMocHelpers::SlotData<void()>(370, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'VirtualCamActionTriggered'
        QtMocHelpers::SlotData<void()>(371, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OpenVirtualCamConfig'
        QtMocHelpers::SlotData<void()>(372, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'HideAudioControl'
        QtMocHelpers::SlotData<void()>(373, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UnhideAllAudioControls'
        QtMocHelpers::SlotData<void()>(374, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ToggleHideMixer'
        QtMocHelpers::SlotData<void()>(375, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_vMixerScrollArea_customContextMenuRequested'
        QtMocHelpers::SlotData<void()>(376, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hMixerScrollArea_customContextMenuRequested'
        QtMocHelpers::SlotData<void()>(377, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'LockVolumeControl'
        QtMocHelpers::SlotData<void(bool)>(378, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'on_actionMixerToolbarAdvAudio_triggered'
        QtMocHelpers::SlotData<void()>(379, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMixerToolbarMenu_triggered'
        QtMocHelpers::SlotData<void()>(380, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StackedMixerAreaContextMenuRequested'
        QtMocHelpers::SlotData<void()>(381, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetupBroadcast'
        QtMocHelpers::SlotData<void()>(382, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'imageIcon'
        QtMocHelpers::PropertyData<QIcon>(383, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'colorIcon'
        QtMocHelpers::PropertyData<QIcon>(384, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'slideshowIcon'
        QtMocHelpers::PropertyData<QIcon>(385, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'audioInputIcon'
        QtMocHelpers::PropertyData<QIcon>(386, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'audioOutputIcon'
        QtMocHelpers::PropertyData<QIcon>(387, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'desktopCapIcon'
        QtMocHelpers::PropertyData<QIcon>(388, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'windowCapIcon'
        QtMocHelpers::PropertyData<QIcon>(389, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'gameCapIcon'
        QtMocHelpers::PropertyData<QIcon>(390, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'cameraIcon'
        QtMocHelpers::PropertyData<QIcon>(391, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'textIcon'
        QtMocHelpers::PropertyData<QIcon>(392, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'mediaIcon'
        QtMocHelpers::PropertyData<QIcon>(393, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'browserIcon'
        QtMocHelpers::PropertyData<QIcon>(394, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'groupIcon'
        QtMocHelpers::PropertyData<QIcon>(395, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'sceneIcon'
        QtMocHelpers::PropertyData<QIcon>(396, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'defaultIcon'
        QtMocHelpers::PropertyData<QIcon>(397, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'audioProcessOutputIcon'
        QtMocHelpers::PropertyData<QIcon>(398, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OBSBasic, qt_meta_tag_ZN8OBSBasicE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OBSBasic::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSBasicE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSBasicE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8OBSBasicE_t>.metaTypes,
    nullptr
} };

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OBSBasic *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mainWindowClosed(); break;
        case 1: _t->CanvasResized((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 2: _t->OutputResized((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 3: _t->PreviewZoomIn(); break;
        case 4: _t->PreviewZoomOut(); break;
        case 5: _t->PreviewResetZoom(); break;
        case 6: _t->RecordingStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->RecordingStarted(); break;
        case 8: _t->RecordingPaused(); break;
        case 9: _t->RecordingUnpaused(); break;
        case 10: _t->RecordingStopping(); break;
        case 11: _t->RecordingStopped(); break;
        case 12: _t->ReplayBufEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->ReplayBufStarted(); break;
        case 14: _t->ReplayBufStopping(); break;
        case 15: _t->ReplayBufStopped(); break;
        case 16: _t->StreamingPreparing(); break;
        case 17: _t->StreamingStarting((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->StreamingStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->StreamingStarted(); break;
        case 20: _t->StreamingStopping(); break;
        case 21: _t->StreamingStopped((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->StreamingStopped(); break;
        case 23: _t->PreviewProgramModeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->TransitionAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->TransitionRenamed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->TransitionRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->TransitionsCleared(); break;
        case 28: _t->CurrentTransitionChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->TransitionDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->VirtualCamEnabled(); break;
        case 31: _t->VirtualCamStarted(); break;
        case 32: _t->VirtualCamStopped(); break;
        case 33: _t->BroadcastFlowEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->BroadcastStreamReady((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->BroadcastStreamActive(); break;
        case 36: _t->BroadcastStreamStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->close(); break;
        case 38: _t->UpdatePatronJson((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 39: _t->UpdateEditMenu(); break;
        case 40: _t->applicationShutdown(); break;
        case 41: _t->on_actionCopySource_triggered(); break;
        case 42: _t->on_actionPasteRef_triggered(); break;
        case 43: _t->on_actionPasteDup_triggered(); break;
        case 44: _t->on_actionCopyFilters_triggered(); break;
        case 45: _t->on_actionPasteFilters_triggered(); break;
        case 46: _t->AudioMixerCopyFilters(); break;
        case 47: _t->AudioMixerPasteFilters(); break;
        case 48: _t->SourcePasteFilters((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[2]))); break;
        case 49: _t->SceneCopyFilters(); break;
        case 50: _t->ScenePasteFilters(); break;
        case 51: _t->on_actionCopyTransform_triggered(); break;
        case 52: _t->on_actionPasteTransform_triggered(); break;
        case 53: _t->on_toggleContextBar_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->ShowContextBar(); break;
        case 55: _t->HideContextBar(); break;
        case 56: _t->ClearContextBar(); break;
        case 57: _t->UpdateContextBar((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 58: _t->UpdateContextBar(); break;
        case 59: _t->UpdateContextBarDeferred((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 60: _t->UpdateContextBarDeferred(); break;
        case 61: _t->UpdateContextBarVisibility(); break;
        case 62: _t->on_resetDocks_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 63: _t->on_resetDocks_triggered(); break;
        case 64: _t->on_lockDocks_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 65: _t->on_sideDocks_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->RepairCustomExtraDockName(); break;
        case 67: _t->ProcessHotkey((*reinterpret_cast<std::add_pointer_t<obs_hotkey_id>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 68: _t->ResetStatsHotkey(); break;
        case 69: _t->SetImageIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 70: _t->SetColorIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 71: _t->SetSlideshowIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 72: _t->SetAudioInputIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 73: _t->SetAudioOutputIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 74: _t->SetDesktopCapIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 75: _t->SetWindowCapIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 76: _t->SetGameCapIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 77: _t->SetCameraIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 78: _t->SetTextIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 79: _t->SetMediaIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 80: _t->SetBrowserIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 81: _t->SetGroupIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 82: _t->SetSceneIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 83: _t->SetDefaultIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 84: _t->SetAudioProcessOutputIcon((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 85: _t->on_actionMainUndo_triggered(); break;
        case 86: _t->on_actionMainRedo_triggered(); break;
        case 87: _t->ToggleAlwaysOnTop(); break;
        case 88: _t->SetShowing((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 89: _t->ToggleShowHide(); break;
        case 90: _t->on_actionShowAbout_triggered(); break;
        case 91: _t->on_actionFullscreenInterface_triggered(); break;
        case 92: _t->on_actionRemux_triggered(); break;
        case 93: _t->on_action_Settings_triggered(); break;
        case 94: _t->on_actionShowMacPermissions_triggered(); break;
        case 95: _t->on_actionAdvAudioProperties_triggered(); break;
        case 96: _t->on_actionShowLogs_triggered(); break;
        case 97: _t->on_actionUploadCurrentLog_triggered(); break;
        case 98: _t->on_actionUploadLastLog_triggered(); break;
        case 99: _t->on_actionViewCurrentLog_triggered(); break;
        case 100: _t->on_actionCheckForUpdates_triggered(); break;
        case 101: _t->on_actionRepair_triggered(); break;
        case 102: _t->on_actionShowWhatsNew_triggered(); break;
        case 103: _t->on_actionRestartSafe_triggered(); break;
        case 104: _t->on_actionShowCrashLogs_triggered(); break;
        case 105: _t->on_actionUploadLastCrashLog_triggered(); break;
        case 106: _t->on_OBSBasic_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 107: _t->on_actionHelpPortal_triggered(); break;
        case 108: _t->on_actionWebsite_triggered(); break;
        case 109: _t->on_actionDiscord_triggered(); break;
        case 110: _t->on_actionReleaseNotes_triggered(); break;
        case 111: _t->on_actionShowSettingsFolder_triggered(); break;
        case 112: _t->on_actionShowProfileFolder_triggered(); break;
        case 113: _t->on_actionAlwaysOnTop_triggered(); break;
        case 114: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 115: _t->on_toggleStatusBar_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 116: _t->on_autoConfigure_triggered(); break;
        case 117: _t->on_stats_triggered(); break;
        case 118: _t->on_idianPlayground_triggered(); break;
        case 119: _t->on_resetUI_triggered(); break;
        case 120: _t->logUploadFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<OBS::LogFileType>>(_a[3]))); break;
        case 121: _t->updateCheckFinished(); break;
        case 122: _t->ResizeOutputSizeOfSource(); break;
        case 123: _t->on_actionOpenPluginManager_triggered(); break;
        case 124: _t->PreviewScalingModeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 125: _t->ColorChange(); break;
        case 126: _t->EnablePreview(); break;
        case 127: _t->DisablePreview(); break;
        case 128: _t->setPreviewScalingWindow(); break;
        case 129: _t->setPreviewScalingCanvas(); break;
        case 130: _t->setPreviewScalingOutput(); break;
        case 131: _t->on_actionLockPreview_triggered(); break;
        case 132: _t->on_scalingMenu_aboutToShow(); break;
        case 133: _t->on_preview_customContextMenuRequested(); break;
        case 134: _t->on_previewDisabledWidget_customContextMenuRequested(); break;
        case 135: _t->EnablePreviewDisplay((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 136: _t->TogglePreview(); break;
        case 137: _t->on_actionNewProfile_triggered(); break;
        case 138: _t->on_actionDupProfile_triggered(); break;
        case 139: _t->on_actionRenameProfile_triggered(); break;
        case 140: _t->on_actionRemoveProfile_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 141: _t->on_actionRemoveProfile_triggered(); break;
        case 142: _t->on_actionImportProfile_triggered(); break;
        case 143: _t->on_actionExportProfile_triggered(); break;
        case 144: { bool _r = _t->CreateNewProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 145: { bool _r = _t->CreateDuplicateProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 146: _t->DeleteProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 147: _t->OpenSavedProjector((*reinterpret_cast<std::add_pointer_t<SavedProjectorInfo*>>(_a[1]))); break;
        case 148: _t->OpenPreviewProjector(); break;
        case 149: _t->OpenSourceProjector(); break;
        case 150: _t->OpenMultiviewProjector(); break;
        case 151: _t->OpenSceneProjector(); break;
        case 152: _t->OpenPreviewWindow(); break;
        case 153: _t->OpenSourceWindow(); break;
        case 154: _t->OpenSceneWindow(); break;
        case 155: _t->openMultiviewWindow(); break;
        case 156: _t->on_actionShow_Recordings_triggered(); break;
        case 157: _t->RecordActionTriggered(); break;
        case 158: _t->RecordPauseToggled(); break;
        case 159: _t->StartRecording(); break;
        case 160: _t->StopRecording(); break;
        case 161: _t->RecordingStart(); break;
        case 162: _t->RecordStopping(); break;
        case 163: _t->RecordingStop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 164: _t->RecordingFileChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 165: _t->PauseRecording(); break;
        case 166: _t->UnpauseRecording(); break;
        case 167: _t->CheckDiskSpaceRemaining(); break;
        case 168: { bool _r = _t->RecordingActive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 169: _t->ShowReplayBufferPauseWarning(); break;
        case 170: _t->StartReplayBuffer(); break;
        case 171: _t->StopReplayBuffer(); break;
        case 172: _t->ReplayBufferStart(); break;
        case 173: _t->ReplayBufferSave(); break;
        case 174: _t->ReplayBufferSaved(); break;
        case 175: _t->ReplayBufferStopping(); break;
        case 176: _t->ReplayBufferStop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 177: { bool _r = _t->ReplayBufferActive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 178: _t->ReplayBufferActionTriggered(); break;
        case 179: _t->DeferSaveBegin(); break;
        case 180: _t->DeferSaveEnd(); break;
        case 181: _t->SaveProjectDeferred(); break;
        case 182: _t->SaveProject(); break;
        case 183: { bool _r = _t->CreateNewSceneCollection((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 184: _t->on_actionShowMissingFiles_triggered(); break;
        case 185: _t->on_actionNewSceneCollection_triggered(); break;
        case 186: _t->on_actionDupSceneCollection_triggered(); break;
        case 187: _t->on_actionRenameSceneCollection_triggered(); break;
        case 188: _t->on_actionRemoveSceneCollection_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 189: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 190: _t->on_actionImportSceneCollection_triggered(); break;
        case 191: _t->on_actionExportSceneCollection_triggered(); break;
        case 192: _t->on_actionRemigrateSceneCollection_triggered(); break;
        case 193: { bool _r = _t->RemoveCanvas((*reinterpret_cast<std::add_pointer_t<OBSCanvas>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 194: _t->RenameSources((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 195: _t->ActivateAudioSource((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 196: _t->DeactivateAudioSource((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 197: _t->ReorderSources((*reinterpret_cast<std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 198: _t->RefreshSources((*reinterpret_cast<std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 199: _t->SetDeinterlacingMode(); break;
        case 200: _t->SetDeinterlacingOrder(); break;
        case 201: _t->SetScaleFilter(); break;
        case 202: _t->SetBlendingMethod(); break;
        case 203: _t->SetBlendingMode(); break;
        case 204: _t->MixerRenameSource(); break;
        case 205: _t->on_actionRotate90CW_triggered(); break;
        case 206: _t->on_actionRotate90CCW_triggered(); break;
        case 207: _t->on_actionRotate180_triggered(); break;
        case 208: _t->on_actionFlipHorizontal_triggered(); break;
        case 209: _t->on_actionFlipVertical_triggered(); break;
        case 210: _t->on_actionFitToScreen_triggered(); break;
        case 211: _t->on_actionStretchToScreen_triggered(); break;
        case 212: _t->on_actionCenterToScreen_triggered(); break;
        case 213: _t->on_actionVerticalCenter_triggered(); break;
        case 214: _t->on_actionHorizontalCenter_triggered(); break;
        case 215: _t->on_actionEditTransform_triggered(); break;
        case 216: _t->on_sources_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 217: _t->on_sourcePropertiesButton_clicked(); break;
        case 218: _t->on_sourceFiltersButton_clicked(); break;
        case 219: _t->on_sourceInteractButton_clicked(); break;
        case 220: _t->on_actionAddSource_triggered(); break;
        case 221: _t->on_actionRemoveSource_triggered(); break;
        case 222: _t->on_actionInteract_triggered(); break;
        case 223: _t->on_actionSourceProperties_triggered(); break;
        case 224: _t->on_actionSourceUp_triggered(); break;
        case 225: _t->on_actionSourceDown_triggered(); break;
        case 226: _t->on_actionMoveUp_triggered(); break;
        case 227: _t->on_actionMoveDown_triggered(); break;
        case 228: _t->on_actionMoveToTop_triggered(); break;
        case 229: _t->on_actionMoveToBottom_triggered(); break;
        case 230: _t->on_toggleSourceIcons_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 231: _t->OpenFilters((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 232: _t->OpenFilters(); break;
        case 233: _t->OpenProperties((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 234: _t->OpenProperties(); break;
        case 235: _t->OpenInteraction((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 236: _t->OpenInteraction(); break;
        case 237: _t->OpenEditTransform((*reinterpret_cast<std::add_pointer_t<OBSSceneItem>>(_a[1]))); break;
        case 238: _t->OpenEditTransform(); break;
        case 239: _t->on_actionResetTransform_triggered(); break;
        case 240: _t->AddSceneItem((*reinterpret_cast<std::add_pointer_t<OBSSceneItem>>(_a[1]))); break;
        case 241: _t->AddScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 242: _t->RemoveScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 243: _t->DuplicateSelectedScene(); break;
        case 244: _t->RemoveSelectedScene(); break;
        case 245: { SourceTreeItem* _r = _t->GetItemWidgetFromSceneItem((*reinterpret_cast<std::add_pointer_t<obs_sceneitem_t*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SourceTreeItem**>(_a[0]) = std::move(_r); }  break;
        case 246: _t->on_actionSceneFilters_triggered(); break;
        case 247: _t->on_scenes_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 248: _t->on_scenes_customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 249: _t->GridActionClicked(); break;
        case 250: _t->on_actionSceneListMode_triggered(); break;
        case 251: _t->on_actionSceneGridMode_triggered(); break;
        case 252: _t->on_actionAddScene_triggered(); break;
        case 253: _t->on_actionRemoveScene_triggered(); break;
        case 254: _t->on_actionSceneUp_triggered(); break;
        case 255: _t->on_actionSceneDown_triggered(); break;
        case 256: _t->on_scenes_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 257: _t->MoveSceneToTop(); break;
        case 258: _t->MoveSceneToBottom(); break;
        case 259: _t->EditSceneName(); break;
        case 260: _t->EditSceneItemName(); break;
        case 261: _t->SceneNameEdited((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 262: _t->OpenSceneFilters(); break;
        case 263: _t->Screenshot((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 264: _t->Screenshot(); break;
        case 265: _t->ScreenshotSelectedSource(); break;
        case 266: _t->ScreenshotProgram(); break;
        case 267: _t->ScreenshotScene(); break;
        case 268: _t->DisplayStreamStartError(); break;
        case 269: _t->StartStreaming(); break;
        case 270: _t->StopStreaming(); break;
        case 271: _t->ForceStopStreaming(); break;
        case 272: _t->StreamDelayStarting((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 273: _t->StreamDelayStopping((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 274: _t->StreamingStart(); break;
        case 275: _t->StreamStopping(); break;
        case 276: _t->StreamingStop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 277: { bool _r = _t->StreamingActive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 278: _t->StreamActionTriggered(); break;
        case 279: _t->EnablePreviewProgram(); break;
        case 280: _t->DisablePreviewProgram(); break;
        case 281: _t->ProgramViewContextMenuRequested(); break;
        case 282: _t->OpenStudioProgramProjector(); break;
        case 283: _t->OpenStudioProgramWindow(); break;
        case 284: _t->TogglePreviewProgramMode(); break;
        case 285: _t->IconActivated((*reinterpret_cast<std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 286: _t->SetCurrentScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 287: _t->SetCurrentScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 288: _t->SetTransition((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 289: _t->OverrideTransition((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 290: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSScene>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 291: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 292: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[6]))); break;
        case 293: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5]))); break;
        case 294: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 295: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 296: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 297: _t->TransitionToScene((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 298: _t->SetCurrentTransition((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 299: _t->SetTransitionDuration((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 300: _t->AddTransition((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 301: _t->RenameTransition((*reinterpret_cast<std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 302: _t->TransitionClicked(); break;
        case 303: _t->TransitionStopped(); break;
        case 304: _t->TransitionFullyStopped(); break;
        case 305: _t->TriggerQuickTransition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 306: _t->TBarChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 307: _t->TBarReleased(); break;
        case 308: _t->on_transitionAdd_clicked(); break;
        case 309: _t->on_transitionRemove_clicked(); break;
        case 310: _t->on_transitionProps_clicked(); break;
        case 311: _t->ShowTransitionProperties(); break;
        case 312: _t->HideTransitionProperties(); break;
        case 313: _t->StartVirtualCam(); break;
        case 314: _t->StopVirtualCam(); break;
        case 315: _t->OnVirtualCamStart(); break;
        case 316: _t->OnVirtualCamStop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 317: { bool _r = _t->VirtualCamActive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 318: _t->UpdateVirtualCamConfig((*reinterpret_cast<std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 319: _t->RestartVirtualCam((*reinterpret_cast<std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 320: _t->RestartingVirtualCam(); break;
        case 321: _t->VirtualCamActionTriggered(); break;
        case 322: _t->OpenVirtualCamConfig(); break;
        case 323: _t->HideAudioControl(); break;
        case 324: _t->UnhideAllAudioControls(); break;
        case 325: _t->ToggleHideMixer(); break;
        case 326: _t->on_vMixerScrollArea_customContextMenuRequested(); break;
        case 327: _t->on_hMixerScrollArea_customContextMenuRequested(); break;
        case 328: _t->LockVolumeControl((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 329: _t->on_actionMixerToolbarAdvAudio_triggered(); break;
        case 330: _t->on_actionMixerToolbarMenu_triggered(); break;
        case 331: _t->StackedMixerAreaContextMenuRequested(); break;
        case 332: _t->SetupBroadcast(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 194:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 195:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 196:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 197:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSScene >(); break;
            }
            break;
        case 198:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSScene >(); break;
            }
            break;
        case 231:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 233:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 235:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 237:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSceneItem >(); break;
            }
            break;
        case 240:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSceneItem >(); break;
            }
            break;
        case 241:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 242:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 261:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 263:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 286:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 287:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 288:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 289:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 290:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSScene >(); break;
            }
            break;
        case 291:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSScene >(); break;
            }
            break;
        case 292:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 293:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 294:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 295:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 296:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 297:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        case 301:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OBSSource >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::mainWindowClosed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(uint32_t , uint32_t )>(_a, &OBSBasic::CanvasResized, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(uint32_t , uint32_t )>(_a, &OBSBasic::OutputResized, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::PreviewZoomIn, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::PreviewZoomOut, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::PreviewResetZoom, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::RecordingStarted, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::RecordingPaused, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::RecordingUnpaused, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::RecordingStopping, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::RecordingStopped, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::ReplayBufEnabled, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::ReplayBufStarted, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::ReplayBufStopping, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::ReplayBufStopped, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::StreamingPreparing, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::StreamingStarting, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::StreamingStarted, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::StreamingStopping, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::StreamingStopped, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::PreviewProgramModeChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(const QString & , const QString & )>(_a, &OBSBasic::TransitionAdded, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(const QString & , const QString & )>(_a, &OBSBasic::TransitionRenamed, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(const QString & )>(_a, &OBSBasic::TransitionRemoved, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::TransitionsCleared, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(const QString & )>(_a, &OBSBasic::CurrentTransitionChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(const int & )>(_a, &OBSBasic::TransitionDurationChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::VirtualCamEnabled, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::VirtualCamStarted, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::VirtualCamStopped, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::BroadcastFlowEnabled, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::BroadcastStreamReady, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)()>(_a, &OBSBasic::BroadcastStreamActive, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (OBSBasic::*)(bool )>(_a, &OBSBasic::BroadcastStreamStarted, 36))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QIcon*>(_v) = _t->GetImageIcon(); break;
        case 1: *reinterpret_cast<QIcon*>(_v) = _t->GetColorIcon(); break;
        case 2: *reinterpret_cast<QIcon*>(_v) = _t->GetSlideshowIcon(); break;
        case 3: *reinterpret_cast<QIcon*>(_v) = _t->GetAudioInputIcon(); break;
        case 4: *reinterpret_cast<QIcon*>(_v) = _t->GetAudioOutputIcon(); break;
        case 5: *reinterpret_cast<QIcon*>(_v) = _t->GetDesktopCapIcon(); break;
        case 6: *reinterpret_cast<QIcon*>(_v) = _t->GetWindowCapIcon(); break;
        case 7: *reinterpret_cast<QIcon*>(_v) = _t->GetGameCapIcon(); break;
        case 8: *reinterpret_cast<QIcon*>(_v) = _t->GetCameraIcon(); break;
        case 9: *reinterpret_cast<QIcon*>(_v) = _t->GetTextIcon(); break;
        case 10: *reinterpret_cast<QIcon*>(_v) = _t->GetMediaIcon(); break;
        case 11: *reinterpret_cast<QIcon*>(_v) = _t->GetBrowserIcon(); break;
        case 12: *reinterpret_cast<QIcon*>(_v) = _t->GetGroupIcon(); break;
        case 13: *reinterpret_cast<QIcon*>(_v) = _t->GetSceneIcon(); break;
        case 14: *reinterpret_cast<QIcon*>(_v) = _t->GetDefaultIcon(); break;
        case 15: *reinterpret_cast<QIcon*>(_v) = _t->GetAudioProcessOutputIcon(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetImageIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 1: _t->SetColorIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 2: _t->SetSlideshowIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 3: _t->SetAudioInputIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 4: _t->SetAudioOutputIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 5: _t->SetDesktopCapIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 6: _t->SetWindowCapIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 7: _t->SetGameCapIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 8: _t->SetCameraIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 9: _t->SetTextIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 10: _t->SetMediaIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 11: _t->SetBrowserIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 12: _t->SetGroupIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 13: _t->SetSceneIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 14: _t->SetDefaultIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 15: _t->SetAudioProcessOutputIcon(*reinterpret_cast<QIcon*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8OBSBasicE_t>.strings))
        return static_cast<void*>(this);
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 333)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 333;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 333)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 333;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OBSBasic::mainWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSBasic::CanvasResized(uint32_t _t1, uint32_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void OBSBasic::OutputResized(uint32_t _t1, uint32_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void OBSBasic::PreviewZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OBSBasic::PreviewZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OBSBasic::PreviewResetZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OBSBasic::RecordingStarted(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 8
void OBSBasic::RecordingPaused()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OBSBasic::RecordingUnpaused()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OBSBasic::RecordingStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OBSBasic::RecordingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OBSBasic::ReplayBufEnabled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void OBSBasic::ReplayBufStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void OBSBasic::ReplayBufStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void OBSBasic::ReplayBufStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void OBSBasic::StreamingPreparing()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void OBSBasic::StreamingStarting(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void OBSBasic::StreamingStarted(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 20
void OBSBasic::StreamingStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void OBSBasic::StreamingStopped(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 23
void OBSBasic::PreviewProgramModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void OBSBasic::TransitionAdded(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1, _t2);
}

// SIGNAL 25
void OBSBasic::TransitionRenamed(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2);
}

// SIGNAL 26
void OBSBasic::TransitionRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void OBSBasic::TransitionsCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void OBSBasic::CurrentTransitionChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void OBSBasic::TransitionDurationChanged(const int & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void OBSBasic::VirtualCamEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void OBSBasic::VirtualCamStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void OBSBasic::VirtualCamStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void OBSBasic::BroadcastFlowEnabled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 33, nullptr, _t1);
}

// SIGNAL 34
void OBSBasic::BroadcastStreamReady(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 34, nullptr, _t1);
}

// SIGNAL 35
void OBSBasic::BroadcastStreamActive()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void OBSBasic::BroadcastStreamStarted(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 36, nullptr, _t1);
}
QT_WARNING_POP
