#include "mainwindow.h"

using namespace PatientList;

QueryPatientWindow::QueryPatientWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryPatientWindow)
{
    ui->setupUi(this);
}

QueryPatientWindow::~QueryPatientWindow()
{
    delete ui;
}

void QueryPatientWindow::on_pushButton_2_clicked()
{
     Doctor* dw = new Doctor();
     dw->show();
     close();
}

void QueryPatientWindow::on_pushButton_clicked()
{
    QString f = ui->lineEdit->text();
        QString l = ui->lineEdit_2->text();
        std::vector<Patient*> tmp;
        std::vector<Patient*>::iterator itr;
        bool found = false;
        while (!patientList.empty()) {
            tmp.push_back(patientList.top());
            patientList.pop();
        }
        for (unsigned int i = 0; i < tmp.size(); i++) {
            if (tmp[i]->getFirstName() == f && tmp[i]->getLastName() == l) {
                ui->textBrowser->setText("Pulling patient information from triage...\n");
                ui->textBrowser->append(tmp[i]->print());
                found = true;
            }
        }
        for (unsigned int i = 0; i < treatedList.size(); i++) {
            if (treatedList[i]->getFirstName() == f && treatedList[i]->getLastName() == l) {
                ui->textBrowser->setText("Pulling patient information from the list of treated patients...\n");
                ui->textBrowser->append(tmp[i]->print());
                found = true;
            }
        }
        for (itr = tmp.begin(); itr != tmp.end(); ++itr) {
            patientList.push(*itr);
        }
        if (found == false) ui->textBrowser->setText("Patient was not found.");
}
