#include "player.h"
#include<icon.h>
#include"base.h"
#include<QImage>
QImage player::_res= QImage("D:\\images\\player.png");
int player::mode=1;
void player::show(QPainter *painter)
{
    //mode: 1,2,3,4,5,6,7,8;分别代表正1，正2；左1，左2；后1，后2；右1，右2；
    if(mode==1)
    {
        player_icon.init_icon("player1");
    }
    if(mode==2)
    {
        player_icon.init_icon("player2");
    }
    if(mode==3)
    {
        player_icon.init_icon("player3");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    if(mode==4)
    {
        player_icon.init_icon("player4");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    if(mode==5)
    {
        player_icon.init_icon("player5");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    if(mode==6)
    {
        player_icon.init_icon("player6");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    if(mode==7)
    {
        player_icon.init_icon("player7");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    if(mode==8)
    {
        player_icon.init_icon("player8");
        //painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
    }
    //icon _ic=this->get_myicon();
    painter->drawImage(this->get_myrect(),this->_res,player_icon.get_rect());
}
void player::set_mode(int x)
{
    mode=x;
}

void player::move(int direction, int steps)
{
    //1,2,3,4,5,6,7,8 分别代表上,下，左，右
    if(direction==1)
    {
        //player::set_mode(5);
        mode=5;
        reset_pos(this->getX(),this->getY()-0.5);
    }
    if(direction==2)
    {
        //player::set_mode(6);
        mode=6;
        reset_pos(this->getX(),this->getY()-0.5);
    }
    if(direction==3)
    {
        //player::set_mode(1);
        mode=1;
        reset_pos(this->getX(),this->getY()+0.5);
    }
    if(direction==4)
    {
        //player::set_mode(2);
        mode=2;
        reset_pos(this->getX(),this->getY()+0.5);
    }
    if(direction==5)
    {
        //player::set_mode(3);
        mode=3;
        reset_pos(this->getX()-0.5,this->getY());
    }
    if(direction==6)
    {
        //player::set_mode(4);
        mode=4;
        reset_pos(this->getX()-0.5,this->getY());
    }
    if(direction==7)
    {
        //player::set_mode(7);
        mode=7;
        reset_pos(this->getX()+0.5,this->getY());
    }
    if(direction==8)
    {
        //player::set_mode(8);
        mode=8;
        reset_pos(this->getX()+0.5,this->getY());
    }
}
