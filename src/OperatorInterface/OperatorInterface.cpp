#include "OperatorInterface.h"

OperatorInterface::OperatorInterface()
{
	dashboard->init(); 
}

OperatorInterface::~OperatorInterface()
{
	dashboard = NULL;
}

SmartDashboard* OperatorInterface::getDashboard()
{
	return dashboard;
}