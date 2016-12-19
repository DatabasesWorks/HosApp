#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_NurseButton_clicked()
{
    NurseWindow* nw = new NurseWindow();
    nw->show();
    close();
}

void MainWindow::on_DoctorButton_clicked()
{
    Doctor* dw = new Doctor();
    dw->show();
    close();
}

void MainWindow::on_AdminButton_clicked()
{
    Admin* aw = new Admin();
    aw->show();
    close();
}

void MainWindow::on_HelpButton_clicked()
{
    Help* hw = new Help();
    hw->show();
    close();
}

void MainWindow::on_QuitButton_clicked()
{
    close();
}

void MainWindow::on_HospitalStaffButton_clicked()
{
    HospitalWindow* hw = new HospitalWindow();
    hw->show();
    close();
}
