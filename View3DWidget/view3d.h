// An highlighted block
#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>

class View3D : public QOpenGLWidget,protected QOpenGLFunctions  // 可直接使用QOpenGLFunctions中的OpenGL函数
{
    Q_OBJECT
public:
    explicit View3D (QWidget * parent = 0);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width,int height);

private:
    QOpenGLShaderProgram * program;     // 着色器程序
    QOpenGLBuffer vbo; //缓存
};

#endif // MYOPENGLWIDGET_H

