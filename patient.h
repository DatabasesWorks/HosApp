#ifndef PATIENT_H
#define PATIENT_H

#include<QString>
#include<vector>

class Patient {

private:
    QString firstName;
    QString middleName;
    QString lastName;
    QString suffix;
    std::vector<QString> ailments;
    QString doctor;
    int treated;
    int priority;

public:

    Patient(QString f, QString m, QString l, QString s, std::vector<QString> a, QString d, int t, int p);
    Patient(const Patient &p);
    Patient &operator=(const Patient & obj);
    QString print() const;
    QString getFirstName() const;
    QString getMiddleName() const;
    QString getLastName() const;
    QString getSuffix() const;
    QString getAilment() const;
    QString getDoctor() const;
    int getTreated() const;
    int getPriority() const;
    void setTreated();
    //int getFirstChar() const;
    bool operator < (const Patient* rhs);
    //bool operator > (const Patient* rhs);


    ~Patient();
};

struct Compare {
    bool operator() (const Patient* a, const Patient* b) {
        return a->getPriority() > b->getPriority();
    }
};

struct CompareByDoctor {
    bool operator()(const Patient* a, const Patient* b) {
            QString doctor1 = a->getDoctor().toUpper();
            QString doctor2 = b->getDoctor().toUpper();
            if (doctor1 == doctor2 || doctor1 < doctor2) {
                return true;
            }
            return false;
        }
};

#endif // PATIENT_H
