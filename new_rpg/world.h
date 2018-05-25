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
using namespace std;

class world
{
public:
    world(){};
    ~world(){};
    void init_world();
    void show(QPainter *painter);
    void player_move(int direction);
private:
    vector<mapblock> map;
    vector<tree_pic> _trees;
    player _myplayer;
};

#endif // WORLD_H
