#ifndef TREE_H
#define TREE_H
#include<QPainter>
#include"base.h"

class tree_pic:public base
{
public:
    void show(QPainter *painter);
private:
    static QImage _res;
};
#endif // TREE_H
