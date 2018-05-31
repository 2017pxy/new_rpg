#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
int MainWindow::player_flag=1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _game.init_world();
    timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(my_npc_move()));//timeoutslot()为自定义槽
    timer2->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_npc_move()
{
    _game.npc_move();
    this->repaint();
}

void MainWindow::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
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
            this->_game.player_move(3);

            this->repaint();
        }

        else
        {
            player_flag++;
            this->_game.player_move(4);
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
            this->_game.player_move(-3);
            this->repaint();
        }
       else
        {
            player_flag++;
            this->_game.player_move(-4);
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
            this->_game.player_move(1);
            this->repaint();
        }
        else
        {
            player_flag++;
            this->_game.player_move(2);
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
            this->_game.player_move(-1);
            this->repaint();
        }
        else
        {
            player_flag++;
            this->_game.player_move(-2);
            this->repaint();
        }
        if(player_flag>10000)
        {
            player_flag=0;
        }
    }
}
