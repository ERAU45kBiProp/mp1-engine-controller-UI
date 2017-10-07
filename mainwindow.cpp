#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

int comPort;

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connectSerialButton_clicked()
{
    qDebug("Button pressed! Good job fucktard!");
    //qDebug("comPort is" + comPort);
}


void MainWindow::on_comPortList_currentIndexChanged(int index)
{
    qDebug("new value selected");
    comPort =
    qDebug() << comPort;
}
