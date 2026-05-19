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
    friend class calculateCylinder;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();    

private slots:
    void on_le_q_textChanged(const QString &arg1);

    void on_le_p_textChanged(const QString &arg1);

    void on_le_n_textChanged(const QString &arg1);

    void on_le_kpd_textChanged(const QString &arg1);

    void on_le_motor_q_textChanged(const QString &arg1);

    void on_pb_cylinder_calc_clicked();

signals:
    void showCylinderCalc();

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

    void calculatePump();
    void calculateMotor();
    double getProductivity ();
    double getPressure ();
};
#endif // MAINWINDOW_H
