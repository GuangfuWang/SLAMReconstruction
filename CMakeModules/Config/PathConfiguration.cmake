
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(MODULE_SEARCH_PATH CMakeModules)
set(DOC_PATH Docs)
set(CONFIGURATION_PATH Configurations)
set(TEST_PATH Tests)
set(THIRD_PARTY_PATH ThirdParties)
set(SRC_PREFIX SLAMReconstruction/Src)
set(UTIL_PREFIX SLAMReconstruction/Utils)
set(PROGRAM_PREFIX SLAMReconstruction/Programs)
set(KERNEL_PREFIX SLAMReconstruction/CudaKernels)
include_directories("SLAMReconstruction/")


# fixme: if you use custum path for all your Dependencies, add that path here.
if (${CMAKE_HOST_WIN32})
    set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "D:/depend_libs")
endif ()
