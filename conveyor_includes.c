

void setConvSpeed(int speed)
{
	motor[driveStart] = speed;
	motor[driveEnd] = speed;
}
void interpretCount(int count)
{
	if(count == 1) // if received 1 pulse, start
		setConvSpeed(FORWARDSPEED);
	else if(count >= 2) // if received 2 or more pulses, stop
		setConvSpeed(0);
}
