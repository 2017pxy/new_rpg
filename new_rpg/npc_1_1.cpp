#include "npc_1_1.h"
#include<icon.h>
#include<base.h>
#include<QImage>
QImage npc_1_1::_res= QImage("D:\\images\\npc_1_1.png");
int npc_1_1::flag=1;//判断行走朝向
int npc_1_1::step=0;//记录步数
npc_1_1::npc_1_1(double x,double y,double w,double h)
{
    init_(x,y,w,h,"npc_1_1_1");
    icon a,b,c,d;

    a.init_icon("npc_1_1_1");
    b.init_icon("npc_1_1_2");
    c.init_icon("npc_1_1_3");
    d.init_icon("npc_1_1_4");

    _ic.push_back(a);
    _ic.push_back(b);
    _ic.push_back(c);
    _ic.push_back(d);
}

/*void npc_1_1::init_npc(double x,double y,double w,double h)
{
    init_(x,y,w,h,"npc_1_1_1");
    icon a,b,c,d;

    a.init_icon("npc_1_1_1");
    b.init_icon("npc_1_1_2");
    c.init_icon("npc_1_1_3");
    d.init_icon("npc_1_1_4");

    _ic.push_back(a);
    _ic.push_back(b);
    _ic.push_back(c);
    _ic.push_back(d);
}*/

void npc_1_1::move()
{
    if(step>=12)
    {
        step=0;
    }
    if(flag>10000)
    {
        flag=0;
    }
    if(step<12)
    {
        if(step/6==0)
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
    }
}

void npc_1_1::show(QPainter *painter)
{
    icon temp;
    if(step/6==0)
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
    }
    painter->drawImage(this->get_myrect(),this->_res,temp.get_rect());
}
