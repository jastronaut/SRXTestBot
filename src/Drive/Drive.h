#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
public:
	Drive();
	~Drive();
	//float getXValue();
	//float getYValue();
	//void checkStrafe(bool pressed);
	float linearizeDrive(float inputVal);
	float setForward(float forward);
	float setTurn(float turn);
	float setStrafe(float strafe);
	void driveMotors(float forward, float turn, float strafe);

private:
	CANTalon* leftMotor;
	CANTalon* rightMotor;
	Joystick* driveJoystick;
};
#endif DRIVE_H
