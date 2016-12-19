#ifndef NURSEWINDOW_H
#define NURSEWINDOW_H

#include"ui_nursewindow.h"

namespace Ui {
class NurseWindow;
}

class NurseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NurseWindow(QWidget *parent = 0);
    ~NurseWindow();

private slots:
    void on_addPatientButton_clicked();
    void on_goBackButton_clicked();

private:
    Ui::NurseWindow *ui;
};

#endif // NURSEWINDOW_H
