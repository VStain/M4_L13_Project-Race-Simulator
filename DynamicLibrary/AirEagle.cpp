#include "AirEagle.h"

AirEagle::AirEagle(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//��������
	this->speed = 8;
	//����������� ���������� ����������
	this->distanceCoefficient = 6;
	/*
	������ 6%
	*/
}