/*

The impementation file for the placeholders.h header file.

*/

// inclusions

#pragma once
#include "paceholders.h"

/*
setDrive(int) commands the wheels to move forward at a inputed streangth from -128 to 127.
A steangth of 127 is full forward drive, 0 is no drive or stop, and -128 is full reverse drive. 
Values above 127 or below -128 are automatically adjusted to fit within those bounds.
*/
void setDrive(signed char power)
{

    if(power > 127) 
    {

        // set torque of the wheels to 127

        return;

    }
    else if(power < -128) 
    {

        // set torque of the wheels to -128

        return;

    }

    //set the torque of the wheels to "power"

}


/*
setDrive(int, int) sets the moter with the specified ID to the given power

0 is the left-front moter
1 is the right-front moter
2 is the back moter
*/
void setDrive(int moterID, signed char power)
{

    // set torgue of moterID moter to power. 

}


/*
setDrive(int, int, int) commands each wheels to move at a unique inputed streangth from -128 to 127.
A steangth of 127 is full forward drive, 0 is no drive or stop, and -128 is full reverse drive. 
Values above 127 or below -128 are automatically adjusted to fit within those bounds.

mPowLeft is the front left moter.   (ID: 0)
mPowRight is the front right moter. (ID: 1)
mPowBack is the back center moter.  (ID: 2)
*/
void setDrive(signed char mPowLeft, signed char mPowRight, signed char mPowBack)
{

    // set torque of front-left moter
    setDrive(0, mPowLeft);

    // set torque of front-right moter
    setDrive(1, mPowRight);

    // set torque of back-center moter
    setDrive(2, mPowBack);

}
