#include "AirEagle.h"

AirEagle::AirEagle(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//Скорость
	this->speed = 8;
	//Коэффициент сокращения расстояния
	this->distanceCoefficient = 6;
	/*
	Всегда 6%
	*/
}