#ifndef NPC_1_1_H
#define NPC_1_1_H
#include<QPainter>
#include"base.h"
#include"icon.h"
#include<vector>
#include"npc.h"

class npc_1_1:public base,public npc
{
public:
    npc_1_1(){};
    npc_1_1(double x,double y,double w,double h);
    ~npc_1_1(){};
    void move();
    void show(QPainter *painter);
    void init_npc(double x,double y,double w,double h);
private:
    static int flag;
    static int step;
    static QImage _res;
    vector<icon> _ic;
};

#endif // NPC_1_1_H
