// if included, make sure digital 1 is convComm.

void startConv()
{
	SensorValue[convComm] = 1;
	delay(50);
	SensorValue[convComm] = 0;
	delay(50);
}




void stopConv();
{
	for(int i = 0; i < 2; i++)
	{
		SensorValue[convComm] = 1;
		delay(25);
		SensorValue[convComm] = 0;
		delay(25);
	}
}
