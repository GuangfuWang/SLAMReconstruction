cmake_minimum_required(VERSION 3.21)
project(SLAMReconstruction LANGUAGES C CXX)

option(ENABLE_CUDA "Cuda computing for reconstruction" ON)
option(ENABLE_EIGEN "Eigen computing for reconstruction" OFF)
option(ENABLE_PYTHON "Python support for scripting" ON)
option(BUILD_TEST_CASES "Build tests" OFF)
option(BUILD_DOC "Doc generation" ON)
option(BUILD_UTIL "Build utilities" ON)
option(BUILD_SHARED_LIB "Build all libs to shared lib" OFF)

include(CMakeModules/PathConfiguration.cmake)

include(${MODULE_SEARCH_PATH}/SkeletonModule.cmake)
include(${MODULE_SEARCH_PATH}/OpenMPConfiguration.cmake)
include(${MODULE_SEARCH_PATH}/CudaConfiguration.cmake)
include(${MODULE_SEARCH_PATH}/Python3Configuration.cmake)
include(${MODULE_SEARCH_PATH}/GeneratingTarget.cmake)
include(${MODULE_SEARCH_PATH}/LinkingTarget.cmake)
