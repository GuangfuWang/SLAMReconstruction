file(GLOB_RECURSE CmdParserHeader ${UTIL_PREFIX}/CmdParser/*.h ${UTIL_PREFIX}/CmdParser/*.hpp)
file(GLOB_RECURSE CmdParserSrc ${UTIL_PREFIX}/CmdParser/*.cpp ${UTIL_PREFIX}/CmdParser/*.cxx ${UTIL_PREFIX}/CmdParser/*.c)

file(GLOB_RECURSE ConfigHelperHeader ${UTIL_PREFIX}/ConfigHelper/*.h ${UTIL_PREFIX}/ConfigHelper/*.hpp)
file(GLOB_RECURSE ConfigHelperSrc ${UTIL_PREFIX}/ConfigHelper/*.cpp ${UTIL_PREFIX}/ConfigHelper/*.cxx ${UTIL_PREFIX}/ConfigHelper/*.c)

file(GLOB_RECURSE DefHeader ${UTIL_PREFIX}/Def/*.h ${UTIL_PREFIX}/Def/*.hpp)
file(GLOB_RECURSE DefSrc ${UTIL_PREFIX}/Def/*.cpp ${UTIL_PREFIX}/Def/*.cxx ${UTIL_PREFIX}/Def/*.c)

file(GLOB_RECURSE LoggerHeader ${UTIL_PREFIX}/Logger/*.h ${UTIL_PREFIX}/Logger/*.hpp)
file(GLOB_RECURSE LoggerSrc ${UTIL_PREFIX}/Logger/*.cpp ${UTIL_PREFIX}/Logger/*.cxx ${UTIL_PREFIX}/Logger/*.c)

file(GLOB_RECURSE SynchronizeHeader ${UTIL_PREFIX}/Synchronizer/*.h ${UTIL_PREFIX}/Synchronizer/*.hpp)
file(GLOB_RECURSE SynchronizerSrc ${UTIL_PREFIX}/Synchronizer/*.cpp ${UTIL_PREFIX}/Synchronizer/*.cxx ${UTIL_PREFIX}/Synchronizer/*.c)

file(GLOB_RECURSE MathHeader ${UTIL_PREFIX}/Math/*.h ${UTIL_PREFIX}/Math/*.hpp)
file(GLOB_RECURSE MathSrc ${UTIL_PREFIX}/Math/*.cpp ${UTIL_PREFIX}/Math/*.cxx ${UTIL_PREFIX}/Math/*.c)

file(GLOB_RECURSE ConfigMapperHeader ${UTIL_PREFIX}/ConfigMapper/*.h ${UTIL_PREFIX}/ConfigMapper/*.hpp)
file(GLOB_RECURSE ConfigMapperSrc ${UTIL_PREFIX}/ConfigMapper/*.cpp ${UTIL_PREFIX}/ConfigMapper/*.cxx ${UTIL_PREFIX}/ConfigMapper/*.c)


set(UTIL_SRC
        ${CmdParserHeader} ${CmdParserSrc}
        ${ConfigHelperHeader} ${ConfigHelperSrc}
        ${DefHeader} ${DefSrc}
        ${LoggerHeader} ${LoggerSrc}
        ${SynchronizeHeader} ${SynchronizerSrc}
        ${MathHeader} ${MathSrc}
        ${ConfigMapperHeader} ${ConfigMapperSrc}
        ${UTIL_PREFIX}/Util
        ${UTIL_PREFIX}/StringHelper/StringHelper.h)