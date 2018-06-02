#ifndef PORTAL_H
#define PORTAL_H
#include "base.h"
#include "icon.h"
#include <QImage>
#include <QRectF>
class portal:public base
{
public:
    void show(QPainter *painter);
    void _init(int x,int y);
private:
    int _flag;
    QImage _im[8];
    QRectF _rec_sou,_rec_tar;
    int _x,_y;
};

#endif // PORTAL_H
