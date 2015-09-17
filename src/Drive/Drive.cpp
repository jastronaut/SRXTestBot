#include "Drive.h"

Drive::Drive(){
	leftMotor = new CANTalon(LEFT_MOTOR_PORT);
	rightMotor = new CANTalon(RIGHT_MOTOR_PORT);
	driveJoystick = new Joystick(DRIVE_JOYSTICK_PORT);
}

Drive::~Drive()
{
	delete leftMotor;
	delete rightMotor;
	delete driveJoystick;


	leftMotor = NULL;
	rightMotor = NULL;
	driveJoystick = NULL;

}

/*
float Drive::getXValue()
{
	return driveJoystick->GetX();
}

float Drive::getYValue()
{
	return driveJoystick->GetY();
}
*/

bool Drive::checkStrafe()
{
	while(driveJoystick->GetRawButton(STRAFE_BUTTON))
		return true;
	else
		return false;
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
	if(checkStrafe())
	{
		if(strafe > DEADZONE || strafe < -DEADZONE)
			return strafe;
		else if(strafe < DEADZONE && strafe > -DEADZONE)
			return 0;
		else
			return 0;
	}
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

void Drive::driveMotors(float forward, float turn, float strafe)
{
	setForward(driveJoystick->GetY());
	settTurn(driveJoystick->GetX());
	setStrafe(driveJoystick->GetX());
	leftMotor->Set(linearizeDrive(forward - turn + strafe));
	rightMotor->Set(linearizeDrive(-forward + turn - strafe));
}