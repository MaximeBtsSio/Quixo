#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "piece.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{    

    ui -> setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    piece * mon_item;
    QPixmap *mon_image =new QPixmap ("/home/etudiant/Téléchargements/imageneutre.jpg");

    for (int j=0; j<5;j++)
    {

        for (int i=0; i<5; i++)
            {
        mon_item = new piece();
        mon_item -> setPixmap(*mon_image);
        //definit la position
        mon_item -> setPos (i*45, j*45);
        //definit l'echelle
        //mon_item -> setScale (0.9);
        ma_scene -> addItem(mon_item);
            }
    }
    ui->ma_vue->setScene(ma_scene);
}





MainWindow::~MainWindow()
{
    delete ui;
}
