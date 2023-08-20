#include "Vehicle.h"

class Vehicle {
public:
    Vehicle(int speed) : speed(speed) {}

    int getSpeed() const {
        return speed;
    }

private:
    int speed;
};