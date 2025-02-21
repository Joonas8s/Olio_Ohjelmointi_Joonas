#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Lisaa_clicked()
{
    QString str = ui->numeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero=" << num;
    num++;
    qDebug() << "Kasvatettu numero=" << num;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}


void MainWindow::on_Reset_clicked()
{
    QString str = ui->numeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero=" << num;
    num = 0;
    qDebug() << "Kasvatettu numero=" << num;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}

