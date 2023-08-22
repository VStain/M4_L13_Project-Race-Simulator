#pragma once

#include "Vehicle.h"

class VehicleAir : public Vehicle
{
public:
    VehicleAir(int speed, double distanceCoefficient);
    
protected:
    double distanceCoefficient = 0;
};