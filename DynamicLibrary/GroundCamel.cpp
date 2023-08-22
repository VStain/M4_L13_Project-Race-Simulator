#include "GroundCamel.h"

GroundCamel::GroundCamel(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//Скорость
	this->speed = 10;
	//Время движения до отдыха
	this->movementTime = 30;
	// Длительность отдыха
	this->restTime = 5;
	/*
     Первый раз: 5
     Все последующие разы: 8
	*/
}
