# burger-automation-project
Repo for code changes in burger automation project. This repo is made to allow communication for robots connected to the conveyor or part of the project.

the branch you base your project on depends where your bot is connected to the project.

## deciding which branch to build code from: 

* if your bot doesn't interact with the conveyor in any way, you must branch e_stop, which includes task e_stop(), which stops your robot no matter what it is currently doing. Also contains pragma.h, a header file with necessary sensor information to put in your file to make the task compile.
* if your bot interacts with the conveyor, you have two possible cases:
	* **your bot needs the conveyor to be in position in front of the bot to start.** in this case, base your branch off of Template. contains a template for your code that automatically starts the code you write in operate() when the light (or whatever the final sensor becomes) passes over your robot.
	* **bot interacts with conveyor, but is started by another robot.** in this case, base from conveyor_control, as this gives you access to functions that can interact with the conveyor. 
