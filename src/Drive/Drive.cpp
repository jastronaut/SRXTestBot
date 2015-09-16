#include "Drive.h"

Drive::Drive(){
	leftMotor = new CANTalon(LEFT_MOTOR_PORT);
	driveJoystick = new Joystick(DRIVE_JOYSTICK_PORT);
}

Drive::~Drive()
{
	delete leftMotor;
	delete driveJoystick;

	leftMotor = NULL;
	driveJoystick = NULL;
}

float Drive::setForward(float forward)
{
	if(forward > DEADZONE || forward < -DEADZONE)
		return forward;
	else if(forward < DEADZONE && forward > -DEADZONE)
		return 0;
	else
		return 0;
}

float Drive::setTurn(float turn)
{
	if(turn > DEADZONE || turn < -DEADZONE)
		return turn;
	else if(turn < DEADZONE && turn > -DEADZONE)
		return 0;
	else
		return 0;
}

float Drive::setStrafe(float strafe)
{
	if(strafe > DEADZONE || strafe < -DEADZONE)
		return strafe;
	else if(strafe < DEADZONE && strafe > -DEADZONE)
		return 0;
	else
		return 0;
}

float Drive::linearizeDrive(float inputVal)
{
	float slope = 1.0/(DEADZONE - 1);
	if(inputVal > DEADZONE)
		return slope*(inputVal - DEADZONE);
	else if(inputVal < -DEADZONE)
		return (-1.0)*slope*(inputVal + DEADZONE);
	else
		return 0;
}