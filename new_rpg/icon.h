#ifndef ICON_H
#define ICON_H
#include<QRect>
#include<string>
#include<iostream>
using namespace std;
class icon
{
public:
    void init_icon(string type);
    QRect get_rect(){return pic_rect;}
private:
    QRect pic_rect;
};

#endif // ICON_H
