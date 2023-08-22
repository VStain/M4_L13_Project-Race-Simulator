#pragma once

#include <vector>
#include "Vehicle.h"

using namespace std;

class Race
{
public:
	Race(int distance);
	virtual void RegisterVehicle(Vehicle* vehicle);
	virtual void StartRace();

protected:
	int distance = 0;
	vector<Vehicle*> vehicles;
};
