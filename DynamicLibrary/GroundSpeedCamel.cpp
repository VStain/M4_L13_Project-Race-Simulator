#include "GroundSpeedCamel.h"

GroundSpeedCamel::GroundSpeedCamel(int speed, int movementTime, int restTime)
	: VehicleGround(speed, movementTime, restTime)
{
	//Скорость
	this->speed = 40;
	//Время движения до отдыха
	this->movementTime = 10;
	// Длительность отдыха
	this->restTime = 5; 
	/*
	Первый раз: 5
    Второй раз: 6.5
    Все последующие разы: 8
	*/
}
