#ifndef DOCTORPRINTPATIENT_H
#define DOCTORPRINTPATIENT_H

#include <QWidget>
#include"doctor.h"
#include "ui_doctorprintpatient.h"

namespace Ui {
class DoctorPrintPatient;
}

class DoctorPrintPatient : public QWidget
{
    Q_OBJECT

public:
    explicit DoctorPrintPatient(QWidget *parent = 0);
    ~DoctorPrintPatient();

private slots:
    void on_NextPatientButton_clicked();

    void on_PrintAllButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DoctorPrintPatient *ui;
};

#endif // DOCTORPRINTPATIENT_H
