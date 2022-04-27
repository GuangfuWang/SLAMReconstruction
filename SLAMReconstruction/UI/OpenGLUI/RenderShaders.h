#ifndef SLAMRECONSTRUCTION_RENDERSHADERS_H
#define SLAMRECONSTRUCTION_RENDERSHADERS_H

#include <QOpenGLShader>
#include <QVector>
#include <Utils/Util>

namespace gf {
    class RenderShaders {
    public:
        enum ShaderEnum {
            CColorONorm   = 0,
            CColorWNorm   = 2,
            UniColorONorm = 4,
            UniColorWNorm = 6,
            UVONorm       = 8,
            UVWNorm       = 10,
        };
    public:
        RenderShaders();

        virtual ~RenderShaders() {
            for (int i = 0; i < mShaders.size(); ++i) {
                if (mShaders[i]) {
                    delete mShaders[i];
                    mShaders[i] = nullptr;
                }
            }
            mShaders.clear();
        }

        void compileAllShaders();

        void compileShaders(const unsigned int& typeEnum);


    public:
        QVector<QOpenGLShader *> mShaders;
    private:
        QVector<QString> mShaderFile;
    };
}


#endif //SLAMRECONSTRUCTION_RENDERSHADERS_H
