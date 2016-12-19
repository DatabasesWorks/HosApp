#ifndef HOSPITALWINDOW_H
#define HOSPITALWINDOW_H

#include <QWidget>
#include "ui_hospitalwindow.h"

namespace Ui {
class HospitalWindow;
}

class HospitalWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HospitalWindow(QWidget *parent = 0);
    ~HospitalWindow();

private slots:
    void on_GoBackButton_clicked();

    void on_printTriageButton_clicked();

    void on_treatAllPatientsButton_clicked();

private:
    Ui::HospitalWindow *ui;
};

#endif // HOSPITALWINDOW_H
