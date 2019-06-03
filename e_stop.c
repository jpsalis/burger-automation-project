task e_stop()
{
	while(true)
	{
		if(SensorValue[univStop])
			stopAllTasks();
		delay(10);
	}
}
