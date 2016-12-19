#include "Patient.h"

using namespace std;

Patient::Patient(QString f, QString m, QString l, QString s, vector<QString> a, QString d, int t, int p) : firstName(f),
                                                                                                     middleName(m),
                                                                                                     lastName(l),
                                                                                                     suffix(s),
                                                                                                     ailments(a),
                                                                                                     doctor(d),
                                                                                                     treated(t),
                                                                                                     priority(p) {}
Patient::Patient(const Patient &p) {
    firstName = p.firstName;
    middleName = p.middleName;
    lastName = p.lastName;
    suffix = p.suffix;
    ailments = p.ailments;
    doctor = p.doctor;
    treated = p.treated;
    priority = p.priority;
}

Patient & Patient::operator=(const Patient & obj) {
    if (this != &obj) {
        firstName = obj.firstName;
        middleName = obj.middleName;
        lastName = obj.lastName;
        suffix = obj.suffix;
        ailments = obj.ailments;
        doctor = obj.doctor;
        treated = obj.treated;
        priority = obj.priority;
    }
    return *this;
}

    QString Patient::getFirstName() const {
        return firstName;
    }

   QString Patient::getMiddleName() const {
        return middleName;
    }

    QString Patient::getLastName() const {
        return lastName;
    }

    QString Patient::getSuffix() const {
        return suffix;
    }

    QString Patient::getAilment() const {
       QString ailment = " ";
        for (unsigned int i = 0; i < ailments.size(); i++)
            ailment += "\nAilment: " + ailments[i];
        return ailment;
    }

    QString Patient::getDoctor() const {
        return doctor;
    }

    int Patient::getTreated() const {
        return treated;
    }

    int Patient::getPriority() const {
        return priority;
    }

    void Patient::setTreated() {
        treated = 1;
    }

    QString Patient::print() const {
        return "\nFirst Name: " + this->getFirstName() +
            "\nMiddle Name: " + this->getMiddleName() +
            "\nLast Name: " + this->getLastName() +
            "\nSuffix: " + this->getSuffix() +
            this->getAilment() +
            "\nDoctor: " + this->getDoctor() +
            "\nTreated: " + this->getTreated() +
            "\nPriority: " + this->getPriority();
    }

    bool Patient::operator< (const Patient* rhs) {
        return this->getPriority() < rhs->getPriority();
    }

