#include "npc_3_4.h"
#include<icon.h>
#include<base.h>
#include<QImage>
QImage npc_3_4::_res= QImage("D:\\images\\npc_3_4.png");
int npc_3_4::flag=1;//判断行走朝向
int npc_3_4::step=0;//记录步数
npc_3_4::npc_3_4(double x,double y,double w,double h)
{
    init_(x,y,w,h,"npc_3_4_1");
    icon a,b,c,d;

    a.init_icon("npc_3_4_1");
    b.init_icon("npc_3_4_2");
    c.init_icon("npc_3_4_3");
    d.init_icon("npc_3_4_4");

    _ic.push_back(a);
    _ic.push_back(b);
    _ic.push_back(c);
    _ic.push_back(d);
}

void npc_3_4::move()
{
    /*if(step>=6)
    {
        step=0;
    }
    if(flag>10000)
    {
        flag=0;
    }
    if(step<6)
    {
        if(step/3==0)
        {
            reset_pos(getX(),getY()+1);
            flag++;
            step++;
        }
        else
        {
            reset_pos(getX(),getY()-1);
            flag++;
            step++;
        }
    }*/
}

void npc_3_4::show(QPainter *painter)
{
    icon temp;
   /* if(step/3==0)
    {
        if(flag%2==0)
        {
            temp=_ic[0];
        }
        else
        {
            temp=_ic[1];
        }
    }
    else
    {
        if(flag%2==0)
        {
            temp=_ic[2];
        }
        else
        {
            temp=_ic[3];
        }
    }*/
    temp=_ic[2];
    painter->drawImage(this->get_myrect(),this->_res,temp.get_rect());
}
