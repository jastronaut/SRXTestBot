#ifndef DRIVE_H
#define DRIVE_H
#include "DriveMacros.h"

class Drive{
public:
	Drive();
	~Drive();
private:
	CANTalon* leftMotor;
};
#endif DRIVE_H
