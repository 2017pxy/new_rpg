#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"world.h"
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
#include<QTime>
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
private:
    Ui::MainWindow *ui;
    world _game;
    QTimer *timer;
    QTimer *timer2;
    static int player_flag;
};

#endif // MAINWINDOW_H
