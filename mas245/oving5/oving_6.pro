TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    cat.cpp \
    position.cpp \
    vehicle.cpp

HEADERS += \
    cat.h \
    ianimal.h \
    ipositionprovider.h \
    position.h \
    vehicle.h
