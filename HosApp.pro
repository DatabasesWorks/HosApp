#-------------------------------------------------
#
# Project created by QtCreator 2016-12-17T21:07:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HosApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    nursewindow.cpp \
    addpatientwindow.cpp \
    patient.cpp \
    patientlist.cpp \
    doctor.cpp \
    patientlistclass.cpp \
    doctorprintpatient.cpp \
    querypatientwindow.cpp \
    hospitalwindow.cpp \
    hospitalprintpatient.cpp \
    admin.cpp \
    addbulkwindow.cpp \
    help.cpp \
    logger.cpp

HEADERS  += mainwindow.h \
    nursewindow.h \
    addpatientwindow.h \
    patient.h \
    patientlist.h \
    doctor.h \
    patientlistclass.h \
    doctorprintpatient.h \
    querypatientwindow.h \
    hospitalwindow.h \
    hospitalprintpatient.h \
    admin.h \
    addbulkwindow.h \
    help.h \
    logger.h

FORMS    += mainwindow.ui \
    nursewindow.ui \
    addpatientwindow.ui \
    doctor.ui \
    doctorprintpatient.ui \
    querypatientwindow.ui \
    hospitalwindow.ui \
    hospitalprintpatient.ui \
    admin.ui \
    addbulkwindow.ui \
    help.ui
