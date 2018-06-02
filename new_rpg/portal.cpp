#include "portal.h"
#include <iostream>
using namespace std;
void portal::_init(int x,int y)
{
    _flag=0;
    _rec_sou=QRectF(40,40,220,220);
    _rec_tar=QRectF(x*32,y*32,110,110);
    _x=x;   _y=y;
    _im[0]=QImage("D:\\images\\0.png");
    _im[1]=QImage("D:\\images\\1.png");
    _im[2]=QImage("D:\\images\\2.png");
    _im[3]=QImage("D:\\images\\3.png");
    _im[4]=QImage("D:\\images\\4.png");
    _im[5]=QImage("D:\\images\\5.png");
    _im[6]=QImage("D:\\images\\6.png");
    _im[7]=QImage("D:\\images\\7.png");
}

void portal::show(QPainter *painter){
    painter->drawImage(_rec_tar,_im[_flag%8],_rec_sou);
    if(_flag>100000)    _flag=0;
    _flag++;
}
