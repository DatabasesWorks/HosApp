#include "admin.h"
#include"mainwindow.h"

Admin::Admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_AddBulkPatientsButton_clicked()
{
   AddBulkWindow* abw = new AddBulkWindow();
   abw->show();
   close();
}

void Admin::on_CancelButton_clicked()
{
    MainWindow* mw = new MainWindow();
     mw->show();
     close();
}
