// if included, make sure digital 1 is convComm.

void startConv()
{
	SensorValue[convComm] = 1;
	delay(100);
	SensorValue[convComm] = 0;
	delay(100);
}




void stopConv()
{
	for(int i = 0; i < 2; i++)
	{
		SensorValue[convComm] = 1;
		delay(50);
		SensorValue[convComm] = 0;
		delay(50);
	}
}
