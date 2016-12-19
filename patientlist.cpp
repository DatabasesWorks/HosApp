#include "mainwindow.h"

namespace PatientList {
    std::priority_queue<Patient, std::vector<Patient*>, Compare> patientList;
    std::vector<Patient*> treatedList;

}
