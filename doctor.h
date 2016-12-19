#ifndef DOCTOR_H
#define DOCTOR_H

#include <QWidget>
#include"ui_doctor.h"

namespace Ui {
class Doctor;
}

class Doctor : public QWidget
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = 0);
    ~Doctor();

private slots:
    void on_treatButton_clicked();
    void on_PrintPatientButton_clicked();
    void on_CancelButton_clicked();
    void on_ReportOfTreatedPatientButton_clicked();

private:
    Ui::Doctor *ui;
};

#endif // DOCTOR_H
