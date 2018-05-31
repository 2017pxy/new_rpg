#ifndef MUD_H
#define MUD_H
#include<QPainter>
#include"base.h"

class mud:public base
{
public:
    void show(QPainter *painter);
private:
    static QImage _res;
};

#endif // MUD_H
