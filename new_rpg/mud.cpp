#include "mud.h"
#include<icon.h>
#include<base.h>
#include<QImage>
QImage mud::_res= QImage("D:\\images\\mud_road.jpg");
void mud::show(QPainter *painter)
{
      icon _ic=this->get_myicon();
      painter->drawImage(this->get_myrect(),this->_res,_ic.get_rect());
}
