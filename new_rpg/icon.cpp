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
        //pic_rect.setRect(0*N,9*N,2*N,2*N);
    }
    else if(type=="green_trees")
    {
        pic_rect.setRect(6*N,6*N,2*N,2*N);
        //pic_rect.setRect(2*N,8*N,2*N,2*N);
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


    else if(type=="npc_1_1_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_1_1_2")
    {
        pic_rect.setRect(1*N,0,1*N,1.5*N);
    }
    else if(type=="npc_1_1_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_1_1_4")
    {
        pic_rect.setRect(1*N,3*N,1*N,1.5*N);
    }

    else if(type=="house1_1")//烟囱房
    {
         pic_rect.setRect(0,0,7*N,4.8*N);
    }
    else if(type=="house1_2")//粉红房
    {
         pic_rect.setRect(0,10*N,5*N,3.8*N);
    }
    else if(type=="house1_3")//复式房
    {
         pic_rect.setRect(0,5*N,5*N,4.8*N);
    }
    else if(type=="house1_4")//空调房
    {
        pic_rect.setRect(0,14*N,7*N,4.8*N);
    }
    else if(type=="house1_5")//蓝色房
    {
        pic_rect.setRect(0,19*N,5*N,3.8*N);
    }
    else if(type=="house1_6")//紫色房
    {
        pic_rect.setRect(0,23*N,5*N,3.8*N);
    }

    else if(type=="mud_road")
    {
        pic_rect.setRect(1.55*N,1.5*N,0.95*N,1*N);
    }
}
