/*

This is a temperary .h file used for placeholder objects and methods. 

*/

// placeholder hardware functions
// note: 127 will be full throttle, 0 will be full stop, and -128 will be full reverse.
    // these values will be 8-bit integers

/*
setDrive(int) commands the wheels to move forward at a inputed streangth from -128 to 127.
A steangth of 127 is full forward drive, 0 is no drive or stop, and -128 is full reverse drive. 
Values above 127 or below -128 are automatically adjusted to fit within those bounds.
*/
void setDrive(signed char power);

/*
setDrive(int, int) sets the moter with the specified ID to the given power

0 is the left-front moter
1 is the right-front moter
2 is the back moter
*/
void setDrive(int moterID, signed char power);

/*
setDrive(int, int, int) commands each wheels to move at a unique inputed streangth from -128 to 127.
A steangth of 127 is full forward drive, 0 is no drive or stop, and -128 is full reverse drive. 
Values above 127 or below -128 are automatically adjusted to fit within those bounds.

mPowLeft is the front left moter.
mPowRight is the front right moter.
mPowBack is the back center moter.
*/
void setDrive(signed char mPowLeft, signed char mPowRight, signed char mPowBack);
