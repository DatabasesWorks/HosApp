#include "hospitalprintpatient.h"
#include"mainwindow.h"

using namespace PatientList;

HospitalPrintPatient::HospitalPrintPatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HospitalPrintPatient)
{
    ui->setupUi(this);
}


HospitalPrintPatient::~HospitalPrintPatient()
{
    delete ui;
}

void HospitalPrintPatient::on_printPatientByDoctorButton_clicked()
{
    if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's awaiting treatment."));
        std::vector<Patient*> tempPatientList;
        ui->textBrowser->setText("Printing out a list of patient's sorted by doctor:\n ");
        while (!patientList.empty()) {
            tempPatientList.push_back(patientList.top());
            patientList.pop();
        }
        int tempListSize = tempPatientList.size();
        std::vector<Patient*>::iterator itr;
        CompareByDoctor comp;
        sort(tempPatientList.begin(), tempPatientList.end(), comp);
        for (int i = 0; i < tempListSize; ++i) {
            ui->textBrowser->append(tempPatientList[i]->print());
        }
        for (itr = tempPatientList.begin(); itr != tempPatientList.end(); ++itr) patientList.push(*itr);
}

void HospitalPrintPatient::on_printPatientsTriage_clicked()
{
    if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's awaiting treatment."));
        else {
            std::vector<Patient*> tempPatientList;
            ui->textBrowser->setText("The following patients are awaiting treatment:\n ");
            while (!patientList.empty()) {
                tempPatientList.push_back(patientList.top());
                ui->textBrowser->append(patientList.top()->print());
                patientList.pop();
            }
            std::vector<Patient*>::iterator itr;
            for (itr = tempPatientList.begin(); itr != tempPatientList.end(); ++itr) patientList.push(*itr);
        }
}


void HospitalPrintPatient::on_GoBackButton_clicked()
{
    HospitalWindow* hw = new HospitalWindow();
    hw->show();
    close();
}
