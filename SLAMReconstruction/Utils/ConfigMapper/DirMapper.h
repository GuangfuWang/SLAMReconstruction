#ifndef SPATIALRECONSTRUCTION_DIRMAPPER_H
#define SPATIALRECONSTRUCTION_DIRMAPPER_H

#include <QString>
#include <filesystem>
#include "Utils/Def/Def.h"

namespace gf {
    ///📗 this class is used for easily get directory information.
    class DirMapper {
    public:
        enum DirEnum {
            PROJECT_DIR = 0,
            RESOURCE_DIR = 1,
            CMAKE_MODULE_DIR = 2,
            CONFIGURATION_DIR = 3,
            DOC_DIR = 4,
            INSTALL_SCRIPT_DIR = 5,
            SOURCE_DIR = 6,
            TEST_DIR = 7,
            THIRD_PARTY_DIR = 8,
            SRC_DIR = 9,
            PROGRAM_DIR = 10,
            UTIL_DIR = 11,
            SHADER_DIR=12
        };

        void configDirs();

        Map<DirEnum, std::filesystem::path> mDirMaps;
    };

}


#endif //SPATIALRECONSTRUCTION_DIRMAPPER_H
