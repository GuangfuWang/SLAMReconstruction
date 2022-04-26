#include <QApplication>
#include <Utils/Util>
#include <UI/WindowUI/MainWindow.h>
#include <UI/WindowUI/WindowUtil.h>

using namespace gf;

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    auto         parser       = createUniqueRef<CmdParser>(app);
    auto         configMapper = createUniqueRef<ConfigMapper>(parser);
    auto         window       = createUniqueRef<MainWindow>();
    app.setStyleSheet(QString("QLabel{ font-family:'Arial, 微软雅黑' }"));

    gf::SplashWindowStart(window);
    QApplication::exec();
    return 0;
}
