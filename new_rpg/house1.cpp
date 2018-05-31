#include "house1.h"
#include<icon.h>
#include<base.h>
#include<QImage>
QImage house1::_res= QImage("D:\\images\\house1.png");
void house1::show(QPainter *painter)
{
      icon _ic=this->get_myicon();
      painter->drawImage(this->get_myrect(),this->_res,_ic.get_rect());
}


