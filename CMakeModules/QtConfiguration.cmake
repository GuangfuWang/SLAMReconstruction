#Set auto moc file, this is obligated.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/Resources/UI)

# find Qt dependencies.
# to use cuda in windows, you need MSVC compiler and MSVC compiled Qt.
# fixme: if you install a qt into custum dir, please change QT_HINTS macro.
if (${CMAKE_HOST_WIN32})
    if (${ENABLE_CUDA})
        set(QT_HINTS "D:/softwares/Qt_MSVC/5.15.2/msvc2019_64/lib/cmake/Qt5")
    else ()
        set(QT_HINTS "D:/softwares/Qt/5.14.2/mingw73_64/lib/cmake/Qt5")
    endif ()
    file(TO_CMAKE_PATH ${QT_HINTS} QT_HINTS)
    set(QT_ROOT_DIR "${QT_HINTS}"
            CACHE PATH "Qt Install Directory")
    set(Qt5_DIR "${QT_ROOT_DIR}")
    set(PATH_CONF NO_DEFAULT_PATH)
endif ()

find_package(Qt5 COMPONENTS Core Gui Widgets OpenGL MultimediaWidgets REQUIRED ${PATH_CONF})
set(Qt5_LIBS Qt5::Widgets Qt5::Core Qt5::Gui Qt5::OpenGL Qt5::MultimediaWidgets)
if (${Qt5_FOUND})
    message(STATUS "Found Qt5 (found version: ${Qt5_VERSION})")
else ()
    message(FATAL_ERROR "You must specify Qt5 installation directory for MACRO: QT_HINTS")
endif ()
