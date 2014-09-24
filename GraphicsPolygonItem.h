#ifndef GRAPHICSPOLYGONITEM_H
#define GRAPHICSPOLYGONITEM_H
class GraphicsPolygonItem: public QGraphicsPolygonItem { 
 signals: 
  void mousePressed(); 
 public: 
  void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) { 
    emit mousePressed(); 
  } 
} 

#endif
