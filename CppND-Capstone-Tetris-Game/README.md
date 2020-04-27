## Project Description

A simple tetris game in sdl, reutilized the snake game cmake files to make the build procedure simpler.

I tried sticking to a game, renderer, controller model but it was simpler for me in the end to just relegate the graphic of each object (shapes, well and game), to its own file with game.cpp acting as a controller also.

![Tetris](https://github.com/Federico-abss/Udacity_Cpp/blob/master/CppND-Capstone-Tetris-Game/1.png)


## Rubric Points Specified
some examples of my code following the rubric:

- Loops, Functions, I/O

The project demonstrates an understanding of C++ functions and control structures. 
file game.cpp - line 22 - use of multiple switch case.

The project accepts user input and processes the input.
using the sdl library

- Object Oriented Programming

The project uses Object Oriented Programming techniques.
Can be seen in each file except main.cpp

Classes use appropriate access specifiers for class members. 
Classes encapsulate behavior.
Classes abstract implementation details from their interfaces.
can be seen in tetromino.h

- Memory Management

The project uses destructors appropriately.
game.cpp - line 15

## Dependencies for running locally
* cmake >= 3.11
	* Installation instructions [here](https://cmake.org/install/)
* make >= 4.1 (linux, mac) 3.81 (Windows)
	* Linux: already installed bu default in most distros
* gcc/g++ >= 4.0
	* Linux: already installed bu default in most distros
* vxWidgets >= 3.0
	* Linux: `sudo apt-get install lbwxgtk3.0-dev libwxgtk3.0-0v5-dbg`
    * Installation instructions [here](https://wiki.wxwidgets.org/install/)
* libcurl >= 4.0
	* Linux: `sudo apt-get install libcurl4-openssl-dev`
* libjsoncpp
	* Linux: `sudo apt-get install libjsoncpp-dev`

## Build instructions
1. Clone this repo
2. inside the folder containing the readme file create a folder called build and move inside it `mkdir build && cd build`.
3. compile `cmake .. && make`.
4. Run the target compiled file: `./SnakeGame`.
