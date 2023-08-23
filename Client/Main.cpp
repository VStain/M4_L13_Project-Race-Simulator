#include <iostream>
#include "Vehicle.h"
#include "VehicleGround.h"
#include "VehicleAir.h"
#include "Race.h"
#include "RaceGround.h"
#include "RaceAir.h"
#include "RaceMixed.h"

int main() {
    VehicleGround camel(10, 6, 3);
    RaceGround RaceGround;

    simulateRaceGround(camel, RaceGround, 1000);

    return 0;
}