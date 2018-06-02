#include"base.h"
#include"icon.h"
#include<QPainter>
#include<QImage>
#include"mapblock.h"
#include<vector>
#include"tree_pic.h"
#include"player.h"
#include"front_hill.h"
#include"npc_3_1.h"
#include"npc_3_2.h"
#include"npc_3_3.h"
#include"npc_3_4.h"
#include"npc_3_5.h"
using namespace std;

int front_hill::npc_life[100]={0};
front_hill::~front_hill()
{
    vector<npc*>::iterator dd;
    for(dd=_npc.begin();dd!=_npc.end();dd++)
    {
        delete (*dd);
    }
}


void front_hill::init_front_hill() {
    int i, j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<20;j++)
        {
            mapblock temp;
            string a="black_floor";
            temp.init_(i,j,1,1,a);
            this->map.push_back(temp);
        }
    }
    mapblock temp1;
    string a1 = "tomb_stone";
    temp1.init_(1,2,3,3,a1);
    this->spe_map.push_back(temp1);
    /*for(i=0;i<100;i+=5)
    {
        for(j=1;j<=15;j+=5)
        {
            mapblock temp;
            string a="tree_stump";
            temp.init_(i,j,2,1,a);
            this->map.push_back(temp);
        }
    }*/
    for(i=0;i<31;i++)
    {
            if (i%6 == 0) {
                mapblock temp;
                string a="sharp_tree";
                temp.init_(i,1,1,1,a);
                this->spe_map.push_back(temp);
                temp.init_(i+1,1,1,1,a);
                this->spe_map.push_back(temp);
                this->map.push_back(temp);
                continue;
            }
            tree_pic temp;
            string a="dead_tree";
            temp.init_(i,0,2,2,a);
            this->dead_tree.push_back(temp);
    }
    for(i=0;i<28;i++)
    {
            if (i%5 == 0) {
                mapblock temp;
                string a="smelly_flower";
                temp.init_(i,6,1,1,a);
                this->spe_map.push_back(temp);

                temp.init_(i+1,6,1,1,a);
                this->spe_map.push_back(temp);
                continue;
            }
            tree_pic temp;
            string a="dead_tree";
            temp.init_(i,5,2,2,a);
            this->dead_tree.push_back(temp);
    }
    for(i=3;i<31;i++)
    {
            if (i%4 == 0) {
                mapblock temp;
                string a="green_flower";
                temp.init_(i,11,1,1,a);
                this->spe_map.push_back(temp);
                temp.init_(i+1,11,1,1,a);
                this->spe_map.push_back(temp);
                continue;
            }
            tree_pic temp;
            string a="dead_tree";
            temp.init_(i,10,2,2,a);
            this->dead_tree.push_back(temp);
    }
    for(i=0;i<28;i++)
    {
            if (i%6 == 0) {
                mapblock temp;
                string a="yellow_flower";
                temp.init_(i,16,1,1,a);
                this->spe_map.push_back(temp);
                temp.init_(i+1,16,1,1,a);
                this->spe_map.push_back(temp);
                continue;
            }
            tree_pic temp;
            string a="dead_tree";
            temp.init_(i,15,2,2,a);
            this->dead_tree.push_back(temp);
    }
    for(i=4;i<31;i++) //铺木板
    {
            mapblock temp;
            string a="board";
            temp.init_(i,3,1,1,a);
            this->board.push_back(temp);
            temp.init_(i,4,1,1,a);
            this->board.push_back(temp);
            if (i == 29 || i == 30) {
                for (j=5;j<=7;j++) {
                    temp.init_(i,j,1,1,a);
                    this->board.push_back(temp);
                }
            }
    }
    for(i=1;i<31;i++)
    {
            mapblock temp;
            string a="board";
            temp.init_(i,8,1,1,a);
            this->board.push_back(temp);
            temp.init_(i,9,1,1,a);
            this->board.push_back(temp);
            if (i == 1 || i == 2) {
                for (j=10;j<=12;j++) {
                    temp.init_(i,j,1,1,a);
                    this->board.push_back(temp);
                }
            }
    }
    for(i=1;i<31;i++)
    {
            mapblock temp;
            string a="board";
            temp.init_(i,13,1,1,a);
            this->board.push_back(temp);
            temp.init_(i,14,1,1,a);
            this->board.push_back(temp);
            if (i == 29 || i == 30) {
                for (j=15;j<=17;j++) {
                    temp.init_(i,j,1,1,a);
                    this->board.push_back(temp);
                }
            }
    }
    for(i=1;i<31;i++)
    {
            mapblock temp;
            string a="board";
            temp.init_(i,18,1,1,a);
            this->board.push_back(temp);
            temp.init_(i,19,1,1,a);
            this->board.push_back(temp);
    }
    //npc初始化
    npc* p1=new npc_3_1(29,13,1,1.5);
    _npc.push_back(p1);
    p1 = new npc_3_2(2,8,1,1.5);
    _npc.push_back(p1);
    p1 = new npc_3_3(29,3,1,1.5);
    _npc.push_back(p1);
    p1 = new npc_3_4(7,3,1,1.5);
    _npc.push_back(p1);
    p1 = new npc_3_5(5,3,1,1.5);
    _npc.push_back(p1);
    npc_life[0]=1;
    npc_life[1]=1;
    npc_life[2]=1;
    npc_life[3]=1;
    npc_life[4]=1;
    _myplayer.init_player(3,17,1,1.5);
    _por._init(1,17);
}

void front_hill::show(QPainter *painter)
{
    vector<mapblock>::iterator aa;//布置地图
    for(aa=map.begin();aa!=map.end();aa++)
    {
        (*aa).show(painter);
    }
    vector<tree_pic>::iterator bb;
    for(bb=dead_tree.begin();bb!=dead_tree.end();bb++)
    {
        (*bb).show(painter);
    }
    vector<mapblock>::iterator cc;
    for(cc=spe_map.begin();cc!=spe_map.end();cc++)
    {
        (*cc).show(painter);
    }
    vector<mapblock>::iterator dd;
    for(dd=board.begin();dd!=board.end();dd++)
    {
        (*dd).show(painter);
    }

    _myplayer.show(painter); //显示人物

    vector<npc*>::iterator ee; //显示NPC
    for(ee=_npc.begin();ee!=_npc.end();ee++)
    {
        (*ee)->show(painter);
    }
    _por.show(painter);
}

void front_hill::player_move(int direction)
{
       _myplayer.move(direction);
        if(my_search()==true)
        {
            _myplayer.move(-direction);
        }
}

void front_hill::npc_move()
{
   // npcobj_1_1.move();
    vector<npc*>::iterator dd;
    for(dd=_npc.begin();dd!=_npc.end();dd++)
    {
        (*dd)->move();
    }
}

bool front_hill::my_search()
{
    if(_myplayer.getY()>19||_myplayer.getX()<0||_myplayer.getX()>31)
        return true;
    vector<tree_pic>::iterator it1;
    for(it1=dead_tree.begin();it1!=dead_tree.end();it1++)
    {
        if(_myplayer.if_cover((*it1))==true)
        {
            return true;
        }
    }
    vector<mapblock>::iterator it2;
    for(it2=spe_map.begin();it2!=spe_map.end();it2++)
    {
        if(_myplayer.if_cover((*it2))==true)
        {
            return true;
        }
    }
    /*vector<mapblock>::iterator it3;
    for(it3=map.begin();it3!=map.end();it3++)
    {
        if(_myplayer.if_cover((*it3))==false)
        {
            return true;
        }
    }*/
    return false;
}
void front_hill::kill_npc(int x)
{
    npc_life[x-1]=0;
    delete _npc[x-1];
    _npc.erase(_npc.begin()+x-1);

}
int front_hill::tp()
{
    if(_myplayer.getX()==1&&_myplayer.getY()==17)
    {
        _myplayer.reset_pos(3,17);
        return 1;
    }
    else
        return 0;
}
void front_hill::portal_show(QPainter *painter)
{
    _por.show(painter);

}

