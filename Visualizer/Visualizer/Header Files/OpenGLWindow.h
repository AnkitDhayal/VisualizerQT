
#pragma once

#include <QOpenGLWidget>

#include <QOpenGLFunctions>

#include <QOpenGLBuffer>

#include "Shape.h"

#include "point.h"

class QOpenGLTexture;

class QOpenGLShader;

class QOpenGLShaderProgram;

class QOpenGLPaintDevice;

class OpenGLWindow :public QOpenGLWidget, protected QOpenGLFunctions

{

    Q_OBJECT

signals:

    void shapesUpdated();

public:

    OpenGLWindow(const QColor& (background), QWidget* parent);

    ~OpenGLWindow();

    void mouseMoveEvent(QMouseEvent* event);

    void addHermiteCurve(std::vector<Point3D> points);

    void addBezierCurve(std::vector<Point3D> points);

    void addTrianglePoints(std::vector<float>& p, std::vector<float>& c);

    void addBSplineCurve(std::vector<Point3D> points);

    void addCurveLines(const std::vector<Point3D>& points);

    QString readShader(QString filepath);

    void shaderWatcher();

    void writeStringToFile(const QString& text, const QString& filePath);


protected:

    void paintGL() override;

    void initializeGL() override;

private:

    void reset();

private:

    bool mAnimating = false;

    QOpenGLContext* mContext = nullptr;

    QOpenGLPaintDevice* mDevice = nullptr;

    QOpenGLShader* mVshader = nullptr;

    QOpenGLShader* mFshader = nullptr;

    QOpenGLShaderProgram* mProgram = nullptr;

    QList<QVector3D> mVertices;

    QList<QVector3D> mNormals;

    QOpenGLBuffer mVbo;

    int mVertexAttr;

    int mNormalAttr;

    int mMatrixUniform;

    QColor mBackground;

    QMetaObject::Connection mContextWatchConnection;

    GLint m_posAttr = 0;

    GLint m_colAttr = 0;

    GLint m_matrixUniform = 0;

    Shape mClippingPolygon;

    std::vector<Shape> mPolygons;

    std::vector<Line> mLines;

    std::vector<float> vertices;

    std::vector<float> colors;

    QQuaternion rotation;

    QVector3D rotationAxis;

    GLenum str = GL_LINES;

    int number = 2;

    QQuaternion rotationAngle;

    QPoint lastPos;

    QFileSystemWatcher* mVertexShaderWatcher;

    QFileSystemWatcher* mFragmentShaderWatcher;

    QFileSystemWatcher* mShaderWatcher;

};