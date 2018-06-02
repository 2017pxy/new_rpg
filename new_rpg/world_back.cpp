#include "world_back.h"
#include "icon.h"
#include <iostream>

using namespace std;

void world_back::init_world_b()
{
    float i,j;
    tree_pic temp;
    npc_2 ntemp;
    for(i=0;i<100;i++)
    {
        for(j=0;j<20;j++)
        {
            mapblock temp;
            string a="grass_b";
            temp.init_(i,j,1,1,a);
            this->map_b.push_back(temp);
        }
    }
    temp.init_(3,0,1,1,"stone");
    this->_trees_b.push_back(temp);
    temp.init_(11,0,2,4,"sculpture");
    this->_trees_b.push_back(temp);
    for(i=0;i<5;++i){
        temp.init_(0,i*2,2,2,"pines");
        this->_trees_b.push_back(temp);
    }

    temp.init_(2,7,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(4,7,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(5,8,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(2,9,2,2,"pine");
    this->_trees_b.push_back(temp);

    temp.init_(2,8,2,2,"pines");
    this->_trees_b.push_back(temp);
    temp.init_(4,8,2,2,"pines");
    this->_trees_b.push_back(temp);

    for(i=0;i<5;++i){
        temp.init_(1,i*2,2,2,"pine");
        this->_trees_b.push_back(temp);
    }
    temp.init_(0,i*2-1,2,2,"pine");
    this->_trees_b.push_back(temp);
    for(i=0;i<2;i+=0.5){
        temp.init_(11.5+i,12+i*2,1,2,"tree_tall");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<=1;i+=0.5){
        temp.init_(3+i,1+i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }

    _box.init_(3.5,3.5,2,3,"chest");

    for(i=0;i<3;++i){
        temp.init_(6.5,3.5+i,1,2,"tree_tall_2");
        this->_trees_b.push_back(temp);
    }
    for(i=6.5;i<=13.5;++i){
        temp.init_(i,7,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<=4;i+=0.5){
        temp.init_(13.5+i,7+1.5*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0.75;i<=3;i+=0.75){
        temp.init_(13.5+i,7-i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=16.5;i<=22.5;++i){
        temp.init_(i,4,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<4;++i){
        for(j=4;j>i;--j){
            temp.init_(22.5+j,4+i*1.5,1,2,"tree_tall");
            this->_trees_b.push_back(temp);
        }
    }
    for(i=6;i<=7;i+=0.5){
        temp.init_(i,i+1.5,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<=5;i+=0.5){
        temp.init_(20+i,8.5+1.5*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }

    for(i=0;i<=5;++i){
        temp.init_(7.5,9.25+0.75*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<32;i+=2){
        temp.init_(i,16.5,2,2,"pine");
        this->_trees_b.push_back(temp);
        temp.init_(i,17.5,2,2,"pines");
        this->_trees_b.push_back(temp);

    }
    _house_b.init_(2.5,9.5,4.9,4,"house_b");
    _myplayer_b.init_player(2,14,1,1.5);
    _por._init(0,14);

    ntemp.npc_2_init_("D:\\images\\npc_2_1.png",6,1,"1"); //right
    ntemp.init_(10,9,1.15,1.5,"npc_2_1_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_4.png",8,3,"2"); //up
    ntemp.init_(19.5,14,1.15,1.5,"npc_2_2_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_6.png",7,4,"3");   //down
    ntemp.init_(23,6.5,1.15,1.5,"npc_2_3_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_3.png",6,2,"4");     //left
    ntemp.init_(30.5,6,1.15,1.3,"npc_2_4_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_2.png",5,4,"3");     //down
    ntemp.init_(21,0.5,1.15,1.5,"npc_2_3_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_5.png",4,3,"2");     //up
    ntemp.init_(11,5.5,1.15,1.5,"npc_2_2_1");
    this->_npc_b.push_back(ntemp);
    ntemp.npc_2_init_("D:\\images\\npc_2_7.png",6,1,"1");     //up
    ntemp.init_(3.5,13.5,1.15,1.5,"npc_2_1_1");
    this->_npc_b.push_back(ntemp);
}
void world_back::show(QPainter *painter)
{
    vector<mapblock>::iterator aa;
    for(aa=map_b.begin();aa!=map_b.end();aa++)
    {
        (*aa).show(painter);
    }
    vector<tree_pic>::iterator bb;
    for(bb=_trees_b.begin();bb!=_trees_b.end();bb++)
    {
        (*bb).show(painter);
    }
    _house_b.show(painter);
    _box.show(painter);
    _por.show(painter);
    vector<npc_2>::iterator cc;
    for(cc=_npc_b.begin();cc!=_npc_b.end();cc++)
    {
        (*cc).show(painter);
    }
    _myplayer_b.show(painter);
}

void world_back::player_move(int direction)
{

    _myplayer_b.move(direction);
    if(my_search()==true)
    {

        _myplayer_b.move(-direction);
    }
}

void world_back::npc_move(){
    vector<npc_2>::iterator cc;
    for(cc=_npc_b.begin();cc!=_npc_b.end();cc++)
    {
        (*cc).move();
    }
}

bool world_back::my_search()
{

    if(_myplayer_b.getY()<0||_myplayer_b.getY()>=17||_myplayer_b.getX()<0||_myplayer_b.getX()>31)
       {  return true;}
    //vector<npc_2>::iterator it1;
    vector<tree_pic>::iterator it2;
    /*for(it1=_npc_b.begin();it1!=_npc_b.end();it1++)
    {
        if(_myplayer_b.if_cover((*it1))==true)
        {

            return true;
        }
    }*/
    for(it2=_trees_b.begin();it2!=_trees_b.end();it2++)
    {
        if(_myplayer_b.if_cover((*it2))==true)
        {

            return true;
        }
    }
    if(_myplayer_b.if_cover(_house_b)||_myplayer_b.if_cover(_box))  return true;
    return false;
}
/*int world_back::transfer(){
     if(_myplayer_b.getX()<=1&&_myplayer_b.getY()<=16&&_myplayer_b.getY()>=14)
         return 1;
     return 0;
 }*/
void world_back::portal_show(QPainter *painter)
{
    _por.show(painter);
}
int world_back::tp()
{
    if(_myplayer_b.getX()==1&&_myplayer_b.getY()==14)
    {
        _myplayer_b.reset_pos(2,14);
        return 1;
    }
    else
        return 0;
}
