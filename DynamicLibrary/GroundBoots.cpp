#include "GroundBoots.h"

GroundBoots::GroundBoots(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//��������
	this->speed = 6;
	//����� �������� �� ������
	this->movementTime = 60;
	// ������������ ������
	this->restTime = 10;
	/*
	 ������ ���: 10
     ��� ����������� ����: 5
	*/
}