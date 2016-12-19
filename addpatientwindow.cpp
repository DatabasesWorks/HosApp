#include"mainwindow.h"

using namespace PatientList;

addPatientWindow::addPatientWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addPatientWindow)
{
    ui->setupUi(this);
}

addPatientWindow::~addPatientWindow()
{
    delete ui;
}

void addPatientWindow::on_AddPatient_clicked()
{
        QString fName = ui->firstNameEdit->text();
        QString mName = ui->middleNameEdit->text();
        QString lName = ui->lastNameEdit->text();
        QString suffixValue = ui->suffixEdit->text();
        QString doctorValue = ui->doctorEdit->text();
        int treatedValue = ui->treatedEdit->text().toInt();
        int priorityValue = ui->priorityEdit->text().toInt();
        if (fName == "" || lName == "" || ((treatedValue != 1) && (treatedValue != 0))) QMessageBox::information(this, tr("Error"), tr("Please enter a valid value in all required fields."));
        else {
        Patient* patient = new Patient(fName, mName, lName, suffixValue, ailmentList, doctorValue, treatedValue, priorityValue);
         Logger::log(patient, 0);
         patientList.push(patient);
         QMessageBox::information(this, tr("Added!"), tr("Successfully added a patient."));
        }
}

void addPatientWindow::on_AilmentButton_clicked()
{
    QString ailment = ui->ailmentEdit->text();
    ailmentList.push_back(ailment);
    ui->ailmentEdit->setText(" ");

}

void addPatientWindow::on_Cancel_clicked()
{
    NurseWindow* nw = new NurseWindow();
    nw->show();
    close();
}

