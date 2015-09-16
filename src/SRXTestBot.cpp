#include "WPILib.h"
#include "Drive/Drive.cpp"
class SRXTestBot: public IterativeRobot
{
private:
	//LiveWindow *lw; do we need this?
	Drive* drive;
	
	void RobotInit()
	{
		//lw = LiveWindow::GetInstance(); wat
		drive = new Drive();
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

	}

	void TestPeriodic()
	{
		//lw->Run(); ok then
	}
};

START_ROBOT_CLASS(SRXTestBot);
