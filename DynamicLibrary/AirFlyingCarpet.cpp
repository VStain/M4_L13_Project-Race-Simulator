#include "AirFlyingCarpet.h"

AirFlyingCarpet::AirFlyingCarpet(int speed, double distanceCoefficient)
	:VehicleAir(speed, distanceCoefficient)
{
	//��������
	this->speed = 10;
	//����������� ���������� ����������
	this->distanceCoefficient = 0;
	/*
	���� ���������� ������ 1000 � ��� ����������
    ���� ���������� ������ 5000 � 3%
    ���� ���������� ������ 10000 � 10%
    ���� ���������� ������ ��� ����� 10000 � 5%
	*/
}