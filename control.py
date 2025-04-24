#
#   The main control program
#   
#   
#   There are (TBD) threads:
#
#       A main thread for telling the threads what to do, and controlling the bot  
#   
#       An event handler for handling changes
#
#
#

########## Imports ##########

# standard libary imports
import time
import threading

# custom imports
import controlFunctions
import eventHandler

########## startup ##########

# do some happy beeps

# define varibles

is_on = True

MAX_TIME_NO_HUMAN = 60 # in seconds

TIME_PER_CYCLE = 0.5 # temp value

# initiate threads

threading.Thread eventHandler

########## Main Loop ##########

# main loop
while(is_on):

    #

    # find human
    found_human = False # TODO: implement human detection 
    
    # if found human, do follow loop
    if (found_human):

        follow_human = True

        # follow loop
        while(follow_human):
            
            # follow tracked human until set time or other parameters
            found_human = False # TODO: implement follow


            # once human is out of tracking parameters, wander for ~1 minute, then exit loop


    # if no human is found after MAX_TIME_NO_HUMAN seconds, do idle loop
    if(time.ctime() > MAX_TIME_NO_HUMAN):
        # idle loop

            # SETUP:
            
            # move to a wall and face cammera into the room.

            # slow camera fps and initiate other low power mode settings, wait for signs of a human

            # MAIN LOOP:

            # exit loop if human is detected
        
    # exit main loop after shutdown command.
    # LOW BATTERY: if low battery is detected, move to the nearest wall and shutdown.


########## Shut Down ##########

# do some sleepy beeps

# shutdown threads

