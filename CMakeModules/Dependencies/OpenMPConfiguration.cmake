find_package(OpenMP REQUIRED)

if (OpenMP_FOUND)
    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif ()