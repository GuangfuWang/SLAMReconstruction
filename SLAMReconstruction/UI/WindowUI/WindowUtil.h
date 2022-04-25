
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

  for (int i = 0; i < 40000000; i += splash_gif.speed()) {
	QCoreApplication::processEvents();
	///@note here can be used to load config file, vocabularies, etc.
	Sleep(splash_gif.speed() / 1000);
  }
  window->show();
  splash.finish(window.get());
}

///here define all shortcut enums.
enum ShortCutEnums {
  ///part one: files and project operation, 8bit.
  FILE_OPEN        = 0x00000000,
  FILE_OPEN_RECENT = 0x00000001,
  ///part two: 3d settings, 8bit.
  CAMERA_FIXED     = 0x00000100,
  CAMERA_FLYING    = 0x00000200,
  SCENE_ROTATE     = 0x00000300,
  SCENE_ZOOM       = 0x00000400,
  SCENE_PAN        = 0x00000500,
};

}

#endif //SPATIALRECONSTRUCTION_WINDOWUTIL_H
