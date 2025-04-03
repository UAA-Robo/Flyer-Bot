#pragma once
#include "Flyer.h"

void bootup()
{
	// set varibles
	speed = 0;
	turnSpeed = 0;
	currXPos = 0;
	currYPos = 0;
	currDeg = 0;

}

void shutdown()
{
	// stop movement
	speed = 0;
	turnSpeed = 0;

	// close threads

}

void pause()
{

	// pause movement input

	// set movment to 0
	speed = 0;
	turnSpeed = 0;

	// pause other threads


}

void resume()
{

	// resume other threads

	// resume movemnt input

}

void move(int speed)
{
	this->speed = speed;
}

void turn(int speed)
{
}

void stop()
{
	move(0);
	turn(0);
}

void moveTo(int speed, int moveTime)
{
}

void turnTo(int degree)
{
}

int getSpeed()
{
	return speed;
}

void getCurrTarget()
{
}

void updatePos(int x, int y)
{
}

void setFollow(Object target)
{
}
