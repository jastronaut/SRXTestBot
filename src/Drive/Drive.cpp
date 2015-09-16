#include "Drive.h"

Drive::Drive(){
	leftMotor = new CANTalon();
}

Drive::~Drive()
{
	delete leftMotor;

	leftMotor = NULL;
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