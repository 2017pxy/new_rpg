#ifndef BASE_H
#define BASE_H
#include<QPainter>
#include<QRect>
#include"icon.h"
#include<string>
class base
{
public:
    static int _SIZE;//坐标转换
    double getX(){return _pos_X;}
    double getY(){return _pos_Y;}
    double getW(){return _width;}
    double getH(){return _height;}
    void reset_pos(double x, double y);
    QRect get_myrect(){return my_rect;}
    icon get_myicon(){return my_icon;}
    void init_(double x, double y, double w, double h, string type);
    bool if_cover(base r);
private:
    QRect my_rect;//游戏地图中所占长方形
    double _pos_X;//游戏坐标
    double _pos_Y;
    double _width;//游戏长宽
    double _height;
    icon my_icon;
};

#endif // BASE_H
