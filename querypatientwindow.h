#ifndef QUERYPATIENTWINDOW_H
#define QUERYPATIENTWINDOW_H

#include <QWidget>
#include"ui_querypatientwindow.h"

namespace Ui {
class QueryPatientWindow;
}

class QueryPatientWindow : public QWidget
{
    Q_OBJECT

public:
    explicit QueryPatientWindow(QWidget *parent = 0);
    ~QueryPatientWindow();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::QueryPatientWindow *ui;
};

#endif // QUERYPATIENTWINDOW_H
