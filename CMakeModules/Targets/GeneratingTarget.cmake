include(${MODULE_SEARCH_PATH}/GrabSrcs/GrabUtils.cmake)
include(${MODULE_SEARCH_PATH}/GrabSrcs/GrabSLAMs.cmake)
include(${MODULE_SEARCH_PATH}/GrabSrcs/GrabUI.cmake)
include(${MODULE_SEARCH_PATH}/GrabSrcs/GrabPrograms.cmake)
include(${MODULE_SEARCH_PATH}/GrabSrcs/GrabResources.cmake)

if (${BUILD_UTIL})
    message(STATUS "Building utility lib")
    if (${BUILD_SHARED_LIB})
        set(LibFlag SHARED)
    else ()
        set(LibFlag STATIC )

    endif ()
    add_library(${UtilLibName} ${LibFlag} ${UTIL_SRC})
endif ()

add_executable(${MainTargetName} ${PLAT_FLAG}
        ${Main_SRC} ${UTIL_SRC} ${UI_SRC} ${RESOURCE_SRC} ${SLAM_SRC})

if (ENABLE_CUDA)
    set_target_properties(${MainTargetName} PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
endif ()
