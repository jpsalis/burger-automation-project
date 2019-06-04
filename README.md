# E_stop
Use if your bot doesn't interact with the conveyor in any way but performs actions which could cause damage to itself or other robots or people near it.

The branch contains e_stop.c with the task e_stop(). When started with startTask(e_stop), it will run alongside main() and will stop your robot, should the button on SensorValue[univStop] become 1. You can change the port univStop is assigned to but if you include e_stop.c it must be somewhere on the sensors page.

the branch also contains pragma.h, a header file you can add to your code by going to: "motors and sensors setup > standard Models > file containing used-defined > browse > '...\documents\github\burger-automation-project'. " This header will add the required sensors to your code without having to hand type the information.
