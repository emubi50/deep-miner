# Deep Miner
*Deep Miner* is a 3d mining game in which players control robots to mine a 3D world for points. The game features various robot types with unique behaviors, navigating through a grid of cells with random z-values. Players must use their robots strategically to maximize points by mining specific values. The game is designed with object-oriented programming principles in C++ and employs STL data structures and algorithms to manage the 3D grid and robot actions.

## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Features](#features) <!-- \n* [Screenshots](#screenshots) \n* [Setup](#setup) -->
* [Usage](#usage)
* [Project Status](#project-status)
* [Room for Improvement](#room-for-improvement) <!-- \n* [Acknowledgements](#acknowledgements) -->
* [Contact](#contact)
* [License](#license)

## General Information
This project is a university project and serves to solidify my understanding of abstract classes, interfaces, polymorphism and the Standard Template Library.
<!-- You don't have to answer all the questions - just the ones relevant to your project. -->

## Technologies Used
- C++

## Features
- 3D World: The game world has dimensions of 5x5x10 (x, y, z), where each cell contains a random z-value between 1 and 9.
- Multiple Robots: Players can choose from different robot types, each with its unique mining behavior:
	- Type 1: Mines the highest z-value in the current (x,y)-coordinate.
	- Type 2: Mines the current z-value and the next two z-values.
	- Type 3: Mines with a not yet implemented mining behavior.
- Game Rounds: Players take turns selecting diretions to move, with the robot mining the current cell and adding the value to its score.
- World Reorganization: When a robot reaches a multiple of 50 points, the world is reorganized, randomly altering z-values in celks. <!-- Stufe 2 -->
- Effect Values: Special effect values trigger different actions, such as preventing mining or repositioning the robot <!-- Stufe 3 -->

## Planned Features
- 

<!-- ## Screenshots -->
<!-- ![Example screenshot](./img/screenshot.png) -->
<!-- If you have screenshots you'd like to share, include them here. -->

<!--
## Setup
What are the project requirements/dependencies? Where are they listed? A requirements.txt or a Pipfile.lock file perhaps? Where is it located?
Proceed to describe how to install / setup one's local environment / get started with the project.
-->

## Usage
- _to be updated when 'Stufe 1' is ready to be deployed_

## Project Status
Project is: _in progress_.

## Room for Improvement
<!-- Include areas you believe need improvement / could be improved. Also add TODOs for future development. -->
<!--
Room for improvement:
- Improvement to be done 1
- Improvement to be done 2
-->
To do:
- Finish 'Stufe 1'
- Start with 'Stufe 2' and 'Stufe 3'

<!--
## Acknowledgements
Give credit here.
- This project was inspired by...
- This project was based on [this tutorial](https://www.example.com).
- Many thanks to...
-->

## Contact

<!-- Optional -->
## License
Default copyright laws apply. All rights are retained and the reproduction, distribution, or creation of derivative works from this project are forbidden.

<!-- You don't have to include all sections - just the ones relevant to your project -->
