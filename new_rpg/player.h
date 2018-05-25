#ifndef PLAYER_H
#define PLAYER_H
#include<QPainter>
#include"base.h"
#include"icon.h"
#include<vector>
class player:public base
{
public:
    void show(QPainter *painter);
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for 上下左右
    void init_player(double x, double y, double w, double h);
    void set_mode(int x);
private:
    static QImage _res;
    static int mode;
    icon player_icon;
    //vector<icon> player_icon;
};

#endif // PLAYER_H
