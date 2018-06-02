#ifndef NPC_3_3_H
#define NPC_3_3_H
#include<QPainter>
#include"base.h"
#include"icon.h"
#include<vector>
#include"npc.h"

class npc_3_3:public base,public npc
{
public:
    npc_3_3(){};
    npc_3_3(double x,double y,double w,double h);
    ~npc_3_3(){};
    void move();
    void show(QPainter *painter);
    void init_npc(double x,double y,double w,double h);
private:
    static int flag;
    static int step;
    static QImage _res;
    vector<icon> _ic;
};
#endif // NPC_3_3_H
