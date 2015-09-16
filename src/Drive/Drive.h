#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
private:
	CANTalon* leftMotor;
public:
	Drive(){
		leftMotor = new CANTalon(LEFT_MOTOR_PORT);
	}
	~Drive();
};
#endif DRIVE_H
