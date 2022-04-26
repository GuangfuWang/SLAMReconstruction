find_package(OpenCV REQUIRED)

if (OpenCV_FOUND)
    message(STATUS "Found OpenCV (found version: ${OpenCV_VERSION})")
    include_directories(${OpenCV_INCLUDE_DIRS})
    set(CV_LIB ${OpenCV_LIBS})
endif ()