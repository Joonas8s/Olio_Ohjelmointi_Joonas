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




void MainWindow::on_add_clicked()
{
    if(tila == 3)
    {
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1 + num2;
    QString resStr = QString::number(result, 'f', 2);
    ui->result->setText(resStr);
    qDebug() << "Plus:" << result << "=" << num1 << "+" << num2;

    tila = 1;
    qDebug() << "Laskun jälkeen palataan tila" << tila;
    }
    else
    {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
    setActiveControls();
}



void MainWindow::on_sub_clicked()
{
    if(tila == 3)
    {
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1 - num2;
    QString resStr = QString::number(result, 'f', 2);
    ui->result->setText(resStr);
    qDebug() << "Miinus:" << result << "=" << num1 << "-" << num2;

    tila = 1;
    qDebug() << "Laskun jälkeen palataan tila" << tila;
    }
    else
    {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
    setActiveControls();
}


void MainWindow::on_mul_clicked()
{
    if(tila == 3)
    {
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1 * num2;
    QString resStr = QString::number(result, 'f', 2);
    ui->result->setText(resStr);
    qDebug() << "Kertaa:" << result << "=" << num1 << "*" << num2;
    tila = 1;
    qDebug() << "Laskun jälkeen palataan tila" << tila;
    }
    else
    {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
    setActiveControls();
}


void MainWindow::on_div_clicked()
{
    if(tila == 3)
    {
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1 / num2;
    QString resStr = QString::number(result, 'f', 2);
    ui->result->setText(resStr);
    qDebug() << "Jako:" << result << "=" << num1 << "/" << num2;

    tila = 1;
    qDebug() << "Laskun jälkeen palataan tila" << tila;
    }
    else
    {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
    setActiveControls();
}


void MainWindow::on_clear_clicked()
{
    int num1 = 0;
    QString num1Str = QString::number(num1);
    ui->num1->setText(num1Str);

    int num2 = 0;
    QString num2Str = QString::number(num2);
    ui->num2->setText(num2Str);

    float result = 0;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << "Nolla:" << result << "Nolla:" << num1 << "Nolla:" << num2;
    tila = 1;
    setActiveControls();
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero=" << n;
    QString str = QString::number(n);

    if (tila == 1)
    {
        qDebug() << "Elementti 1";
        ui->num1->setText(ui->num1->text() + str);
    }
    else if (tila == 2)
    {
        qDebug() << "Elementti 2";
        ui->num2->setText(ui->num2->text() + str);
    }
    else
    {
        ui->result->setText(ui->result->text() + str);
    }
}




void MainWindow::on_N1_clicked()
{
    QString strN1 = ui->N1->text();
    int n = strN1.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N2_clicked()
{
    QString strN2 = ui->N2->text();
    int n = strN2.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString strN3 = ui->N3->text();
    int n = strN3.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString strN4 = ui->N4->text();
    int n = strN4.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString strN5 = ui->N5->text();
    int n = strN5.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString strN6 = ui->N6->text();
    int n = strN6.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString strN7 = ui->N7->text();
    int n = strN7.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString strN8 = ui->N8->text();
    int n = strN8.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString strN9 = ui->N9->text();
    int n = strN9.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString strN0 = ui->N0->text();
    int n = strN0.toInt();
    numberClickHandler(n);
}


void MainWindow::on_enter_clicked()
{
    if(tila == 1)
    {
        tila = 2;
    }
    else if(tila == 2)
    {
        tila = 3;
    }
    else if(tila == 3)
    {
        tila = 1;
    }
    setActiveControls();
}

void MainWindow::setActiveControls()
{
    if (tila == 1)
    {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
    }
    else if (tila == 2)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
    }
    else if (tila == 3)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
    }
}

