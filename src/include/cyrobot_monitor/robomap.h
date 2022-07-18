#ifndef ROBOMAP_H
#define ROBOMAP_H

#include <QObject>
#include <QDebug>
#include <QGraphicsItem>
#include <QPainter>
#include <QPolygon>
#include <QTimer>
#include <QGraphicsSceneWheelEvent>
#include <QColor>
#include <opencv2/highgui/highgui.hpp>
#include <QCursor>
#include <QtMath>

namespace cyrobot_monitor {

class roboMap  : public QObject, public QGraphicsItem
{
    Q_OBJECT
//角度转弧度
#define degreesToradian(x) (M_PI*x/180.0)

//弧度转角度
#define radiansToDegrees(x) (180.0*x/M_PI)
public:
  roboMap();
  QRectF  boundingRect() const;
  void    wheelEvent(QGraphicsSceneWheelEvent *event);
  void    mousePressEvent(QGraphicsSceneMouseEvent *event);
  void    mouseMoveEvent(QGraphicsSceneMouseEvent *event);
  void    mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
  void    hoverMoveEvent(QGraphicsSceneHoverEvent *event);
  void    paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  int QColorToInt(const QColor& color);
  QPolygon MapPoints;
  QPolygonF plannerPath;
  QPolygonF laserPoints;
  QPointF RoboPostion;
  QSizeF mapSize;
  QImage m_image;
  QImage m_imageMap;
  QTimer timer_update;
  int m_sizeCar=4;
  double m_roboYaw;
  double m_roboR=5;
  double map_size=1;
  double defaultScale=2;
  double PI=3.1415926;
  void get_version(){
      qDebug()<<"1.0.0";
  }
  void setMax();
  void setMin();
  void setDefault();
  void move(double x,double y);
  QCursor *moveCursor=NULL;
  QCursor *set2DPoseCursor=NULL;
  QCursor *set2DGoalCursor=NULL;
  QCursor *currCursor=NULL;
signals:
  void cursorPos(QPointF);
  void set2DPos(QPointF start,QPointF end);
  void set2DGoal(QPointF point,QPointF end);
public slots:
    void paintMaps(QImage map);
    void paintRoboPos(QPointF pos,float yaw);
    void paintImage(int,QImage);
    void paintPlannerPath(QPolygonF);
    void paintLaserScan(QPolygonF);
    void slot_set2DPos();
    void slot_set2DGoal();
    void slot_setMoveCamera();
private:
    void drawMap(QPainter* painter);
    void drawRoboPos(QPainter* painter);
    void drawLaserScan(QPainter* painter);
    void drawPlannerPath(QPainter* painter);
    void drawTools(QPainter* painter);
private:
    int         m_zoomState;
    bool        m_isPress;
    bool        m_isOtherCursor{false};
    QPointF     m_startPos;
    QPointF     m_pressedPoint=QPointF(0,0);
    QPointF     m_pressingPoint=QPointF(0,0);
    qreal       m_scaleValue=1;
    qreal       m_scaleDafault=1;

};
}
#endif // ROBOMAP_H
