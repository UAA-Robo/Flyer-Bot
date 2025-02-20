
/*

Header file for the Object class

*/

#pragma once
#include <string>

class Object
{

private:
    
    std::string name;
    
    int posX; // x position on screen
    int posY; // y position on screen

    int height; // height taken up on screen
    int width; // width taken up on screen

    bool canFollow; // can this object be followed

    int timeOut; // the time since this object was last seen
    int timeIn; // the time this object has remained in view

protected:

    // setter functions
    void setX(int newX);
    void setY(int newY);
    void setWidth(int newWidth);
    void setHeight(int newHeight);

public:
    // constructor and deconstructor
    Object(std::string name, int posX, int posY, int height, int width);
    Object(std::string name);
    ~Object();

    // getter functions
    int getX();
    int getY();
    int getWidth();
    int getHeight();

    // update function
    void update();
};
