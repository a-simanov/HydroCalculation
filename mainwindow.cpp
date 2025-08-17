#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <cmath>
#include <QDebug>

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

void MainWindow::on_le_q_textChanged(const QString &arg1)
{
    displacement_ = (ui->le_q->text()).toDouble();
    calculatePump();
}


void MainWindow::on_le_p_textChanged(const QString &arg1)
{
    pressure_ = (ui->le_p->text()).toDouble();
    calculatePump();
}


void MainWindow::on_le_n_textChanged(const QString &arg1)
{
    speed_ = (ui->le_n->text()).toDouble();
    calculatePump();
}


void MainWindow::on_le_kpd_textChanged(const QString &arg1)
{
    efficiency_ = (ui->le_kpd->text()).toDouble();
    calculatePump();
}

void MainWindow::calculatePump () {
    productivity_ = (displacement_ * speed_ * efficiency_) / 1000.0;
    ui->le_Q->setText(QString::number(productivity_));

    torque_ = (displacement_ * pressure_) / (20.0 * M_PI);
    ui->le_M->setText(QString::number(torque_));

    power_ = productivity_ * pressure_ / 600.0;
    ui->le_P->setText(QString::number(power_));
}



void MainWindow::on_le_motor_q_textChanged(const QString &arg1)
{
    motor_displacement_ = (ui->le_motor_q->text()).toDouble();
    calculateMotor ();
}

void MainWindow::calculateMotor () {
    motor_speed_= (productivity_ * 1000) / (motor_displacement_ * efficiency_);
    ui->le_motor_n->setText(QString::number(motor_speed_));

    motor_torque_ = (motor_displacement_ * pressure_ * 0.85) / (20.0 * M_PI);
    ui->le_motor_M->setText(QString::number(motor_torque_));
}

double MainWindow::getProductivity () {
    return productivity_;
};
double MainWindow::getPressure () {
    return pressure_;
};


void MainWindow::on_pb_cylinder_calc_clicked()
{
    emit showCylinderCalc();
    this->hide();
}

