#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _game.init_world();
}

MainWindow::~MainWindow()
{
    delete ui;
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
        this->_game.player_move(5);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {

            }
        }
        this->_game.player_move(6);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {
//增加运行时间
            }
        }
    }
    else if(e->key() == Qt::Key_D)
    {
        this->_game.player_move(7);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {

            }
        }
        this->_game.player_move(8);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {
//增加运行时间
            }
        }
    }
    else if(e->key() == Qt::Key_W)
    {
        this->_game.player_move(1);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {
//增加运行时间
            }
        }
        this->_game.player_move(2);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {
//增加运行时间
            }
        }
    }
    else if(e->key() == Qt::Key_S)
    {
        this->_game.player_move(3);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {

            }
        }
        this->_game.player_move(4);
        this->repaint();
        for(int i=0;i<10000;i++)
        {
            for(int j=0;j<5000;j++)
            {
//增加运行时间
            }
        }
    }
    //this->repaint();
}
