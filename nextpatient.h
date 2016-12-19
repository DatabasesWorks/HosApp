#ifndef NEXTPATIENT_H
#define NEXTPATIENT_H

#include <QWidget>

namespace Ui {
class NextPatient;
}

class NextPatient : public QWidget
{
    Q_OBJECT

public:
    explicit NextPatient(QWidget *parent = 0);
    ~NextPatient();

private:
    Ui::NextPatient *ui;
};

#endif // NEXTPATIENT_H
