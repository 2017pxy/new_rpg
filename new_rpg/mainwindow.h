#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"world.h"
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
#include<QTime>
#include"front_hill.h"
#include"world_back.h"
#include"portal.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);

public slots:
    void my_npc_move();
    void my_portal();
private:
    Ui::MainWindow *ui;
    world _game;
    front_hill _front_game;
    world_back _game_b;
    portal _port_2,_port_1_1;
    QTimer *timer;
    QTimer *timer2;
    static int player_flag;
    static int scene_flag;
};

#endif // MAINWINDOW_H
