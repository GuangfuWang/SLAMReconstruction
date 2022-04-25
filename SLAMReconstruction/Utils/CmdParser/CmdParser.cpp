#include "CmdParser.h"

namespace gf{

CmdParser::CmdParser(const QApplication & app) {
    mParser = createUniqueRef<QCommandLineParser>();
    ///add mOptions here.

    mParser->addOptions(mOptions);
    mParser->process(app);
}

}
