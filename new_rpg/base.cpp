#include "base.h"
#include<QPainter>
#include<QRect>
#include"icon.h"
#include<string>
#include<QImage>
using namespace std;
int base::_SIZE = 32;
void base::init_(double x,double y,double w,double h,string type)
{
    my_rect.setRect(x*_SIZE,y*_SIZE,w*_SIZE,h*_SIZE);
    _pos_X=x;
    _pos_Y=y;
    _width=w;
    _height=h;
    my_icon.init_icon(type);
}
void base::reset_pos(double x,double y)
{
    my_rect.setRect(x*_SIZE,y*_SIZE,_width*_SIZE,_height*_SIZE);
    _pos_X=x;
    _pos_Y=y;
}
bool base::if_cover(base r)
{
    int leftX,rightX,botY,topY;
    leftX=r.getX()>_pos_X ? r.getX() : _pos_X;
    rightX=(r.getX()+r.getW())<(_pos_X+_width) ? (r.getX()+r.getW()):(_pos_X+_width);
    topY=r.getY()>_pos_Y ? r.getY() : _pos_Y;
    botY=(r.getY()+r.getH())<(_pos_Y+_height) ? (r.getY()+r.getH()) :(_pos_Y+_height);
    if(leftX-rightX<0&&topY-botY<0)
        return true;
    else
        return false;
}
