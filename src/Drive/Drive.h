#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
public:
	Drive();
	~Drive();
	//float getXValue();
	//float getYValue();
	bool checkStrafe();
	float getYForward();
	float getXTurn();
	float linearizeDrive(float inputVal);
	float setForward(float forward);
	float setTurn(float turn);
	float setStrafe(float strafe);
	void driveMotors();

private:
	CANTalon* leftMotor;
	CANTalon* rightMotor;
	Joystick* driveJoystick;

	int forward;
	int turn;
	int strafe;
};

#endif
