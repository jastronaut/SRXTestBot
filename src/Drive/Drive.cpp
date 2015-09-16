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

}

float Drive::setTurn(float turn)
{

}

float Drive::setStrafe(float strafe)
{

}

float Drive::linearizeDrive(float inputVal)
{

} 