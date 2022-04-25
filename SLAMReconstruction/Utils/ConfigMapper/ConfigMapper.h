
#ifndef SPATIALRECONSTRUCTION_CPNFIGMAPPER_H
#define SPATIALRECONSTRUCTION_CPNFIGMAPPER_H

#include "Utils/Def/Def.h"
#include "Utils/CmdParser/CmdParser.h"
#include "Utils/Util"
#include "DirMapper.h"

namespace gf {

    using NodeSize = unsigned int;

    class ConfigMapper final {
    public:
        ConfigMapper(UniqueRef<CmdParser> &parser);

    public:
        static Map<QString, unsigned int> mOctreeParamMapper;
        static UniqueRef<ShortCutConfig> mShortCutsMapper;
        static Map<QString, unsigned char> mKeyPointMapper;
        static UniqueRef<DirMapper> mDirMapper;
    };
}
using ConfigMapper = gf::ConfigMapper;


#endif //SPATIALRECONSTRUCTION_CPNFIGMAPPER_H
