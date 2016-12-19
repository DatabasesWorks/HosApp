#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "ui_admin.h"

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    void on_AddBulkPatientsButton_clicked();
    void on_CancelButton_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
