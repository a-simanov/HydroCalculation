#ifndef CALCULATECYLINDER_H
#define CALCULATECYLINDER_H

#include <QMainWindow>

#include "mainwindow.h"


namespace Ui {
class calculateCylinder;
}

class calculateCylinder : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculateCylinder(QWidget *parent = nullptr);
    ~calculateCylinder();
    void calcCylinder();
    void showWindow();

private slots:
    void on_le_diametr_p_textChanged(const QString &arg1);

    void on_le_length_textChanged(const QString &arg1);

    void on_le_diametr_s_textChanged(const QString &arg1);

    void on_pb_show_pump_calc_clicked();

private:
    Ui::calculateCylinder *ui;
    MainWindow main_window_;
    double diametr_p_;
    double length_;
    double vol_p_;
    double diametr_s_;
    double vol_s_;
    double work_time_;
    double press_;
    double empty_time_;
};

#endif // CALCULATECYLINDER_H
