
#include"mainwindow.h"

NurseWindow::NurseWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NurseWindow)
{
    ui->setupUi(this);
}

NurseWindow::~NurseWindow()
{
    delete ui;
}

void NurseWindow::on_addPatientButton_clicked()
{
    addPatientWindow* pw = new addPatientWindow();
    pw->show();
    close();
}

void NurseWindow::on_goBackButton_clicked()
{
    MainWindow* mw = new MainWindow();
    mw->show();
    close();

}
