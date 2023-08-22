#pragma once

class Vehicle
{
public:
    virtual int getSpeed(int speed) const;

protected:
	int speed = 0;
};