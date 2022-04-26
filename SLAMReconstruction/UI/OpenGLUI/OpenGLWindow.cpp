#include <filesystem>
#include <QMouseEvent>
#include <Utils/Logger/Logger.h>
#include "OpenGLWindow.h"
#include "Utils/ConfigMapper/ConfigMapper.h"

namespace gf {

    OpenGLWindow::OpenGLWindow(QWidget *parent) :
            QOpenGLWidget(parent), mMultiSampleAntiAliasingFlag(true) {
        if (mMultiSampleAntiAliasingFlag) {
            QSurfaceFormat format;
            format.setSamples(4); //this creates a 4x MSAA surface format
            this->setFormat(format);
        }

        this->setObjectName(QString::fromUtf8("openGLWidget"));
        this->setMinimumSize(QSize(1080, 706));
        QPalette palette;
        QBrush   brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        this->setPalette(palette);
        mVertexShader = createUniqueRef<QOpenGLShader>(QOpenGLShader::Vertex);
        mFragShader = createUniqueRef<QOpenGLShader>(QOpenGLShader::Fragment);
        mRenderCamera     = createUniqueRef<Qt3DRender::QCamera>();

        setupShaders();

        mBgColor = Vec3f(0.941f, 0.973f, 1.0f);
        mDrawType = DrawTypeEnum::ARRAY;
        //enable drag-drop functionality.
        this->setAcceptDrops(true);
    }

    void OpenGLWindow::initializeGL() {
        initializeOpenGLFunctions();
        if (mMultiSampleAntiAliasingFlag) {
            ///the effect is determined by platforms and hardwares.
            QOpenGLFunctions::glEnable(GL_MULTISAMPLE);
        }
        mShaderProgram = createUniqueRef<QOpenGLShaderProgram>();
//        mShadersAvailable->compileAllShaders(filenames, shaderType, shaderItems);
        if (1) {
            ////////////////////////////////////////////////////////////////////
            QOpenGLShader *tV = new QOpenGLShader(QOpenGLShader::Vertex);
            QOpenGLShader *tF = new QOpenGLShader(QOpenGLShader::Fragment);
//            tV->compileSourceCode(vsrc);
//            tF->compileSourceCode(fsrc);
            mShaderProgram->addShader(tV);
            mShaderProgram->addShader(tF);
            ///////////////////////////////////////////////////////////////////
            mShaderProgram->link();
            mShaderProgram->bind();
            mVBO = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
            mEBO = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
            mVBO.create();
            if (!mVBO.isCreated()) {
                GF_ERROR("Cannot create vertex buffer object!");
            }
            mVBO.bind();
            mVAO.create();
            if (!mVAO.isCreated()) {
                GF_ERROR("Cannot create array buffer object!");
            }
            mVAO.bind();
            if (mDrawType == DrawTypeEnum::ARRAY) {
                //4.初始化VBO,将顶点数据存储到buffer中,等待VAO激活后才能释放
                float vertices[] = {
                        -7.5f, -5.5f, -1.0f,
                        7.5f, -0.5f, 2.0f,
                        0.0f, 6.0f, -0.8f
                };

                mVBO.allocate(vertices, 9 * sizeof(GLfloat));
                mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);  //设置为一次修改，多次使用
                GLint aPos = mShaderProgram->attributeLocation("aPos");        //获取aPos位置
                if (aPos == -1)  //未找到
                {
                    return;
                }
                mShaderProgram->setAttributeBuffer(aPos, GL_FLOAT, 0, 3, 0);   //设置顶点属性
                mShaderProgram->enableAttributeArray(aPos); //使能顶点属性
//                mRenderCamera->update(mShaderProgram);
            } else {
                mEBO.create();
                if (!mEBO.isCreated()) {
                    GF_ERROR("Cannot create index buffer object!");
                }
                mEBO.bind();
            }
            ///todo: add data here.
            mVAO.release();
            mVBO.release();
            if (mDrawType == DrawTypeEnum::ELEMENT)mEBO.release();
            mShaderProgram->release();

        } else {
            GF_WARN("You have not compiled shaders!");
        }
        QOpenGLFunctions::glClearColor(mBgColor.x(), mBgColor.y(), mBgColor.z(), 0.0f);
        QOpenGLFunctions::glEnable(GL_DEPTH_TEST);
    }

    void OpenGLWindow::resizeGL(int w, int h) {
        QOpenGLWidget::resizeGL(w, h);
    }

    void OpenGLWindow::paintGL() {
        QOpenGLFunctions::glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        QOpenGLWidget::paintGL();
        mShaderProgram->bind();
        mVAO.bind();
//        mRenderCamera->update(mShaderProgram);

        if (mDrawType == DrawTypeEnum::ARRAY)QOpenGLFunctions::glDrawArrays(GL_TRIANGLES, 0, 3);
        else if (mDrawType == DrawTypeEnum::ELEMENT)
            QOpenGLFunctions::glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT,
                                             nullptr);
        mVAO.release();
        mShaderProgram->release();
        /// draw data here.
    }

    OpenGLWindow::~OpenGLWindow() {
        makeCurrent();
        mVAO.destroy();
        mVBO.destroy();
        if (mDrawType == DrawTypeEnum::ELEMENT)mEBO.destroy();
        doneCurrent();
    }

    void OpenGLWindow::handleData(float *vertices, unsigned int size,
                                  unsigned int *indices, const unsigned int &) {
        //set mDrawType.
    }

    void OpenGLWindow::mousePressEvent(QMouseEvent *event) {
        setMouseTracking(true);
        if (event->buttons()==Qt::LeftButton) {
//            mRenderCamera->setMousePos(event->pos());
        }
        if (event->buttons()==Qt::RightButton){
//            mRenderCamera->setMousePos(event->pos());
        }
        update();
        setMouseTracking(false);
    }

    void OpenGLWindow::keyPressEvent(QKeyEvent *event) {
        QWidget::keyPressEvent(event);
    }
    void OpenGLWindow::wheelEvent(QWheelEvent *event) {
        const int degree = event->delta();
//        mRenderCamera->zoom(degree);
        update();
    }
    void OpenGLWindow::mouseMoveEvent(QMouseEvent *event) {
        if (event->buttons()& Qt::LeftButton){
//            mRenderCamera->rotate(event->pos());
        }
        if (event->buttons()& Qt::RightButton){
//            mRenderCamera->pan(event->pos());
        }
        update();
//        mRenderCamera->setMousePos(event->pos());
    }
    void OpenGLWindow::mouseReleaseEvent(QMouseEvent *event) {
        update();
    }

    void OpenGLWindow::setupShaders() {
        auto shader_path =
                     std::filesystem::path(
                             ConfigMapper::mDirMapper->mDirMaps[DirMapper::DirEnum::SHADER_DIR].c_str());
        shader_path /= "VertexShaders";
        if (!std::filesystem::exists(shader_path)) {
            GF_WARN("Default shader path has been modified!, Can not load shaders...");
        }
        std::filesystem::directory_iterator      end_itr;
        for (std::filesystem::directory_iterator idx(shader_path); idx != end_itr; idx++) {
            if (!std::filesystem::is_regular_file(idx->status())) {
                GF_WARN("Not compatible directory structure.");
                break;
            }
            ///note this way is cross-platform compatible, test on windows and linux.
            filenames.push_back(QString::fromUtf8((idx->path().string().c_str())));
            shaderType.push_back(QOpenGLShader::Vertex);
            shaderItems.push_back(2);
        }
        shader_path = shader_path.parent_path();
        shader_path /= "FragmentShaders";
        if (!std::filesystem::exists(shader_path)) {
            GF_WARN("Default shader path has been modified!, Can not load shaders...");
        }
        for (std::filesystem::directory_iterator idx(shader_path); idx != end_itr; idx++) {
            if (!std::filesystem::is_regular_file(idx->status())) {
                GF_WARN("Not compatible directory structure.");
                break;
            }
            filenames.push_back(QString::fromUtf8((idx->path().string().c_str())));
            shaderType.push_back(QOpenGLShader::Fragment);
            shaderItems.push_back(3);
        }
    }

}