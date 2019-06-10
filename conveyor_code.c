#pragma config(Sensor, dgtl1,  dataLine,       sensorTouch)
#pragma config(Sensor, dgtl2,  univStop,       sensorTouch)
#pragma config(Sensor, dgtl3,  startLimit,     sensorTouch)
#pragma config(Sensor, dgtl4,  endLimit,       sensorTouch)
#pragma config(Sensor, dgtl5,  resetBtn,       sensorTouch)
#pragma config(Motor,  port1,           light,         tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port3,           driveStart,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           driveEnd,      tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define FORWARDSPEED 80
#define RESETSPEED  -50

#include "conveyor_includes.c"
#include "e_stop.c"


task main() // runs on start
{
	startTask(e_stop); // background task. Whenever univStop true, stop all tasks.
	int lastDLval; // stores value of DL on last loop
	int DLval; // stores current DL value, or value at start of loop.
	int count = 0; // used to count number of pulses on DL

	while(true)
	{
		motor[light] = 0; // light off
		setConvSpeed(RESETSPEED);

		while(SensorValue[startLimit] == 0) // loop until reached the beginning
		{
			wait1Msec(10);
		}

		setConvSpeed(0);
		motor[light] = 127; // light on

		while(SensorValue[endLimit] != 1) // until reached the end
		{

			DLval = SensorValue[dataLine];
			//writeDebugStreamLine("%d", DLval);
			if(DLval && lastDLval != DLval) // rising edge detector
			{
				if(count == 0)
				{
					clearTimer(T1);
				}

				count = count + 1;
				writeDebugStreamLine("%d", count);
			}

			if(count != 0 && time1[T1] > 200)
			{
				interpretCount(count);
				count = 0;
			}

			lastDLval = DLval; // gets value of DL on last loop to compare to next loop
			wait1Msec(50); // do not remove, prevents rapid toggling of button value somehow.
		}

		// wait for button press
		setConvSpeed(0);
		while(SensorValue[resetBtn] == 0)
			wait1Msec(10);
	}

}
