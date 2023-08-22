#include "GroundCentaur.h"

GroundCentaur::GroundCentaur(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//Скорость
	this->speed = 15;
	//Время движения до отдыха
	this->movementTime = 8;
	// Длительность отдыха
	this->restTime = 2;
	/*
      Всегда 2
	*/
}