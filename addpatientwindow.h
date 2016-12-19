#ifndef ADDPATIENTWINDOW_H
#define ADDPATIENTWINDOW_H

#include <QWidget>
#include"ui_addpatientwindow.h"

namespace Ui {
class addPatientWindow;
}

class addPatientWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addPatientWindow(QWidget *parent = 0);
    ~addPatientWindow();

private slots:
        void on_AddPatient_clicked();
        void on_AilmentButton_clicked();
        void on_Cancel_clicked();

private:
    Ui::addPatientWindow *ui;
    std::vector<QString> ailmentList;
};

#endif // ADDPATIENTWINDOW_H
