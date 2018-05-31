#include "player.h"
#include"icon.h"
#include"base.h"
#include<QImage>

QImage player::_res= QImage("D:\\images\\player.png");
int player::mode=1;
void player::init_player(double x, double y, double w, double h)
{
    icon a,b,c,d,e,f,g,i;

    init_(x,y,w,h,"player1");
    a.init_icon("player1");
    b.init_icon("player2");
    c.init_icon("player3");
    d.init_icon("player4");
    e.init_icon("player5");
    f.init_icon("player6");
    g.init_icon("player7");
    i.init_icon("player8");

    player_icon.push_back(a);
    player_icon.push_back(b);
    player_icon.push_back(c);
    player_icon.push_back(d);
    player_icon.push_back(e);
    player_icon.push_back(f);
    player_icon.push_back(g);
    player_icon.push_back(i);
}

void player::show(QPainter *painter)
{
    //mode: 1,2,3,4,5,6,7,8;分别代表正1，正2；左1，左2；后1，后2；右1，右2；
    icon temp;
    if(mode==1)
    {
        temp=player_icon[0];
    }
    if(mode==2)
    {
        temp=player_icon[1];
    }
    if(mode==3)
    {
        temp=player_icon[2];
    }
    if(mode==4)
    {
        temp=player_icon[3];
    }
    if(mode==5)
    {
        temp=player_icon[4];
    }
    if(mode==6)
    {
        temp=player_icon[5];
    }
    if(mode==7)
    {
        temp=player_icon[6];
    }
    if(mode==8)
    {
        temp=player_icon[7];
    }
    painter->drawImage(this->get_myrect(),this->_res,temp.get_rect());
}
void player::set_mode(int x)
{
    mode=x;
}

void player::move(int direction, int steps)
{
    //1,2,3,4,5,6,7,8
    //1,2,-1,-2,3,4,-3,-4分别代表上,下，左，右
    if(direction==1)
    {
        //player::set_mode(5);
        mode=5;
        reset_pos(this->getX(),this->getY()-1);
    }
    if(direction==2)
    {
        //player::set_mode(6);
        mode=6;
        reset_pos(this->getX(),this->getY()-1);
    }
    if(direction==-1)
    {
        //player::set_mode(1);
        mode=1;
        reset_pos(this->getX(),this->getY()+1);
    }
    if(direction==-2)
    {
        //player::set_mode(2);
        mode=2;
        reset_pos(this->getX(),this->getY()+1);
    }
    if(direction==3)
    {
        //player::set_mode(3);
        mode=3;
        reset_pos(this->getX()-1,this->getY());
    }
    if(direction==4)
    {
        //player::set_mode(4);
        mode=4;
        reset_pos(this->getX()-1,this->getY());
    }
    if(direction==-3)
    {
        //player::set_mode(7);
        mode=7;
        reset_pos(this->getX()+1,this->getY());
    }
    if(direction==-4)
    {
        //player::set_mode(8);
        mode=8;
        reset_pos(this->getX()+1,this->getY());
    }
}
