
#include "e_stop.c"
#include "conveyor_control.c"

int iLightSensorMax = 50; // iLightSensorMax has a val if user doesn't define it.
void init();
void operate();

task main()
{

	init(); // user made code


	startTask(e_stop);
	while(true)
	{
		while(SensorValue[lightSensor] > iLightSensorMax)
			delay(10);


		operate(); // user made code

		while(SensorValue[lightSensor] <= iLightSensorMax) // wait until light moves away from sensor
			delay(10);


		delay(500); // wait half second at least if there was an error with last call
	}
}
