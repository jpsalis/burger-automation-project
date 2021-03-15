# burger-automation-project
Codebase made for 2019 High School robotics project. Code functions, but was never fully utilized in the classroom. I took too long to make the codebase and we didn't have enough time to finish.
Repo for code changes in burger automation project. This repo is made to allow communication for robots connected to the conveyor part of the project.

The branch you base your project on depends where your bot is connected to the project.

## deciding which branch to build code from: 

* If your bot interacts with the conveyor, you have two possible cases:
	* **Your bot needs the conveyor to be in position in front of the bot to start.** In this case, base your branch off of Template. Contains a template for your code that automatically starts the code you write in operate() when the light (or whatever the final sensor becomes) passes over your robot. The contents ot template shouldn't have to be changed anytime soon.
	* **Bot interacts with conveyor but is started by another robot.** In this case, base your code off of conveyor_control, as this gives you access to functions that can interact with the conveyor that template builds upon. 
* If your bot doesn't interact with the conveyor in any way, it'd be best to branch e_stop, which includes files to simplify the process of halting your bot in the event of an issue. It also contains pragma.h, a header file with necessary sensor locations to allow a file using this class to compile.

