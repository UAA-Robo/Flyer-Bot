/*
	_____________________________________________________________________________________________________
	|Header file for the different programs that will control flyer bot.								|
	|																									|
	|Might be split into multiple header files or removed at a latter date if this becomes redundant.	|
	|																									|
	|Each speed and time function perameters are placeholders for a TBD unit of mesurment.				|
	|___________________________________________________________________________________________________|
*/


// --- includes ---

#pragma once
#include "Object.h"
#include <thread>

// --- varible declarations ---

int speed;
int turnSpeed;
int currXPos;
int currYPos;
int currDeg;
const int updateDelay = 0.5; // time between updates in seconds.

std::thread* proccesses[5]; // thread index

// --- function declarations ---

// - "play" functions -

void bootup();		// handles startup. 
void shutdown();	// handles shutdown.

void pause();		// pause movement 
void resume();		// resume movement

// - movement functions -

void move(int speed);	// sets the speed 
void turn(int speed);	// should try to make turning speed = degrees per sec
void stop();			// cease all movement; set speed to 0 and halt 


void moveTo(int speed, int moveTime); // move for a set time and speed
void turnTo(int degree); // turn to a degree of rotation


// - getter functions -

int getSpeed();
void getCurrTarget(); // could be removed if unnessasary.


// - setter functions -

void updatePos(int x, int y); // updates the position of the bot
void setFollow(Object target);