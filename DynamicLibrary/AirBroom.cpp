#include "AirBroom.h"

AirBroom::AirBroom(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//Скорость
	this->speed = 20;
	//Коэффициент сокращения расстояния
	this->distanceCoefficient = 1;
	/*
	Увеличивается на 1% за каждую 1000 у.е. расстояния
    Например, для расстояния 5600 коэффициент будет 5%
	*/
}