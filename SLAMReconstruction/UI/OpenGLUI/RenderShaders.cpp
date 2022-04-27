#include "RenderShaders.h"

namespace gf {

    RenderShaders::RenderShaders() {
        mShaderFile.resize(12);
        mShaders.resize(12);
        mShaderFile[0] = ":Shaders/VertCColorONorm.glsl";
        mShaderFile[1] = ":Shaders/FragCColorONorm.glsl";

        mShaderFile[2] = ":Shaders/VertCColorWNorm.glsl";
        mShaderFile[3] = ":Shaders/FragCColorWNorm.glsl";

        mShaderFile[4] = ":Shaders/VertUniColorONorm.glsl";
        mShaderFile[5] = ":Shaders/FragUniColorONorm.glsl";

        mShaderFile[6] = ":Shaders/VertUniColorWNorm.glsl";
        mShaderFile[7] = ":Shaders/FragUniColorWNorm.glsl";

        mShaderFile[8] = ":Shaders/VertUVONorm.glsl";
        mShaderFile[9] = ":Shaders/FragUVONorm.glsl";

        mShaderFile[10] = ":Shaders/VertUVWNorm.glsl";
        mShaderFile[11] = ":Shaders/FragUVWNorm.glsl";
    }

    void RenderShaders::compileAllShaders() {
        mShaders[0]  = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[2]  = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[4]  = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[6]  = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[8]  = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[10] = new QOpenGLShader(QOpenGLShader::Vertex);

        mShaders[1]  = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[3]  = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[5]  = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[7]  = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[9]  = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[11] = new QOpenGLShader(QOpenGLShader::Fragment);

        mShaders[0]->compileSourceFile(mShaderFile[0]);
        mShaders[1]->compileSourceFile(mShaderFile[1]);
        mShaders[2]->compileSourceFile(mShaderFile[2]);
        mShaders[3]->compileSourceFile(mShaderFile[3]);
        mShaders[4]->compileSourceFile(mShaderFile[4]);
        mShaders[5]->compileSourceFile(mShaderFile[5]);
        mShaders[6]->compileSourceFile(mShaderFile[6]);
        mShaders[7]->compileSourceFile(mShaderFile[7]);
        mShaders[8]->compileSourceFile(mShaderFile[8]);
        mShaders[9]->compileSourceFile(mShaderFile[9]);
        mShaders[10]->compileSourceFile(mShaderFile[10]);
        mShaders[11]->compileSourceFile(mShaderFile[11]);
    }

    void RenderShaders::compileShaders(const unsigned int &typeEnum) {
        if (mShaders[typeEnum])return;
        mShaders[typeEnum]     = new QOpenGLShader(QOpenGLShader::Vertex);
        mShaders[typeEnum + 1] = new QOpenGLShader(QOpenGLShader::Fragment);
        mShaders[typeEnum]->compileSourceFile(mShaderFile[typeEnum]);
        mShaders[typeEnum + 1]->compileSourceFile(mShaderFile[typeEnum + 1]);
    }
}