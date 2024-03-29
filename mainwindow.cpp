#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QPen>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <QColor>
#include <qapplication.h>
#include <QTimer>
#include<QAbstractSlider>
#include <QPoint>


#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //get random number
    srand(time(nullptr));
    BoardSetup();
    PlayerSetup();

}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow:: BoardSetup()
{

    //make graph
    scene = new QGraphicsScene;

    //grab Graphics view from ui
    QGraphicsView * view = ui->view;
    view->setScene(scene);
    int j=0; //y
    int k=0; //x
    for(int y=0; y<=800; y+=39)
    {
        int k=0;
        for (int x=0; x<=800; x+=39)
        {
            bool value;
            if(
                    //Row 1
                    (k==1 && j==0)||
                    (k==2 && j==0)||
                    (k==3 && j==0)||
                    (k==4 && j==0)||
                    (k==5 && j==0)||
                    (k==6 && j==0)||
                    (k==7 && j==0)||
                    (k==8 && j==0)||
                    (k==9 && j==0)||
                    (k==10 && j==0)||
                    (k==11 && j==0)||
                    (k==12 && j==0)||
                    (k==13 && j==0)||
                    (k==14 && j==0)||
                    (k==15 && j==0)||
                    (k==16 && j==0)||
                    (k==17 && j==0)||
                    (k==18 && j==0)||
                    (k==19 && j==0)||

                    //Row 2
                    (k==1 && j==1)||
                    (k==10 && j==1)||
                    (k==19 && j==1)||
                    //Row 3
                    (k==1 && j==2)||
                    (k==3 && j==2)||
                    (k==4 && j==2)||
                    (k==6 && j==2)||
                    (k==7 && j==2)||
                    (k==8 && j==2)||
                    (k==10 && j==2)||
                    (k==12 && j==2)||
                    (k==13 && j==2)||
                    (k==14 && j==2)||
                    (k==16 && j==2)||
                    (k==17 && j==2)||
                    (k==19 && j==2)||
                    //Row 4
                    (k==1 && j==3)||
                    (k==19 && j==3)||
                    //Row 5
                    (k==1 && j==4)||
                    (k==3 && j==4)||
                    (k==4 && j==4)||
                    (k==6 && j==4)||
                    (k==8 && j==4)||
                    (k==9 && j==4)||
                    (k==10 && j==4)||
                    (k==11 && j==4)||
                    (k==12 && j==4)||
                    (k==14 && j==4)||
                    (k==16 && j==4)||
                    (k==17 && j==4)||
                    (k==19 && j==4)||

                    //Row 6
                    (k==1 && j==5)||
                    (k==6 && j==5)||
                    (k==10 && j==5)||
                    (k==14 && j==5)||
                    (k==19 && j==5)||


                    //Row 7
                    (k==1 && j==6)||
                    (k==2 && j==6)||
                    (k==3 && j==6)||
                    (k==4 && j==6)||
                    (k==6 && j==6)||
                    (k==7 && j==6)||
                    (k==8 && j==6)||
                    (k==10 && j==6)||
                    (k==12 && j==6)||
                    (k==13 && j==6)||
                    (k==14 && j==6)||
                    (k==16 && j==6)||
                    (k==17 && j==6)||
                    (k==18 && j==6)||
                    (k==19 && j==6)||



                    //Row 8
                    (k==4 && j==7)||
                    (k==6 && j==7)||
                    (k==14 && j==7)||
                    (k==16 && j==7)||

                    //Row 9
                    (k==0 && j==8)||
                    (k==1 && j==8)||
                    (k==2 && j==8)||
                    (k==3 && j==8)||
                    (k==4 && j==8)||
                    (k==6 && j==8)||
                    (k==8 && j==8)||
                    (k==9 && j==8)||
                    (k==11 && j==8)||
                    (k==12 && j==8)||
                    (k==14 && j==8)||
                    (k==16 && j==8)||
                    (k==17 && j==8)||
                    (k==18 && j==8)||
                    (k==19 && j==8)||
                    (k==20 && j==8)||


                    //Row 10
                    (k==8 && j==9)||
                    (k==12 && j==9)||


                    //Row 11
                    (k==0 && j==10)||
                    (k==1 && j==10)||
                    (k==2 && j==10)||
                    (k==3 && j==10)||
                    (k==4 && j==10)||
                    (k==6 && j==10)||
                    (k==8 && j==10)||
                    (k==9 && j==10)||
                    (k==10 && j==10)||
                    (k==11 && j==10)||
                    (k==12 && j==10)||
                    (k==14 && j==10)||
                    (k==16 && j==10)||
                    (k==17 && j==10)||
                    (k==18 && j==10)||
                    (k==19 && j==10)||
                    (k==20 && j==10)||

                    //Row 12
                    (k==4 && j==11)||
                    (k==6 && j==11)||
                    (k==14 && j==11)||
                    (k==16 && j==11)||

                    //Row 13
                    (k==1 && j==12)||
                    (k==2 && j==12)||
                    (k==3 && j==12)||
                    (k==4 && j==12)||
                    (k==6 && j==12)||
                    (k==8 && j==12)||
                    (k==9 && j==12)||
                    (k==10 && j==12)||
                    (k==11 && j==12)||
                    (k==12 && j==12)||
                    (k==14 && j==12)||
                    (k==16 && j==12)||
                    (k==17 && j==12)||
                    (k==18 && j==12)||
                    (k==19 && j==12)||

                    //Row 14
                    (k==1 && j==13)||
                    (k==10 && j==13)||
                    (k==19 && j==13)||

                    //Row 15
                    (k==1 && j==14)||
                    (k==3 && j==14)||
                    (k==4 && j==14)||
                    (k==6 && j==14)||
                    (k==7 && j==14)||
                    (k==8 && j==14)||
                    (k==10 && j==14)||
                    (k==12 && j==14)||
                    (k==13 && j==14)||
                    (k==14 && j==14)||
                    (k==16 && j==14)||
                    (k==17 && j==14)||
                    (k==19 && j==14)||

                    //Row 16
                    (k==1 && j==15)||
                    (k==4 && j==15)||
                    (k==16 && j==15)||
                    (k==19 && j==15)||

                    //Row 17
                    (k==1 && j==16)||
                    (k==2 && j==16)||
                    (k==4 && j==16)||
                    (k==6 && j==16)||
                    (k==8 && j==16)||
                    (k==9 && j==16)||
                    (k==10 && j==16)||
                    (k==11 && j==16)||
                    (k==12 && j==16)||
                    (k==14 && j==16)||
                    (k==16 && j==16)||
                    (k==18 && j==16)||
                    (k==19 && j==16)||

                    //Row 18

                    (k==1 && j==17)||
                    (k==6 && j==17)||
                    (k==10 && j==17)||
                    (k==14 && j==17)||
                    (k==19 && j==17)||

                    //Row 19
                    (k==1 && j==18)||
                    (k==3 && j==18)||
                    (k==4 && j==18)||
                    (k==5 && j==18)||
                    (k==6 && j==18)||
                    (k==7 && j==18)||
                    (k==8 && j==18)||
                    (k==10 && j==18)||
                    (k==12 && j==18)||
                    (k==13 && j==18)||
                    (k==14 && j==18)||
                    (k==15 && j==18)||
                    (k==16 && j==18)||
                    (k==17 && j==18)||
                    (k==19 && j==18)||
                    //Row 20
                    (k==1 && j==19)||
                    (k==19 && j==19)||
                    //Row 21
                    (k==1 && j==20)||
                    (k==2 && j==20)||
                    (k==3 && j==20)||
                    (k==4 && j==20)||
                    (k==5 && j==20)||
                    (k==6 && j==20)||
                    (k==7 && j==20)||
                    (k==8 && j==20)||
                    (k==9 && j==20)||
                    (k==10 && j==20)||
                    (k==11 && j==20)||
                    (k==12 && j==20)||
                    (k==13 && j==20)||
                    (k==14 && j==20)||
                    (k==15 && j==20)||
                    (k==16 && j==20)||
                    (k==17 && j==20)||
                    (k==18 && j==20)||
                    (k==19 && j==20)
                    )
            {
                value=false;
            }
            else
            {
                value=true;
            }
            board[j][k]=(new square(x,y,value));
            scene->addItem(board[j][k]);
            x++;
            k++;
        }
        j++;
        y++;
    }

}

void MainWindow::PlayerSetup()
{
    //humans
    players[0]=new player(80,40,type::p1, true); //yellow
    players[1]=new player(720,760,type::p2, true); //green
    //bots
    players[2]=new player(200,200,type::g1, false); //cyan
    players[3]=new player(720,40,type::g2, false); //
    players[4]=new player(80,760,type::g3, false); //red
    players[5]=new player(600,520,type::g4,false); //grey

    for (int i=0; i<6; i++)
    {
        scene->addItem(players[i]);
    }
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_A: //p1 left
        {
            int potential_x=(players[0]->x_-40);
            int potential_y=(players[0]->y_);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if (board[potential_y][potential_x]->space_)
            {
                players[0]->x_=players[0]->x_-40;
                scene->removeItem(players[0]);
                scene->addItem(players[0]);
            }
            break;
        }
        case Qt::Key_D: //p1 right
        {
            int potential_x=(players[0]->x_+40);
            int potential_y=(players[0]->y_);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[0]->x_=players[0]->x_+40;
                scene->removeItem(players[0]);
                scene->addItem(players[0]);
            }
            break;
        }
        case Qt::Key_W: //p1 up
        {
            int potential_x=(players[0]->x_);
            int potential_y=(players[0]->y_-40);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[0]->y_=players[0]->y_-40;
                scene->removeItem(players[0]);
                scene->addItem(players[0]);
            }
            break;
        }
        case Qt::Key_S: //p1 down
        {
            int potential_x=(players[0]->x_);
            int potential_y=(players[0]->y_+40);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[0]->y_=players[0]->y_+40;
                scene->removeItem(players[0]);
                scene->addItem(players[0]);
            }
            break;
        }
        case Qt::Key_J: //p2 left
        {
            int potential_x=(players[1]->x_-40);
            int potential_y=(players[1]->y_);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if (board[potential_y][potential_x]->space_)
            {
                players[1]->x_=players[1]->x_-40;
                scene->removeItem(players[1]);
                scene->addItem(players[1]);
            }
            break;
        }
        case Qt::Key_L: //p2 right
        {
            int potential_x=(players[1]->x_+40);
            int potential_y=(players[1]->y_);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[1]->x_=players[1]->x_+40;
                scene->removeItem(players[1]);
                scene->addItem(players[1]);
            }
            break;
        }
        case Qt::Key_I: //p2 up
        {
            int potential_x=(players[1]->x_);
            int potential_y=(players[1]->y_-40);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[1]->y_=players[1]->y_-40;
                scene->removeItem(players[1]);
                scene->addItem(players[1]);
            }
            break;
        }
        case Qt::Key_K: //p2 down
        {
            int potential_x=(players[1]->x_);
            int potential_y=(players[1]->y_+40);
            potential_x=potential_x/40;
            potential_y=potential_y/40;
            if(board[potential_y][potential_x]->space_)
            {
                players[1]->y_=players[1]->y_+40;
                scene->removeItem(players[1]);
                scene->addItem(players[1]);
            }
            break;
        }
    }

}
