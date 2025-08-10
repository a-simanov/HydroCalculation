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

void MainWindow::on_le_diametr_p_textChanged(const QString &arg1)
{
    diametr_p_ = (ui->le_diametr_p->text()).toDouble();
    calculateCylinder ();
}


void MainWindow::on_le_length_textChanged(const QString &arg1)
{
    length_ = (ui->le_length->text()).toDouble();
    calculateCylinder ();
}


void MainWindow::on_le_diametr_s_textChanged(const QString &arg1)
{
    diametr_s_ = (ui->le_diametr_s->text()).toDouble();
    calculateCylinder ();
}

void MainWindow::calculateCylinder () {
    vol_p_ = (diametr_p_ * diametr_p_ * M_PI * length_ / 4) / 1000000;
    ui->le_vol_p->setText(QString::number(vol_p_));

    vol_s_ = ((diametr_p_ * diametr_p_ * M_PI * length_ / 4) - (diametr_s_ * diametr_s_ * M_PI * length_ / 4)) / 1000000;
    ui->le_vol_s->setText(QString::number(vol_s_));

    work_time_ = vol_p_ * 60 / productivity_;
    ui->le_work_time->setText(QString::number(work_time_));

    press_ = (pressure_ * diametr_p_ * diametr_p_ * M_PI / 40) / 9.8;
    ui->le_press->setText(QString::number(press_));

    empty_time_ = vol_s_ * 60 / productivity_;
    ui->le_empty_time->setText(QString::number(empty_time_));
}
