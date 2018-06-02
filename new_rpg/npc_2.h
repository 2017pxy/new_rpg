#ifndef NPC_2_H
#define NPC_2_H
#include <QString>
#include <QImage>
#include "base.h"
#include "npc.h"
class npc_2:public base,public npc
{
public:
    void npc_2_init_(QString adress,int range,int direction,string i);
    void move();
    void show(QPainter *painter);
private:
    int _flag;
    int _step;
    int _range;
    int _direction;
    int _start_dir;
    QImage _pic;
    icon _icon[4];

};

#endif // NPC_2_H
