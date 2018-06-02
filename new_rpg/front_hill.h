#ifndef FRONT_HILL_H
#define FRONT_HILL_H
#include<vector>
#include<QPainter>
#include<QImage>
#include"mapblock.h"
#include"tree_pic.h"
#include"player.h"
#include"npc_1_1.h"
#include"house1.h"
#include"npc.h"
#include"portal.h"
using namespace std;

class front_hill {
public:
    front_hill(){};
    ~front_hill();
    void init_front_hill();
    void show(QPainter *painter);
    void player_move(int direction);
    void npc_move();
    bool my_search();
    void kill_npc(int x);
    int tp();
    void portal_show(QPainter *painter);
private:
    vector <tree_pic> dead_tree;
    vector<mapblock> map;
    vector<mapblock> spe_map;
    vector<mapblock> board;
    player _myplayer;
    portal _por;
    vector<npc*> _npc;
    static int npc_life[100];
};

#endif // FRONT_HILL_H
