
/*

the main control system for flyer bot 

will need to split this between a python-based main control program and c++ moter controler.

this program will have comments to represent yet to be defined inputs and functions.

note: 250 will be full throttle, 0 will be full stop.

note: use accelstepper for moters

*/

// Header Files
#pragma once
#include "Object.h"
#include "Flyer.h"
#include "placeholders.h" // a temporary file
#include <thread>
#include <AccelStepper.h> // may need to download this

int main()
{

    // - varibles -

    bool isRunning = true;

    // object lists
        // priority object list (for moving objects, i.e. humans) 
    Object* objects = new Object[10]; // 10 is a temp value
        // stationary object list
    Object* stationary = new Object[20]; // 20 is a temp value

    // - setup thread proccesses -
    proccesses[0] = new std::thread(updateObjectsThread());

    // object update loop (thread)
    std::thread objectUpdate(updateObjectsThread(objects, stationary, isRunning));
        // retreives object data from AI cammera
        // then, update object lists
            // iterate though each list, first updating objects, then adding new objects.


    // - main loops -

    // primary loop

    while(isRunning)
    {

        // check ground pointed sensors for change
            // stop if a deviation is detected 
        if (/*any sensor value is outside than distance to ground range of values or becomes undefined*/)
        {

            // Stop

        }
        
        // 

    }

}