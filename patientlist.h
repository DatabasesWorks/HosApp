#ifndef PATIENTLIST_H
#define PATIENTLIST_H

#include"mainwindow.h"
#include<queue>

namespace PatientList {

    extern std::priority_queue<Patient, std::vector<Patient*>,Compare> patientList;
    extern std::vector<Patient*> treatedList;

}

#endif // PATIENTLIST_H
