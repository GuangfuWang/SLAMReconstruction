if (${CMAKE_HOST_UNIX})
# for ubuntu 20.04 and assimp version 5.0, you might encounter a CMP0012 warning,
# to disable this warning,
# you must edit /usr/lib/x86_64-linux-gnu/cmake/assimp-5.0/assimpTargets.cmake
# by adding before line 53 statements:
# if(POLICY CMP0012) cmake_policy(SET CMP0012 NEW) endif()
    find_package(Assimp REQUIRED)
    if (${Assimp_FOUND})
        message(STATUS "Found Assimp (found version: ${Assimp_VERSION})")
    endif ()
elseif (${CMAKE_HOST_WIN32})

else ()

endif ()