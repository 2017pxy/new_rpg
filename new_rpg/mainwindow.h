#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"world.h"
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
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
private:
    Ui::MainWindow *ui;
    world _game;

};

#endif // MAINWINDOW_H
