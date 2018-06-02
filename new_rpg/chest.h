#ifndef CHEST_H
#define CHEST_H
#include "base.h"

class chest:public base
{
public:
    void show(QPainter *painter);
private:
    static QImage _pic;
};

#endif // CHEST_H
