#include "hospitalwindow.h"
#include"mainwindow.h"

using namespace PatientList;

HospitalWindow::HospitalWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HospitalWindow)
{
    ui->setupUi(this);
}

HospitalWindow::~HospitalWindow()
{
    delete ui;
}

void HospitalWindow::on_GoBackButton_clicked()
{
    MainWindow* mw = new MainWindow();
    mw->show();
    close();
}

void HospitalWindow::on_printTriageButton_clicked()
{
    HospitalPrintPatient* hpp = new HospitalPrintPatient();
    hpp->show();
    close();
}

void HospitalWindow::on_treatAllPatientsButton_clicked()
{
    QEventLoop loop;
        int value;
        int percentTracker;
        if (patientList.size() > 0) value = 100 / patientList.size();
        else QMessageBox::information(this, tr("Empty"), tr("There are no patients to be treated."));
        while (!patientList.empty()) {
            patientList.top()->setTreated();
            QTimer::singleShot(1000, &loop, SLOT(quit()));
            loop.exec();
            percentTracker += value;
            ui->progressBar->setValue(percentTracker);
            Logger::log(patientList.top(), 1);
            treatedList.push_back(patientList.top());
            patientList.pop();
        }
        ui->progressBar->setValue(100);
        if (patientList.empty()) QMessageBox::information(this, tr("Treated"), tr("All patients have been treated."));
}
