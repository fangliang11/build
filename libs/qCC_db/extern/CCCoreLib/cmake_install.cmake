# Install script for directory: E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/CloudCompareProjects")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/exports/CCCoreLibExport.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/Debug/CCCoreLibd.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/Release/CCCoreLib.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/MinSizeRel/CCCoreLib.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/RelWithDebInfo/CCCoreLib.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib/CCCoreLibTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib/CCCoreLibTargets.cmake"
         "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib/CCCoreLibTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib/CCCoreLibTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CMakeFiles/Export/lib/cmake/CCCoreLib/CCCoreLibTargets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CCCoreLib" TYPE FILE FILES
    "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CCCoreLibConfigVersion.cmake"
    "E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/CCCoreLibConfig.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/include/cmake_install.cmake")
  include("E:/Projects/DownloadProjects/CloudCompare-master/build/libs/qCC_db/extern/CCCoreLib/src/cmake_install.cmake")

endif()

