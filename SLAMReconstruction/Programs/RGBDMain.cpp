#include <QApplication>
#include <Utils/Util>
#include <UI/WindowUI/MainWindow.h>
#include <UI/WindowUI/WindowUtil.h>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    auto parser = gf::createUniqueRef<CmdParser>(app);
    auto configMapper = gf::createUniqueRef<ConfigMapper>(parser);
    auto window = gf::createUniqueRef<MainWindow>();
    app.setStyleSheet(QString("QLabel{ font-family:'Arial, 微软雅黑' }"));

    gf::SplashWindowStart(window);
    QApplication::exec();
    return 0;
}
