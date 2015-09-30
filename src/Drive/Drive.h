#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
public:
	Drive(){
		leftMotor = new CANTalon(LEFT_MOTOR_PORT);
			rightMotor = new CANTalon(RIGHT_MOTOR_PORT);
			driveJoystick = new Joystick(DRIVE_JOYSTICK_PORT);

			forward = 0;
			turn = 0;
			strafe = 0;
	}
	~Drive(){
		delete leftMotor;
		delete rightMotor;
		delete driveJoystick;

		leftMotor = NULL;
		rightMotor = NULL;
		driveJoystick = NULL;
	}
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
