find_package(Python3 COMPONENTS Interpreter Development)
#find_package(Python3 COMPONENTS Numpy)

if (NOT ${Python3_FOUND})
    message(WARNING "Cannot find python3...")
endif ()
