#pragma once

#include "Race.h"
#include "VehicleGround.h"
#include <iostream>

using namespace std;

class RaceGround : public Race {
public:
    RaceGround() : Race("�������� ��") {}
};

void simulateRaceGround(const VehicleGround& vehicle, const RaceGround& race, int distance) {}
