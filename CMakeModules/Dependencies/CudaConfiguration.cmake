# checking nvidia gpu is available and cuda is available.
if (${CMAKE_HOST_WIN32})
    if (${ENABLE_CUDA})
        set(CUDA_PREFIX "")
        file(TO_CMAKE_PATH $ENV{CUDA_PATH} CUDA_PREFIX)
        set(CMAKE_CUDA_COMPILER "${CUDA_PREFIX}/bin/nvcc.exe")
        # for classic cmake findCUDA command can be used,
        # but in modern cmake it is deprecated.
        # Note that until 2022-02-14, Nvidia cuda is not compatible with Microsoft Visual Studio 2022,
        # If you use visual studio 2022 and encounter a cmake error: CUDA ARCHITECTURE IS EMPTY FOR TARGET "XXX",
        # simply switching to visual studio 2019 will fix it.
        # This might be fixed in future by nvidia when using visual studio 2022 :).
        enable_language(CUDA)
        include(CheckLanguage)
        check_language(CUDA)
        find_package(CUDA REQUIRED)
        if (${CUDA_FOUND})
            message(STATUS "Found Cuda (found version: ${CUDA_VERSION})")
        endif ()
        if(NOT DEFINED CMAKE_CUDA_STANDARD)
            set(CMAKE_CUDA_STANDARD 17)
            set(CMAKE_CUDA_STANDARD_REQUIRED ON)
        endif()
        # disable eigen computing.
        set(ENABLE_EIGEN OFF)
    endif ()
elseif(${CMAKE_HOST_UNIX})
    find_package(CUDA REQUIRED)
    if (${CUDA_FOUND})
        include_directories(${CUDA_INCLUDE_DIRS})
        link_directories($ENV{CUDA_PATH}/lib/x64)
    endif ()
endif ()

