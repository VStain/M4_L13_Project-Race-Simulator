#include "AirBroom.h"

AirBroom::AirBroom(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//��������
	this->speed = 20;
	//����������� ���������� ����������
	this->distanceCoefficient = 1;
	/*
	������������� �� 1% �� ������ 1000 �.�. ����������
    ��������, ��� ���������� 5600 ����������� ����� 5%
	*/
}