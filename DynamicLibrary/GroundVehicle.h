#pragma once

#include "Vehicle.h"

class GroundVehicle : public Vehicle
{
public:
	GroundVehicle(int speed, int movementTime, int restTime);
private:
	int movementTime;
	int restTime;
};