
#ifndef SLAMRECONSTRUCTION_OPENGLWINDOW_H
#define SLAMRECONSTRUCTION_OPENGLWINDOW_H

#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <Utils/Def/Def.h>

#include "RenderCamera.h"
#include "RenderShaders.h"

namespace gf {
    class OpenGLWindow : public QOpenGLWidget, public QOpenGLFunctions {
    public:
    Q_OBJECT
    public:
        enum DrawTypeEnum {
            ARRAY   = 0,
            ELEMENT = 1
        };
    public:
        OpenGLWindow(QWidget *parent = nullptr);

        ~OpenGLWindow();

    public:
        void initializeGL() override;

        void resizeGL(int w, int h) override;

        void paintGL() override;

        void mousePressEvent(QMouseEvent *event) override;

        void mouseMoveEvent(QMouseEvent *event) override;

        void mouseReleaseEvent(QMouseEvent *event) override;

        void wheelEvent(QWheelEvent *event) override;

        void keyPressEvent(QKeyEvent *event) override;

        void dragEnterEvent(QDragEnterEvent *event) override;

        void dropEvent(QDropEvent *event) override;

    public:
        void handleData(float *vertices, unsigned int size,
                        unsigned int *indices, const unsigned int &vert_type);

        void setMSAA(const bool &msaa) { this->mMultiSampleAntiAliasingFlag = msaa; }

    private:
        void determineShaders(const bool &hasNormal,
                              const bool &hasColor,
                              const bool &hasBitangent,
                              const bool &hasTextureCoord,
                              const bool &hasIndices) {
            if (hasIndices)mDrawType = ELEMENT;
            else mDrawType = ARRAY;
        }

        void setupShaders();

        void compileShaders();

    private:
        UniqueRef<QOpenGLShaderProgram>    mShaderProgram;
        UniqueRef<RenderShaders>           mShadersAvailable;
        UniqueRef<RenderCamera>            mRenderCamera;
        QVector<QString>                   filenames;
        QVector<QOpenGLShader::ShaderType> shaderType;
        QVector<unsigned int>              shaderItems;
        QOpenGLBuffer                      mVBO;
        QOpenGLVertexArrayObject           mVAO;
        QOpenGLBuffer                      mEBO;
        Vec3f                              mBgColor;
        DrawTypeEnum                       mDrawType;
        bool                               mMultiSampleAntiAliasingFlag;

    };
}


#endif //SLAMRECONSTRUCTION_OPENGLWINDOW_H
