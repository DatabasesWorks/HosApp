#ifndef ADDBULKWINDOW_H
#define ADDBULKWINDOW_H

#include <QWidget>
#include "ui_addbulkwindow.h"

namespace Ui {
class AddBulkWindow;
}

class AddBulkWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddBulkWindow(QWidget *parent = 0);
    ~AddBulkWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddBulkWindow *ui;
};

#endif // ADDBULKWINDOW_H
