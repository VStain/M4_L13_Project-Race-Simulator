#include "GroundCamel.h"

GroundCamel::GroundCamel(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//��������
	this->speed = 10;
	//����� �������� �� ������
	this->movementTime = 30;
	// ������������ ������
	this->restTime = 5;
	/*
     ������ ���: 5
     ��� ����������� ����: 8
	*/
}
