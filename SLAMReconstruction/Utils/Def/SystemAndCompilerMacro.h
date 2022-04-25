
#ifndef SPATIALRECONSTRUCTION_SYSTEMANDCOMPILERMACRO_H
#define SPATIALRECONSTRUCTION_SYSTEMANDCOMPILERMACRO_H


namespace gf{
#define WIN32BIT _WIN32
#define WIN64BIT _WIN64
#define GNU_COMPILER __GNU__
#define MINGW __MINGW32__


#ifdef GF_WINDOWS
    #define GF_EXPORT _dllexport
#define GF_IMPORT _dllimport
///todo: add more platform dependent macro here.
#elif defined GF_LINUX
#define GF_EXPORT
#define GF_IMPORT
#elif defined GF_APPLE
    #define GF_EXPORT
#define GF_IMPORT
#else
#error "You are running unsupported operating system..."
#endif
}

#endif //SPATIALRECONSTRUCTION_SYSTEMANDCOMPILERMACRO_H
