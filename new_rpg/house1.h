#ifndef HOUSE1_H
#define HOUSE1_H
#include<QPainter>
#include"base.h"

class house1:public base
{
public:
    void show(QPainter *painter);
private:
    static QImage _res;
};
#endif // HOUSE1_H
