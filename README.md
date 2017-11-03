# __Gobang: A Tiny Game with AI__

___
## Author
* __Qi Hu__ Email: qihuchn@gmail.com

___

## Introduction
 * This is a small game called Gobang. You can play this game with teh computer (a 'clever' agent with very basic AI).
 * The rule of the game is as follow: you and the computer will put a piece of chess in turns on any reasonable(empty)
   position. Whoever get a line of five pieces of chess first will win the game.
   
## Algorithm
Maximal-Minimal Algorithm with Alpha-Beta Pruning
___

## Usage
 * Run the main.cpp file in the command line, and there will be an simple UI (No graphical UI, just command line). 
 * Then just follow the instructions and have fun!

## Files
1. __head.h:__
  Head File to define some important variables
2. __main.cpp:__
  The main function. To call the sub-function for the game.
3. __subfunction.cpp:__
  Implement the algorithm for the game, including game status checking and computer AI (Max-Min algorithm with Alpha-Beta pruning)