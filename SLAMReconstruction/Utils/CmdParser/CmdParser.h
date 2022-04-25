#ifndef SPATIALRECONSTRUCTION_CMDPARSER_H
#define SPATIALRECONSTRUCTION_CMDPARSER_H

#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QApplication>
#include "../Def/Def.h"

namespace gf {
    class CmdParser {
    public:
        CmdParser(const QApplication &app);

    private:
        UniqueRef<QCommandLineParser> mParser;
        QList<QCommandLineOption>     mOptions;
    };
}

#endif //SPATIALRECONSTRUCTION_CMDPARSER_H
