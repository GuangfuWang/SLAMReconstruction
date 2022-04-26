
#ifndef SPATIALRECONSTRUCTION_WINDOWUTIL_H
#define SPATIALRECONSTRUCTION_WINDOWUTIL_H

#include <QSplashScreen>
#include <QLabel>
#include <QMovie>
#ifdef GF_LINUX
#include <unistd.h>
#define Sleep(x) sleep(x)
#endif
#include <Utils/Util>
#include <UI/WindowUI/MainWindow.h>

namespace gf {
static void SplashWindowStart(UniqueRef<MainWindow> &window) {
  QPixmap       pix(":SplashWindowIcon/splash.gif");
  QSplashScreen splash(pix);
  QLabel        splash_label(&splash);
  QMovie        splash_gif(":SplashWindowIcon/splash.gif");
  splash_label.setMovie(&splash_gif);
  splash_gif.start();
  splash.show();
  splash.setCursor(Qt::BlankCursor);//hidden cursor

  for (int i = 0; i < 400000; i += splash_gif.speed()) {
	QCoreApplication::processEvents();
	///@note here can be used to load config file, vocabularies, etc.
	Sleep(splash_gif.speed() / 1000);
  }
  window->show();
  splash.finish(window.get());
}


}

#endif //SPATIALRECONSTRUCTION_WINDOWUTIL_H
