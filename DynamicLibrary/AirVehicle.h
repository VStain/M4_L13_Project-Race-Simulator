#pragma once

#include "Vehicle.h"

class AirVehicle : public Vehicle
{
public:
    AirVehicle(int speed, double distanceCoefficient);
    
private:
    double distanceCoefficient;
};