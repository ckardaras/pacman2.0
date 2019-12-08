#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include <QPen>
#include <QBrush>
#include <QTimer>
#include <QSlider>
#include "square.h"
#include "player.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void BoardSetup();
    void PlayerSetup();



protected:
    void keyPressEvent(QKeyEvent *event);




private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene; //will contain graph
    int turn=0;
    square* board[21][21];
    player* players[6];


private slots:

};
#endif // MAINWINDOW_H
