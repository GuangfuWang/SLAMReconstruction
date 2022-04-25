# temporal setting for debugging.
set(CMAKE_BUILD_TYPE "Debug")

set(ReleaseSwitch 0)

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug" AND "${ReleaseSwitch}")
    set(CMAKE_BUILD_TYPE "Release")
    message(STATUS "Release mode: ON")
endif ()