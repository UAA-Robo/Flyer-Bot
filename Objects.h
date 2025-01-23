
/*

Header file for the Objects class

*/

#pragma once
#include <string>

class Objects
{

private:
    
    std::string name;
    
    int posX;
    int posY;

public:
    Objects(std::string name, int posX, int posY);
    ~Objects();
};

Objects::Objects(/* args */)
{
}

Objects::~Objects()
{
}
