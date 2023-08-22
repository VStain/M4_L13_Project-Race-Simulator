#include "GroundBoots.h"

GroundBoots::GroundBoots(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//Скорость
	this->speed = 6;
	//Время движения до отдыха
	this->movementTime = 60;
	// Длительность отдыха
	this->restTime = 10;
	/*
	 Первый раз: 10
     Все последующие разы: 5
	*/
}