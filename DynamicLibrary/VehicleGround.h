#pragma once

#include "Vehicle.h"

	class VehicleGround : public Vehicle {
	public:
		VehicleGround(double speed, double movementTime, double restTime)
			: Vehicle(speed), movementTime(movementTime), restTime(restTime), stops(0) {}

		double getMovementTime() const;

		double getRestTime() const;

		double getNextRestTime() const;

		void addStop();

	protected:
		double movementTime = 0;
		double restTime = 0;
		double stops = 0;
};
