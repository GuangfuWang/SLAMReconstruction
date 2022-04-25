#include "DirMapper.h"
#include <filesystem>

using namespace std::filesystem;
namespace gf {
    void DirMapper::configDirs() {
        auto current = std::filesystem::current_path();
        current = current.parent_path();
        mDirMaps[PROJECT_DIR] = current;
        current /= "Resources";
        mDirMaps[RESOURCE_DIR] = current;
        current /= "Shaders";
        mDirMaps[SHADER_DIR] = current;
        current = current.parent_path().parent_path();
        current /= "CMakeModules";
        mDirMaps[CMAKE_MODULE_DIR] = current;
        current = current.parent_path();
        current /= "Docs";
        mDirMaps[DOC_DIR] = current;
        current = current.parent_path();
        current /= "InstallationScripts";
        mDirMaps[INSTALL_SCRIPT_DIR] = current;
        current = current.parent_path();
        current /= "Configurations";
        mDirMaps[CONFIGURATION_DIR] = current;
        current = current.parent_path();
        current /= "Tests";
        mDirMaps[TEST_DIR] = current;
        current = current.parent_path();
        current /= "ThirdParties";
        mDirMaps[THIRD_PARTY_DIR] = current;
        current = current.parent_path();
        current /= "SLAMReconstruction";
        mDirMaps[SOURCE_DIR] = current;
        current /= "Programs";
        mDirMaps[PROGRAM_DIR] = current;
        current = current.parent_path();
        current /= "Src";
        mDirMaps[SRC_DIR] = current;
        current = current.parent_path();
        current /= "Utils";
        mDirMaps[UTIL_DIR] = current;
    }
}