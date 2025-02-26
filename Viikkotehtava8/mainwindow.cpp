#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText("Select mode");
}

MainWindow::~MainWindow()
{
    if (timer)
    {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_startGameBut_clicked()
{
    if(gameTime == 0)
    {
        ui->label->setText("Valitse aika ennen kuin aloitat pelin");
    }

    else if (gameOn == false)
    {
    gameOn = true;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    // käynnistetään ajastin
    timer = new QTimer(this);
    connect(timer,              // lähettävä olio
            &QTimer::timeout,   // signaali
            this,               // vastaanottava olio
            &MainWindow::updateProgressBar);    //slotti
    timer->setInterval(1000); // 1000ms = 1s
    timer->start();
    }
}


void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1)
    {
        ui->label->setText("Pelaajan 1 aika kuluu");
        p1Time = p1Time-1;
        ui->progressBar1->setValue(p1Time);
        if(p1Time == 0)
        {
            timer->stop();
            on_stopGameBut_clicked();
            gameOn = false;
        }
    }
    else if (currentPlayer == 2)
    {
        ui->label->setText("Pelaajan 2 aika kuluu");
        p2Time = p2Time-1;
        ui->progressBar2->setValue(p2Time);
        if(p2Time == 0)
        {
            timer->stop();
            on_stopGameBut_clicked();
            gameOn = false;
        }
    }
}



void MainWindow::on_p1end_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_p2end_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_stopGameBut_clicked()
{
    timer->stop();
    gameTime = 0;
    gameOn = false;
    currentPlayer = 1;
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    ui->label->setText("Select mode");

}


void MainWindow::on_timer300s_clicked()
{
    if (gameOn == false)
    {
    gameTime = 300;
    ui->label->setText("Peliaika 5 minuuttia");
    ui->progressBar1->setRange(0, 300);
    ui->progressBar2->setRange(0, 300);
    ui->progressBar1->setValue(300);
    ui->progressBar2->setValue(300);
    }
}


void MainWindow::on_timer120s_clicked()
{
    if (gameOn == false)
    {
    gameTime = 120;
    ui->label->setText("Peliaika 120 sekuntia");
    ui->progressBar1->setRange(0, 120);
    ui->progressBar2->setRange(0, 120);
    ui->progressBar1->setValue(120);
    ui->progressBar2->setValue(120);
    }
}

