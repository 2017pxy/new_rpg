#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include<iostream>
int MainWindow::player_flag=1;
int MainWindow::scene_flag=1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _game.init_world();
    _game_b.init_world_b();
     _front_game.init_front_hill();
    timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(my_npc_move()));//timeoutslot()为自定义槽
    connect(timer2,SIGNAL(timeout()),this,SLOT(my_portal()));
    timer2->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_portal()
{
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    if(scene_flag==2)
        _game_b.portal_show(pa);
    else if(scene_flag==1)
        _game.portal_show(pa);
    else if(scene_flag==3)
        _front_game.portal_show(pa);
    pa->end();
    delete pa;
    this->repaint();
}

void MainWindow::my_npc_move()
{
    if(scene_flag==1)
    {
      _game.npc_move();
      if(_game.tp()==-2)
      {
          scene_flag=2;
          _game.player_move(-3);
          //cout<<"scene_flag is changed"<<" "<<scene_flag<<endl;
      }
      if(_game.tp()==3)
      {
          scene_flag=3;
          _game.player_move(3);
          //cout<<"scene_flag is changed"<<" "<<scene_flag<<endl;
      }
      //cout<<"next judge"<<endl;
    }
    else if(scene_flag==2)
    {
        _game_b.npc_move();
        if(_game_b.tp()==1)
        {
            scene_flag=1;
        }

    }
    else if(scene_flag==3)
    {
        _front_game.npc_move();
        if(_front_game.tp()==1)
        {
            scene_flag=1;

        }
    }
    this->repaint();
}

void MainWindow::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
   // cout<<"painter_event: "<<scene_flag<<endl;

    if(scene_flag==1)
    {
      this->_game.show(pa);
    }
    else if(scene_flag==2)
    {
        this->_game_b.show(pa);
    }
    else if(scene_flag==3)
    {
      this->_front_game.show(pa);
    }
    pa->end();
    delete pa;
}
void MainWindow::keyPressEvent(QKeyEvent *e)
{
    //direction = 1,2,3,4,5,6,7,8 for 上下左右
    if(e->key() == Qt::Key_A)
    {

        if(player_flag%2==0)
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(3);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(3);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(3);
            }
            this->repaint();
        }
        else
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(4);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(4);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(4);
            }
            //this->_game.player_move(4);
            this->repaint();
        }
        if(player_flag>10000)
        {
            player_flag=0;
        }

    }
    else if(e->key() == Qt::Key_D)
    {
        if(player_flag%2==0)
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(-3);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(-3);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(-3);
            }

            //this->_game.player_move(-3);
            this->repaint();
        }
       else
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(-4);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(-4);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(-4);
            }
            //this->_game.player_move(-4);
            this->repaint();
        }
        if(player_flag>10000)
        {
            player_flag=0;
        }
    }
    else if(e->key() == Qt::Key_W)
    {
        if(player_flag%2==0)
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(1);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(1);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(1);
            }
           // this->_game.player_move(1);
            this->repaint();
        }
        else
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(2);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(2);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(2);
            }
            //this->_game.player_move(2);
            this->repaint();
        }
        if(player_flag>10000)
        {
            player_flag=0;
        }
    }
    else if(e->key() == Qt::Key_S)
    {
        if(player_flag%2==0)
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(-1);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(-1);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(-1);
            }
            //this->_game.player_move(-1);
            this->repaint();
        }
        else
        {
            player_flag++;
            if(scene_flag==1)
            {
               this->_game.player_move(-2);
            }
            else if(scene_flag==2)
            {
                this->_game_b.player_move(-2);
            }
            else if(scene_flag==3)
            {
                this->_front_game.player_move(-2);
            }
            //this->_game.player_move(-2);
            this->repaint();
        }
        if(player_flag>10000)
        {
            player_flag=0;
        }
    }
}
/*void MainWindow::npc_2_move()
{
    /*if(scene==1)    _game.npc_move(-2);
    else if(scene==2)    _game_b.npc_move();
    this->repaint();
}*/

/*void MainWindow::portal_show(){

    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    if(scene==2)    _game_b._por.show(pa);
    else if(scene==1)   _game._por.show(pa);
    pa->end();
    delete pa;
    this->repaint();
}*/
