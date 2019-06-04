#pragma config(Sensor, in1,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  convComm,       sensorDigitalOut)
#pragma config(Sensor, dgtl2,  univStop,       sensorDigitalIn)

#include "template_includes.c"

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*											Template for Automation Project											 */
/*																																					 */
/*---------------------------------------------------------------------------*/




/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                          Pre-Operate Functions                            */
/*                                                                           */
/*  You may want to perform some actions before the robot .           			 */
/*  Do them in the following function. You must return from this function    */
/*  or the operate function will not be started. This function is only 		   */
/*	called once after the cortex has been powered on and not every time			 */
/*  that the robot is disabled.                                              */
/*---------------------------------------------------------------------------*/

void init()
{

	// All activities that occur before the robot starts
	// Example: clearing encoders, setting servo positions, ...
	iLightSensorMax = 30;

	// change iLightSensorMax if you find the value of the light sensor that begins operate()
	// is too sensitive or not sensitive enough.
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This function is used to control your robot when light from the          */
/*  conveyor is detected.																										 */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*  make sure to use startConv and stopConv to stop the conveyor             */
/*	unless you don't need it.                                                */
/*---------------------------------------------------------------------------*/

void operate()
{

}
