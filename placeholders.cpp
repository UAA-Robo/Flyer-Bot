/*

The impementation file for the placeholders.h header file.

*/

// inclusions

#pragma once
#include "paceholders.h"

/*
setDrive() commands the wheels to move forward at a inputed streangth from -100 to 100.
A steangth of 100 is full forward drive, 0 is no drive or stop, and -100 is full reverse drive. 
Values above 100 or below -100 are automatically adjusted to fit within those bounds.
*/
void setDrive(int power)
{

    if(power > 100) 
    {

        // set torque of the wheels to 100

        return;

    }
    else if(power < -100) 
    {

        // set torque of the wheels to -100

        return;

    }

    //set the torque of the wheels to "power"

}


/*
setDrive(int,int) sets the moter with the specified ID to the given power

0 is the left-front moter
1 is the right-front moter
2 is the back moter
*/
void setDrive(int moterID, int power)
{

    // set torgue of moterID moter to power. 

}


/*
setDrive(int, int, int) commands each wheels to move at a unique inputed streangth from -100 to 100.
A steangth of 100 is full forward drive, 0 is no drive or stop, and -100 is full reverse drive. 
Values above 100 or below -100 are automatically adjusted to fit within those bounds.

mPowLeft is the front left moter.
mPowRight is the front right moter.
mPowBack is the back center moter.
*/
void setDrive(int mPowLeft, int mPowRight, int mPowBack)
{

    // set torque of front-left moter
    setDrive(0, mPowLeft);

    // set torque of front-right moter
    setDrive(1, mPowRight);

    // set torque of back-center moter
    setDrive(2, mPowBack);

}
