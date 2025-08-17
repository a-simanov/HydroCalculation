#include "calculatecylinder.h"
#include "ui_calculatecylinder.h"

calculateCylinder::calculateCylinder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculateCylinder)
{
    ui->setupUi(this);
    connect(&main_window_, &MainWindow::showCylinderCalc, this, &calculateCylinder::showWindow);
}

calculateCylinder::~calculateCylinder()
{
    delete ui;
}

void calculateCylinder::on_le_diametr_p_textChanged(const QString &arg1)
{
    diametr_p_ = (ui->le_diametr_p->text()).toDouble();
    calculateCylinder ();
}


void calculateCylinder::on_le_length_textChanged(const QString &arg1)
{
    length_ = (ui->le_length->text()).toDouble();
    calculateCylinder ();
}


void calculateCylinder::on_le_diametr_s_textChanged(const QString &arg1)
{
    diametr_s_ = (ui->le_diametr_s->text()).toDouble();
    calculateCylinder ();
}

void calculateCylinder::calcCylinder () {
    vol_p_ = (diametr_p_ * diametr_p_ * M_PI * length_ / 4) / 1000000;
    ui->le_vol_p->setText(QString::number(vol_p_));

    vol_s_ = ((diametr_p_ * diametr_p_ * M_PI * length_ / 4) - (diametr_s_ * diametr_s_ * M_PI * length_ / 4)) / 1000000;
    ui->le_vol_s->setText(QString::number(vol_s_));

    work_time_ = vol_p_ * 60 / main_window_.getProductivity();
    ui->le_work_time->setText(QString::number(work_time_));

    press_ = (main_window_.getPressure() * diametr_p_ * diametr_p_ * M_PI / 40) / 9.8;
    ui->le_press->setText(QString::number(press_));

    empty_time_ = vol_s_ * 60 / main_window_.getProductivity();
    ui->le_empty_time->setText(QString::number(empty_time_));
}

void calculateCylinder::showWindow () {
    this->show();
}

void calculateCylinder::on_pb_show_pump_calc_clicked()
{
    main_window_.show();
    this->close();
}

