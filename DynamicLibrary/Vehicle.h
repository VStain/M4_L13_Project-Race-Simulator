#pragma once

class Vehicle {
public:
    Vehicle(double speed) : speed(speed) {}

    virtual double getSpeed() const;

protected:
    double speed = 0;
};