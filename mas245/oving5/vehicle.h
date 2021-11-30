#ifndef VEHICLE_H
#define VEHICLE_H

#include <ipositionprovider.h>

class Vehicle : public IPositionProvider
{
public:
    Vehicle();

    void stop();
};

#endif // VEHICLE_H
