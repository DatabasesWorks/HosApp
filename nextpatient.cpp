#include "nextpatient.h"
#include "ui_nextpatient.h"

NextPatient::NextPatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NextPatient)
{
    ui->setupUi(this);
}

NextPatient::~NextPatient()
{
    delete ui;
}
