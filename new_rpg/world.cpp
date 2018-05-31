#include "world.h"
#include"base.h"
#include"icon.h"
#include<QPainter>
#include<QImage>
#include"mapblock.h"
#include<vector>
#include"tree_pic.h"
#include"player.h"
#include"npc_1_1.h"
#include"house1.h"
#include"npc.h"
#include"mud.h"
using namespace std;

int world::npc_life[100]={0};
world::~world()
{
    vector<npc*>::iterator dd;
    for(dd=_npc.begin();dd!=_npc.end();dd++)
    {
        delete (*dd);
    }
}

void world::init_world()
{
    int i,j;
    for(i=0;i<32;i++)
    {
        for(j=0;j<20;j++)
        {
            mapblock temp;
            string a="grass";
            temp.init_(i,j,1,1,a);
            this->map.push_back(temp);
        }
    }
    for(i=0;i<32;i+=2)
    {
        tree_pic temp;
        string a="green_trees";
        temp.init_(i,0,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<32;i+=2)
    {
        tree_pic temp;
        string a="green_trees";
        temp.init_(i,18,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<32;i+=2)
    {
        tree_pic temp;
        string a="green_tree";
        temp.init_(i,1,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<32;i+=2)
    {
        tree_pic temp;
        string a="green_tree";
        temp.init_(i,17,2,2,a);
        this->_trees.push_back(temp);
    }
    _myplayer.init_player(7,7,1,1.5);

    //npc初始化
    npc* p1=new npc_1_1(7,7,1,1.5);
    _npc.push_back(p1);
    npc_life[0]=1;

    house1 temp1;
    temp1.init_(0,2,7,4.8,"house1_1");
    house1 temp2;
    temp2.init_(12,10,5,3.8,"house1_2");
    house1 temp3;
    temp3.init_(12,2,5,4.8,"house1_3");
    house1 temp4;
    temp4.init_(22,2,7,4.8,"house1_4");
    house1 temp5;
    temp5.init_(0,10,5,3.8,"house1_5");
    house1 temp6;
    temp6.init_(22,10,5,3.8,"house1_6");
    house_1.push_back(temp2);
    house_1.push_back(temp1);
    house_1.push_back(temp3);
    house_1.push_back(temp4);
    house_1.push_back(temp5);
    house_1.push_back(temp6);

    for(i=0;i<32;i++)
    {
        mud temp;
        string a="mud_road";
        temp.init_(i,8,1,1,a);
        this->mud_road.push_back(temp);
    }

}

void world::show(QPainter *painter)
{
    vector<mapblock>::iterator aa;
    for(aa=map.begin();aa!=map.end();aa++)
    {
        (*aa).show(painter);
    }
    vector<tree_pic>::iterator bb;
    for(bb=_trees.begin();bb!=_trees.end();bb++)
    {
        (*bb).show(painter);
    }
    vector<mud>::iterator ee;
    for(ee=mud_road.begin();ee!=mud_road.end();ee++)
    {
        (*ee).show(painter);
    }
    vector<house1>::iterator cc;
    for(cc=house_1.begin();cc!=house_1.end();cc++)
    {
        (*cc).show(painter);
    }
    _myplayer.show(painter);
   // npcobj_1_1.show(painter);
    vector<npc*>::iterator dd;
    for(dd=_npc.begin();dd!=_npc.end();dd++)
    {
        (*dd)->show(painter);
    }

}
void world::player_move(int direction)
{
   _myplayer.move(direction);
    if(my_search()==true)
    {
        _myplayer.move(-direction);
    }
}
void world::npc_move()
{
   // npcobj_1_1.move();
    vector<npc*>::iterator dd;
    for(dd=_npc.begin();dd!=_npc.end();dd++)
    {
        (*dd)->move();
    }
}
bool world::my_search()
{
    if(_myplayer.getY()<3||_myplayer.getY()>=17||_myplayer.getX()<0||_myplayer.getX()>31)
        return true;
   /* if(_myplayer.getX()==7)
    {
        if(npc_life[0]==1)
        kill_npc(1);
    }*/
    vector<house1>::iterator it;
     // vector<tree_pic>::iterator it;
    for(it=house_1.begin();it!=house_1.end();it++)
    {
        if(_myplayer.if_cover((*it))==true)
        {
            return true;
        }
    }
    return false;
}
void world::kill_npc(int x)
{
    npc_life[x-1]=0;
    delete _npc[x-1];
    _npc.erase(_npc.begin()+x-1);

}
