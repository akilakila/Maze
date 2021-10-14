/*
This file contains the main test driver function. 
It utilizes the function traverse_maze(), which in turn utilizes the other functions.
An if statement is used to differentiate between the two stopping cases.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "maze.h"
#include "Sureshauxa1.h"


using namespace std;

int main(int argc, char *argv[])
{
    if (traverse_maze())
    {
        cout << "Please turn right 90 degrees" << endl; 
        cout << "Please step forward, then turn 180 degrees." << endl;
        cout << "You found it!!" << endl; //tapestry was found!! Ann makes it back safe and sound
    }
    else 
    {
        cout << "Please turn right 90 degrees" << endl;
        cout << "Please step forward, then turn 180 degrees." << endl;
        cout << "It wasn't found!!" << endl; //tapestry wasn't found and Ann has to come back :(
    }
}

/*
Commented out test validation run: 

RUN #1:
Step forward and write your name on the ground
Have you found the tapestry?[Yes or No]
no
Please turn left 90 degrees
Are you facing a wall?[Yes or No]
no
Is your name written in front of you?[Yes or No]
no
Step forward and write your name on the ground
Have you found the tapestry?[Yes or No]
no
Please turn left 90 degrees
Are you facing a wall?[Yes or No]
yes
Please turn right 90 degrees
Are you facing a wall?[Yes or No]
no
Is your name written in front of you?[Yes or No]
no
Step forward and write your name on the ground
Have you found the tapestry?[Yes or No]
yes
Pick up the tapestry and take a step backward.
Please turn left 90 degrees
Please turn right 90 degrees
Please turn right 90 degrees
Please step forward, then turn 180 degrees.
You found it!!

RUN #2
Step forward and write your name on the ground
Have you found the tapestry?[Yes or No]
no
Please turn left 90 degrees
Are you facing a wall?[Yes or No]
yes
Please turn right 90 degrees
Are you facing a wall?[Yes or No]
yes
Please turn right 90 degrees
Are you facing a wall?[Yes or No]
yes
Please turn right 90 degrees
Please step forward, then turn 180 degrees.
It wasn't found!!
*/
