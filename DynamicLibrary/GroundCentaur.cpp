#include "GroundCentaur.h"

GroundCentaur::GroundCentaur(int speed, int movementTime, int restTime)
	:VehicleGround(speed, movementTime, restTime)
{
	//��������
	this->speed = 15;
	//����� �������� �� ������
	this->movementTime = 8;
	// ������������ ������
	this->restTime = 2;
	/*
      ������ 2
	*/
}