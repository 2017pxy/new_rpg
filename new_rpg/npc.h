#ifndef NPC_H
#define NPC_H
#include<QPainter>

class npc
{
public:
    virtual void show(QPainter *painter)=0;
    virtual void move()=0;
    virtual ~npc(){};
};

#endif // NPC_H
