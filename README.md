# Template
used if your bot is waiting for the conveyor to be in position to start. Contains a template for your code that automatically starts what you write in operate() when the light (or whatever the final sensor becomes) passes over your robot.

files: 
* **conveyor_control.c** - gives you two functions you can use to stop and start the conveyor if needed. included by template_includes.c
* **e_stop**- Auto-stops your robot as a safety feature if sensorValue[univStop] is on. included by template_includes.c
* **pragma.h**- Contains the minimum sensors you need in template.c to make the code work. 
* **readme.md**- Details about your current branch, but I think you figured that out if you've read this far.
* **template.c**- Code is written here. Has functions operate() and init().
* **template_includes.c**- Background code. included by template.c.