
#ifndef SPATIALRECONSTRUCTION_STRINGHELPER_H
#define SPATIALRECONSTRUCTION_STRINGHELPER_H
#include <QString>
#include <filesystem>

namespace gf{
    static QString fromStdPath(const std::filesystem::path& p){
        return QString::fromUtf8(p.string().c_str());
    }
}

#endif //SPATIALRECONSTRUCTION_STRINGHELPER_H
