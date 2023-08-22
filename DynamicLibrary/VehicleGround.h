#pragma once

#include "Vehicle.h"

class VehicleGround : public Vehicle
{
public:
	VehicleGround(int speed, int movementTime, int restTime);

protected:
	int movementTime = 0;
	int restTime = 0;
};