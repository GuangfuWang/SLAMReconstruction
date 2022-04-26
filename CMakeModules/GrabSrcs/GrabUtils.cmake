file(GLOB_RECURSE CmdParserHeader ${UTIL_PREFIX}/CmdParser/*.h ${UTIL_PREFIX}/CmdParser/*.hpp)
file(GLOB_RECURSE CmdParserSrc ${UTIL_PREFIX}/CmdParser/*.*)

file(GLOB_RECURSE DefHeader ${UTIL_PREFIX}/Def/*.h ${UTIL_PREFIX}/Def/*.hpp)
file(GLOB_RECURSE DefSrc ${UTIL_PREFIX}/Def/*.*)

file(GLOB_RECURSE LoggerHeader ${UTIL_PREFIX}/Logger/*.h ${UTIL_PREFIX}/Logger/*.hpp)
file(GLOB_RECURSE LoggerSrc ${UTIL_PREFIX}/Logger/*.*)

file(GLOB_RECURSE SynchronizeHeader ${UTIL_PREFIX}/Synchronizer/*.h ${UTIL_PREFIX}/Synchronizer/*.hpp)
file(GLOB_RECURSE SynchronizerSrc ${UTIL_PREFIX}/Synchronizer/*.*)

file(GLOB_RECURSE MathHeader ${UTIL_PREFIX}/Math/*.h ${UTIL_PREFIX}/Math/*.hpp)
file(GLOB_RECURSE MathSrc ${UTIL_PREFIX}/Math/*.*)

file(GLOB_RECURSE ConfigMapperHeader ${UTIL_PREFIX}/ConfigMapper/*.h ${UTIL_PREFIX}/ConfigMapper/*.hpp)
file(GLOB_RECURSE ConfigMapperSrc ${UTIL_PREFIX}/ConfigMapper/*.*)


set(UTIL_SRC
        ${CmdParserHeader} ${CmdParserSrc}
        ${DefHeader} ${DefSrc}
        ${LoggerHeader} ${LoggerSrc}
        ${SynchronizeHeader} ${SynchronizerSrc}
        ${MathHeader} ${MathSrc}
        ${ConfigMapperHeader} ${ConfigMapperSrc}
        ${UTIL_PREFIX}/Util
        ${UTIL_PREFIX}/StringHelper/StringHelper.h)