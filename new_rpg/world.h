#ifndef WORLD_H
#define WORLD_H
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
#include"portal.h"
using namespace std;

class world
{
public:
    world(){};
    ~world();
    void init_world();
    void show(QPainter *painter);
    void player_move(int direction);
    void npc_move();
    bool my_search();
    void kill_npc(int x);
    int tp();
    void portal_show(QPainter *painter);
private:
    vector<mapblock> map;
    vector<tree_pic> _trees;
    player _myplayer;
   // npc_1_1 npcobj_1_1;
    vector<house1> house_1;
    vector<npc*> _npc;
    static int npc_life[100];
    vector<mud> mud_road;
    portal _por1;
    portal _por2;
};

#endif // WORLD_H
