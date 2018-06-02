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
    else if(type=="npc_1_1_5")
    {
        pic_rect.setRect(0*N,1.5*N,1*N,1.5*N);
    }
    else if(type=="npc_1_1_6")
    {
        pic_rect.setRect(1*N,1.5*N,1*N,1.5*N);
    }
    else if(type=="npc_1_1_7")
    {
        pic_rect.setRect(0*N,4.5*N,1*N,1.5*N);
    }
    else if(type=="npc_1_1_8")
    {
        pic_rect.setRect(1*N,4.5*N,1*N,1.5*N);
    }

    else if(type=="npc_3_1_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_1_2")
    {
        pic_rect.setRect(1.2*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_1_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_1_4")
    {
        pic_rect.setRect(1.2*N,3*N,1*N,1.5*N);
    }

    else if(type=="npc_3_2_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_2_2")
    {
        pic_rect.setRect(1.2*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_2_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_2_4")
    {
        pic_rect.setRect(1.2*N,3*N,1*N,1.5*N);
    }

    else if(type=="npc_3_3_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_3_2")
    {
        pic_rect.setRect(1.2*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_3_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_3_4")
    {
        pic_rect.setRect(1.2*N,3*N,1*N,1.5*N);
    }

    else if(type=="npc_3_4_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_4_2")
    {
        pic_rect.setRect(1*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_4_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_4_4")
    {
        pic_rect.setRect(1*N,3*N,1*N,1.5*N);
    }

    else if(type=="npc_3_5_1")\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_5_2")
    {
        pic_rect.setRect(1*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_5_3")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_5_4")
    {
        pic_rect.setRect(1*N,3*N,1*N,1.5*N);
    }

    /*else if(type=="npc_3_1_1" || type=="npc_3_2_1" || type=="npc_3_3_1" || type=="npc_3_4_1" || type=="npc_3_5_1" )\
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="npc_3_1_2" || type=="npc_3_2_2" || type=="npc_3_3_2" || type=="npc_3_4_2" || type=="npc_3_5_2" )
    {
        pic_rect.setRect(1.1*N,0,1*N,1.5*N);
    }
    else if(type=="npc_3_1_3" || type=="npc_3_2_3" || type=="npc_3_3_3" || type=="npc_3_4_3" || type=="npc_3_5_3" )
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="npc_3_1_4" || type=="npc_3_2_4" || type=="npc_3_3_4" || type=="npc_3_4_4" || type=="npc_3_5_4" )
    {
        pic_rect.setRect(1.1*N,3*N,1*N,1.5*N);
    }*/



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
    else if(type=="guidepost")
    {
        pic_rect.setRect(0,5*N,1*N,1*N);;
    }

    //张腾甘
    else if (type == "dead_tree") {
        pic_rect.setRect(0, 7*N, 2*N, 2*N);
    }
    else if (type == "black_floor")
    {
        pic_rect.setRect(3*N,11*N,1*N,1*N);
    }
    else if (type == "tree_stump")
    {
        pic_rect.setRect(3*N,13*N,2*N,1*N);
    }
    else if (type == "smelly_flower")
    {
        pic_rect.setRect(3*N,1*N,1*N,1*N);
    }
    else if (type == "green_flower")
    {
        pic_rect.setRect(4*N,1*N,1*N,1*N);
    }
    else if (type == "yellow_flower")
    {
        pic_rect.setRect(5*N,1*N,1*N,1*N);
    }
    else if (type == "sharp_tree")
    {
        pic_rect.setRect(4*N,4*N,1*N,1*N);
    }
    else if (type == "tomb_stone")
    {
        pic_rect.setRect(3*N,19*N,3*N,3*N);
    }
    else if (type == "board")
    {
        pic_rect.setRect(4*N,11*N,1*N,1*N);
    }

    //林海斓
    else if(type=="grass_b")    //new
        {
            pic_rect.setRect(4*N,0,1*N,1*N);
        }
        else if(type=="stone")  //new
        {
            pic_rect.setRect(4*N,9*N,1*N,1*N);
        }
        else if(type=="flower_white")  //new
        {
            pic_rect.setRect(4*N,4*N,1*N,1*N);
        }
        else if(type=="tree_small")  //new
        {
            pic_rect.setRect(4*N,6*N,N,N);
        }
        else if(type=="tree_flower_red")  //new
        {
            pic_rect.setRect(3*N,6*N,N,N);
        }
        else if(type=="wood")  //new
        {
            pic_rect.setRect(6*N,8*N,2*N,N);
        }
        else if(type=="wood_g")  //new
        {
            pic_rect.setRect(4*N,8*N,2*N,N);
        }
        else if(type=="house_b")  //new
        {
            pic_rect.setRect(0,22.8*N,4.9*N,4*N);
        }
        else if(type=="stand_cloth")  //new
        {
            pic_rect.setRect(8*N,4*N,4*N,3*N);
        }
        else if(type=="coco_tree")  //new
        {
            pic_rect.setRect(3*N,13*N,2*N,3*N);
        }
        else if(type=="stones")  //new
        {
            pic_rect.setRect(5*N,9*N,N,N);
        }
        else if(type=="sculpture")  //new
        {
            pic_rect.setRect(8*N,12*N,N,2*N);
        }
        else if(type=="tree_tall")  //new
        {
            pic_rect.setRect(5*N,6*N,1*N,2*N);
        }
        else if(type=="tree_tall_2")  //new
        {
            pic_rect.setRect(2*N,6*N,1*N,2*N);
        }
        else if(type=="chest")  //new
        {
            pic_rect.setRect(N,0,1*N,1.5*N);
        }
        else if(type=="pine")  //new
        {
            pic_rect.setRect(0,9*N,2*N,2*N);
        }
        else if(type=="pines")  //new
        {
            pic_rect.setRect(2*N,8*N,2*N,2*N);
        }
        else if(type=="npc_2_1_1")  //new
        {
            pic_rect.setRect(0,4.7*N,1.1*N,1.5*N);
        }
        else if(type=="npc_2_1_2")  //new
        {
            pic_rect.setRect(1.1*N,4.7*N,1.1*N,1.5*N);
        }
        else if(type=="npc_2_1_3")  //new
        {
            pic_rect.setRect(0,1.7*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_1_4")  //new
        {
            pic_rect.setRect(1.15*N,1.7*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_2_1")  //new
        {
            pic_rect.setRect(0,3*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_2_2")  //new
        {
            pic_rect.setRect(1.15*N,3*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_2_3")  //new
        {
            pic_rect.setRect(0,0,1.15*N,1.5*N);
        }
        else if(type=="npc_2_2_4")  //new
        {
            pic_rect.setRect(1.15*N,0.1*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_3_3")  //new
        {
            pic_rect.setRect(0,3*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_3_4")  //new
        {
            pic_rect.setRect(1.15*N,3*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_3_1")  //new
        {
            pic_rect.setRect(0,0,1.15*N,1.5*N);
        }
        else if(type=="npc_2_3_2")  //new
        {
            pic_rect.setRect(1.15*N,0.1*N,1.15*N,1.5*N);
        }
        else if(type=="npc_2_4_3")  //new
        {
            pic_rect.setRect(0,4.7*N,1.15*N,1.3*N);
        }
        else if(type=="npc_2_4_4")  //new
        {
            pic_rect.setRect(1.15*N,4.7*N,1.15*N,1.3*N);
        }
        else if(type=="npc_2_4_1")  //new
        {
            pic_rect.setRect(0,1.8*N,1.15*N,1.3*N);
        }
        else if(type=="npc_2_4_2")  //new
        {
            pic_rect.setRect(1.15*N,1.8*N,1.15*N,1.3*N);
        }
}
