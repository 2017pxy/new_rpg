#include "tree_pic.h"
#include<icon.h>
#include<base.h>
#include<QImage>
QImage tree_pic::_res= QImage("D:\\images\\tree_pic.png");
void tree_pic::show(QPainter *painter)
{

      icon _ic=this->get_myicon();
      painter->drawImage(this->get_myrect(),this->_res,_ic.get_rect());
}

