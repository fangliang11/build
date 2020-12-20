# Install script for directory: E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CCCoreLib" TYPE FILE FILES
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/AutoSegmentationTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/BoundingBox.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCConst.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCCoreLib.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCGeom.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCMiscTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCPlatform.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCShareable.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCToolbox.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CCTypes.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ChamferDistanceTransform.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/CloudSamplingTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ConjugateGradient.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Delaunay2dMesh.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/DgmOctree.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/DgmOctreeReferenceCloud.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/DistanceComputationTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ErrorFunction.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/FastMarching.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/FastMarchingForPropagation.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Garbage.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericCloud.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericDistribution.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedCloud.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedCloudPersist.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedMesh.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericMesh.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericOctree.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericProgressCallback.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GenericTriangle.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/GeometricalAnalysisTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Grid3D.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Jacobi.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/KdTree.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/LocalModel.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ManualSegmentationTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/MathTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/MeshSamplingTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Neighbourhood.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/NormalDistribution.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ParallelSort.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/PointCloud.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/PointCloudTpl.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/PointProjectionTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/Polyline.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/RayAndBox.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ReferenceCloud.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/RegistrationTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/SaitoSquaredDistanceTransform.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ScalarField.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/ScalarFieldTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/SimpleMesh.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/SimpleTriangle.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/SquareMatrix.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/StatisticalTestingTools.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/TrueKdTree.h"
    "E:/Projects/DownloadProjects/CloudCompare-master/libs/qCC_db/extern/CCCoreLib/include/WeibullDistribution.h"
    )
endif()

