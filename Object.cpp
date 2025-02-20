
/*

Class function definitions for the Object class.

*/

#pragma once
#include "Object.h"
#include <string>

/*

basic constructer

*/
Object::Object(std::string name, int posX, int posY, int height, int width)
: name(name), posX(posX), posY(posY), height(height), width(width)
{



}

/*



*/
Object::Object(std::string name)
{



}
        
Object::~Object()
{
}

/*

returns the X position of an object in view

*/
int Object::getX()
{
    return this->posX;
}

/*

returns the Y position of an object in view

*/
int Object::getY()
{
    return this->posY;
}

/*

returns the width of an object in view

*/
int Object::getWidth()
{
    return this->width;
}

/*

returns the height of an object in view

*/
int Object::getHeight()
{
    return this->width;
}

/*

sets the x position of an object in view

*/
void Object::setX(int newX)
{
    this->posX = newX;
}

/*

sets the y position of an object in view

*/
void Object::setY(int newY)
{
    this->posY = newY;
}

/*

sets the width of an object in view

*/
void Object::setWidth(int newWidth)
{
    this->width = newWidth;
}

/*

sets the height of an object in view

*/
void Object::setHeight(int newHeight)
{
    this->height = newHeight;
}

/*

Updates the object using information from the AI cammera.

*/
void Object::update()
{

    // get this object's new values
    this->height; // todo: get values from AI cammera
    this->width;
    this->posX;
    this->posY;


}

