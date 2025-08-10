#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void calculatePump();
    void calculateMotor();
    void calculateCylinder();

private slots:
    void on_le_q_textChanged(const QString &arg1);

    void on_le_p_textChanged(const QString &arg1);

    void on_le_n_textChanged(const QString &arg1);

    void on_le_kpd_textChanged(const QString &arg1);

    void on_le_motor_q_textChanged(const QString &arg1);


    void on_le_diametr_p_textChanged(const QString &arg1);

    void on_le_length_textChanged(const QString &arg1);

    void on_le_diametr_s_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    double displacement_; //q
    double pressure_; //p
    double speed_; //n
    double efficiency_; //KPD
    double productivity_; //Q
    double torque_; //M
    double power_; //P

    double motor_displacement_;
    double motor_speed_;
    double motor_torque_;

    double diametr_p_;
    double length_;
    double vol_p_;
    double diametr_s_;
    double vol_s_;
    double work_time_;
    double press_;
    double empty_time_;
};
#endif // MAINWINDOW_H
