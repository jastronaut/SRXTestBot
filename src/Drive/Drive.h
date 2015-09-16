#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
public:
	Drive();
	~Drive();
	float linearizeDrive(float inputVal);
	float setForward(float forward);
	float setTurn(float turn);
	float setStrafe(float strafe);
	
private:
	CANTalon* leftMotor;
};
#endif DRIVE_H
