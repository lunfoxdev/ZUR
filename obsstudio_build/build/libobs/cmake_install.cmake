# Install script for directory: /home/lunfox/zemmy/ZUR/obsstudio/libobs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/lunfox/zemmy/ZUR/obsstudio/build/deps/libcaption/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.so.30")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30"
         OLD_RPATH "/home/lunfox/zemmy/ZUR/obsstudio/build/rundir/Release/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.so.0")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/obs/libobs" TYPE DIRECTORY FILES "/home/lunfox/zemmy/ZUR/obsstudio/libobs/data/" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.so.30")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30"
         OLD_RPATH "/home/lunfox/zemmy/ZUR/obsstudio/build/rundir/Release/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libobs.so.30")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs/callback" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/callback/calldata.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/callback/decl.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/callback/proc.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/callback/signal.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs/graphics" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/axisang.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/bounds.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/effect-parser.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/effect.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/graphics.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/image-file.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/input.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/math-defs.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/math-extra.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/matrix3.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/matrix4.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/plane.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/quat.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/shader-parser.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/srgb.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/vec2.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/vec3.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/vec4.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs/graphics/libnsgif" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/libobs/graphics/libnsgif/libnsgif.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs/media-io" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/audio-io.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/audio-math.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/audio-resampler.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/format-conversion.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/frame-rate.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/media-io-defs.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/media-remux.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/video-frame.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/video-io.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/media-io/video-scaler.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs/util" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/array-serializer.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/base.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/bitstream.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/bmem.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/c99defs.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/cf-lexer.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/cf-parser.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/config-file.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/crc32.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/darray.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/deque.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/dstr.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/dstr.hpp"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/file-serializer.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/lexer.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/pipe.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/platform.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/profiler.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/profiler.hpp"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/serializer.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/sse-intrin.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/task.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/text-lookup.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/threading-posix.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/threading.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/uthash.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/util.hpp"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/util_uint128.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/util/util_uint64.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-audio-controls.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-avc.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-config.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-data.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-defs.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-encoder.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-hotkey.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-hotkeys.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-interaction.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-missing-files.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-module.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-nal.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-nix-platform.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-output.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-properties.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-service.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-source.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs.h"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs.hpp"
    "/home/lunfox/zemmy/ZUR/obsstudio/libobs/obs-hevc.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/obs" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/config/obsconfig.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs/libobsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs/libobsTargets.cmake"
         "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/CMakeFiles/Export/9f1e5dae4fea34eb9cde2feedf7f37e8/libobsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs/libobsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs/libobsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/CMakeFiles/Export/9f1e5dae4fea34eb9cde2feedf7f37e8/libobsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/CMakeFiles/Export/9f1e5dae4fea34eb9cde2feedf7f37e8/libobsTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs" TYPE FILE FILES
    "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobsConfig.cmake"
    "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libobs/finders" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/cmake/finders/FindSIMDe.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  set(OBS_VERSION_CANONICAL 32.0.4)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  set(CMAKE_C_STANDARD 17)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  configure_file("/home/lunfox/zemmy/ZUR/obsstudio/libobs/cmake/linux/libobs.pc.in" "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.pc" @ONLY)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/libobs.pc")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lunfox/zemmy/ZUR/obsstudio/build/libobs/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
