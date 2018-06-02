#ifndef WORLD_BACK_H
#define WORLD_BACK_H
#include"mapblock.h"
#include"tree_pic.h"
#include"player.h"
#include "chest.h"
#include "house1.h"
#include "npc_2.h"
#include "portal.h"
using namespace std;

class world_back
{
public:
    void init_world_b();
    void show(QPainter *painter);
    void player_move(int direction);
    void npc_move();
    bool my_search();
    int tp();
    void portal_show(QPainter *painter);
private:
    vector<mapblock> map_b;
    vector<tree_pic> _trees_b;
    player _myplayer_b;
    chest _box;
    house1 _house_b;
    vector<npc_2> _npc_b;
    portal _por;
};

#endif // WORLD_BACK_H
