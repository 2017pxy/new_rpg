#ifndef MAPBLOCK_H
#define MAPBLOCK_H
#include<QPainter>
#include"base.h"
#include<QImage>
class mapblock : public base{
public:
    void show(QPainter *painter);
private:
    static QImage _res;
};

#endif // MAPBLOCK_H
