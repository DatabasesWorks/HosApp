#include "help.h"
#include"mainwindow.h"


Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}

void Help::on_GoBackButton_clicked()
{
    MainWindow* mw = new MainWindow();
    mw->show();
    close();
}
