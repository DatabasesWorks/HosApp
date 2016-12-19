
#include"doctor.h"
#include"mainwindow.h"

using namespace PatientList;

Doctor::Doctor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Doctor)
{
    ui->setupUi(this);
}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::on_treatButton_clicked()
{
    if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patients awaiting treatment."));
        else {
            QMessageBox::information(this, tr("Treated"), tr("Treated the patient with the highest priority."));
            patientList.top()->setTreated();
            Logger::log(patientList.top(), 1);
            treatedList.push_back(patientList.top());
            patientList.pop();
        }

}

void Doctor::on_PrintPatientButton_clicked()
{
    DoctorPrintPatient* dpp = new DoctorPrintPatient();
    dpp->show();
    close();
}

void Doctor::on_CancelButton_clicked()
{
    MainWindow* mw = new MainWindow();
    mw->show();
    close();
}

void Doctor::on_ReportOfTreatedPatientButton_clicked()
{
    QueryPatientWindow* qpw = new QueryPatientWindow();
    qpw->show();
    close();
}


