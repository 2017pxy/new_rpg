#include "icon.h"
#include<QRect>
#include<string>
const int N=32;
void icon::init_icon(string type)
{
    if(type=="grass")
    {
        pic_rect.setRect(2*N,0,1*N,1*N);
    }
    else if(type=="green_tree")
    {
        pic_rect.setRect(6*N,4*N,2*N,2*N);
    }
    else if(type=="green_trees")
    {
        pic_rect.setRect(6*N,6*N,2*N,2*N);
    }
    else if(type=="player1")
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="player2")
    {
        pic_rect.setRect(1*N,0,1*N,1.5*N);
    }
    else if(type=="player3")
    {
        pic_rect.setRect(0,1.5*N,1*N,1.5*N);
    }
    else if(type=="player4")
    {
        pic_rect.setRect(1*N,1.5*N,1*N,1.5*N);
    }
    else if(type=="player5")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="player6")
    {
        pic_rect.setRect(1*N,3*N,1*N,1.5*N);
    }
    else if(type=="player7")
    {
        pic_rect.setRect(0,4.5*N,1*N,1.5*N);
    }
    else if(type=="player8")
    {
        pic_rect.setRect(1*N,4.5*N,1*N,1.5*N);
    }

}
