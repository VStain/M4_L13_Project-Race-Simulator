#include "GroundSpeedCamel.h"

GroundSpeedCamel::GroundSpeedCamel(int speed, int movementTime, int restTime)
	: VehicleGround(speed, movementTime, restTime)
{
	//��������
	this->speed = 40;
	//����� �������� �� ������
	this->movementTime = 10;
	// ������������ ������
	this->restTime = 5; 
	/*
	������ ���: 5
    ������ ���: 6.5
    ��� ����������� ����: 8
	*/
}
