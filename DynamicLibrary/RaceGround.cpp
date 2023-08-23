#include "RaceGround.h"

RaceGround::RaceGround() : Race("Наземные ТС") {}

void simulateRaceGround(const VehicleGround& vehicle, const RaceGround& race, int distance)
{
int time = 0;
int traveledDistance = 0;

while (traveledDistance < distance) {
    time += vehicle.getMovementTime();
    traveledDistance += vehicle.getSpeed();

    if (time >= vehicle.getNextRestTime()) {
        vehicle.addStop();
        time += vehicle.getRestTime();
    }
}

cout << "Гонка для " << race.getType() << " завершена за " << time << " часов." << endl;
}