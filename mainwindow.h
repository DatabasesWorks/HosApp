#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include"addpatientwindow.h"
#include"admin.h"
#include"addbulkwindow.h"
#include"nursewindow.h"
#include"patient.h"
#include"patientlist.h"
#include"patientlistclass.h"
#include "doctor.h"
#include"doctorprintpatient.h"
#include"querypatientwindow.h"
#include"qmessagebox.h"
#include"hospitalwindow.h"
#include"hospitalprintpatient.h"
#include"help.h"
#include"logger.h"
#include<QDebug>
#include <QTimer>
#include<QString>
#include<vector>
#include<queue>
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_NurseButton_clicked();
    void on_DoctorButton_clicked();
    void on_AdminButton_clicked();
    void on_HelpButton_clicked();
    void on_QuitButton_clicked();
    void on_HospitalStaffButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
