#include "ConfigMapper.h"

namespace gf {

    Map<QString, unsigned int> ConfigMapper::mOctreeParamMapper =
            Map<QString, unsigned int>();
    Map<QString, unsigned char> ConfigMapper::mKeyPointMapper =
            Map<QString,unsigned char>();
    UniqueRef<DirMapper> ConfigMapper::mDirMapper =
            createUniqueRef<DirMapper>();

    ConfigMapper::ConfigMapper(UniqueRef<CmdParser> &parser) {
        mOctreeParamMapper["IndexInvalid"] = UINT_MAX;
        mOctreeParamMapper["IndexMax"] = UINT_MAX - 1;
        mDirMapper->configDirs();
    }

}