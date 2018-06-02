#include "npc_2.h"

void npc_2::npc_2_init_(QString adress,int range,int direction,string i)
{
    _pic=QImage(adress);
    _range=range;
    _flag=0;    _step=0;
    _direction=direction;   _start_dir=direction;
    _icon[0].init_icon("npc_2_"+i+"_1");
    _icon[1].init_icon("npc_2_"+i+"_2");
    _icon[2].init_icon("npc_2_"+i+"_3");
    _icon[3].init_icon("npc_2_"+i+"_4");
}

void npc_2::move(){
    _flag++;    _step++;
    if(_direction==1){   //right
        if(_step%_range==0)   _direction=2;
        else    reset_pos(getX()+0.5,getY());
    }
    else if(_direction==2){   //left
        if(_step%_range==0)   _direction=1;
        else    reset_pos(getX()-0.5,getY());
    }
    else if(_direction==3){   //up

        if(_step%_range==0)   _direction=4;
        else    reset_pos(getX(),getY()-0.5);
    }
    else if(_direction==4){   //down
        if(_step%_range==0)   _direction=3;
        else    reset_pos(getX(),getY()+0.5);
    }
    if(_step>=100000)     _step-=800*_range;
    if(_flag>=100000)     _flag=0;
}
void npc_2::show(QPainter *painter){
    icon temp;
    if((_direction+_start_dir)%2==0){
        if(_flag%2==0)   temp=_icon[0];
        else    temp=_icon[1];
    }
    else{
        if(_flag%2==0)   temp=_icon[2];
        else    temp=_icon[3];
    }
     painter->drawImage(this->get_myrect(),this->_pic,temp.get_rect());
}












