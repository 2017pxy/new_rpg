#include "world.h"
#include"base.h"
#include"icon.h"
#include<QPainter>
#include<QImage>
#include"mapblock.h"
#include<vector>
#include"tree_pic.h"
#include"player.h"
using namespace std;

void world::init_world()
{
    int i,j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<20;j++)
        {
            mapblock temp;
            string a="grass";
            temp.init_(i,j,1,1,a);
            this->map.push_back(temp);
        }
    }
    for(i=0;i<100;i+=2)
    {
        tree_pic temp;
        string a="green_trees";
        temp.init_(i,0,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<100;i+=2)
    {
        tree_pic temp;
        string a="green_trees";
        temp.init_(i,19,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<100;i+=2)
    {
        tree_pic temp;
        string a="green_tree";
        temp.init_(i,1,2,2,a);
        this->_trees.push_back(temp);
    }
    for(i=0;i<100;i+=2)
    {
        tree_pic temp;
        string a="green_tree";
        temp.init_(i,18,2,2,a);
        this->_trees.push_back(temp);
    }
    _myplayer.init_(3,3,1,1.5,"player1");
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
    _myplayer.show(painter);
}
void world::player_move(int direction)
{
    _myplayer.move(direction);
}
