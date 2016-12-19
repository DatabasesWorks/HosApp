#include "doctorprintpatient.h"
#include"mainwindow.h"

using namespace PatientList;

DoctorPrintPatient::DoctorPrintPatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoctorPrintPatient)
{
    ui->setupUi(this);
}

DoctorPrintPatient::~DoctorPrintPatient()
{
    delete ui;
}

void DoctorPrintPatient::on_NextPatientButton_clicked()
{
    if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's in the queue."));
    else {
        ui->textBrowser->setText("The following patient has the highest priorty:\n ");
        QString info = patientList.top()->print();
        ui->textBrowser->append(info);
    }
}

void DoctorPrintPatient::on_PrintAllButton_clicked()
{
    if (treatedList.empty()) QMessageBox::information(this, tr("Empty"), tr("No patient's have been treated."));
    else {
        ui->textBrowser->setText("The following patient's have already been treated:\n");
        for (unsigned int i = 0; i < treatedList.size(); i++) ui->textBrowser->append(treatedList[i]->print());
    }
}

void DoctorPrintPatient::on_pushButton_2_clicked()
{
    Doctor* dw = new Doctor();
    dw->show();
    close();
}
