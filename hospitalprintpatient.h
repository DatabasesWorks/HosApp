#ifndef HOSPITALPRINTPATIENT_H
#define HOSPITALPRINTPATIENT_H

#include <QWidget>
#include"ui_hospitalprintpatient.h"

namespace Ui {
class HospitalPrintPatient;
}

class HospitalPrintPatient : public QWidget
{
    Q_OBJECT

public:
    explicit HospitalPrintPatient(QWidget *parent = 0);
    ~HospitalPrintPatient();

private slots:
    void on_printPatientByDoctorButton_clicked();

    void on_printPatientsTriage_clicked();

    void on_GoBackButton_clicked();

private:
    Ui::HospitalPrintPatient *ui;
};

#endif // HOSPITALPRINTPATIENT_H
