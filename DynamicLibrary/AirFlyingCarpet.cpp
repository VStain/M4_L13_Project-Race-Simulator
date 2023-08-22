#include "AirFlyingCarpet.h"

AirFlyingCarpet::AirFlyingCarpet(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//Скорость
	this->speed = 10;
	//Коэффициент сокращения расстояния
	this->distanceCoefficient = 0;
	/*
	Если расстояние меньше 1000 — без сокращения
    Если расстояние меньше 5000 — 3%
    Если расстояние меньше 10000 — 10%
    Если расстояние больше или равно 10000 — 5%
	*/
}