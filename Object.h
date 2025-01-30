
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

public:
    // constructor and deconstructor
    Object(std::string name, int posX, int posY, int height, int width);
    ~Object();

    // setter functions
    void setX(int newX);
    void setY

    // getter functions
};
