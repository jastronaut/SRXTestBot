#ifndef OPERATOR_INTERFACE
#define OPERATOR_INTERFACE
#include "../Drive/DriveMacros.h"

class OperatorInterface
{
public:
	OperatorInterface();
	~OperatorInterface();

	SmartDashboard* getDashboard();
private:
	SmartDashboard* dashboard;

};

#endif
