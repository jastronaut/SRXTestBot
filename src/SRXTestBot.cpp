#include "WPILib.h"
#include "Drive/Drive.cpp"
#include "OperatorInterface/OperatorInterface.cpp"
class SRXTestBot: public IterativeRobot
{
private:
	//LiveWindow *lw; do we need this?
	Drive* drive;
	OperatorInterface* oi;
	
	void RobotInit()
	{
		//lw = LiveWindow::GetInstance(); wat
		drive = new Drive();
		oi = new OperatorInterface();
	}

	void AutonomousInit()
	{

	}

	void AutonomousPeriodic()
	{

	}

	void TeleopInit()
	{

	}

	void TeleopPeriodic()
	{
		drive->driveMotors();
		printSmartDashboard();
	}

	void printSmartDashboard()
	{
		oi->getDashboard()->PutNumber("Forward: ", drive->GetYForward());
		oi->getDashboard()->PutNumber("Turn: ", drive->getXTurn);
		oi->getDashboard()->PutBoolean("Strafe button: ", drive->checkStrafe());
		if(!drive->checkStrafe())
			oi->getDashboard()->PutNumber("Strafe: ", drive->GetXTurn());
		else
			oi->getDashboard()->PutNumber("Strafe: ", 0);
	}

	void TestPeriodic()
	{
		//lw->Run(); ok then
	}
};

START_ROBOT_CLASS(SRXTestBot);
