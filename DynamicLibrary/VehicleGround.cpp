#include "VehicleGround.h"

VehicleGround::VehicleGround(double speed, double movementTime, double restTime)
    : Vehicle(speed), movementTime(movementTime), restTime(restTime), stops(0) {}

double VehicleGround::getMovementTime() const {
    return movementTime;
}

double VehicleGround::getRestTime() const {
    return restTime;
}

double VehicleGround::getNextRestTime() const {
    return (stops + 1) * restTime;
}

void VehicleGround::addStop() {
    stops++;
};

