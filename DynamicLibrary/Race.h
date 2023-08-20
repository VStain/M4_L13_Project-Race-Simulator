#pragma once

#include <vector>
#include "Vehicle.h"

using namespace std;

class Race
{
public:
	Race(int distance);
	void RegisterVehicle(Vehicle* vehicle);
	void StartRace();
private:
	int distance = 0;
	vector<Vehicle*> vehicles;
};
