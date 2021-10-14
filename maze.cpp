/*
This file contains two functions: dead_end() and traverse_maze.
The purpose of dead_end() is to identify whether there is a wall, or if there is a visited spot in front of Ann.
The purpose of traverse_maze() is to guide Ann through the maze and back out safely through user input. This function
utilizes the function dead_end().
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "Sureshauxa1.h"

using namespace std;

bool dead_end()
{
    if (inquire("Are you facing a wall?")) //To see if there is a wall 
    {
        return true;
    }
    else if (inquire("Is your name written in front of you?")) //to see if there is a name in front
    {

        return true;
    }
    else
    {
        return false; //function returns false if the above two are not satisfied
    }
    
// Postcondition:The return value is true if the direction directly in front
// is a deadend (i.e., a direction that cannot contain the tapestry)
} 

bool traverse_maze()
{   
    cout << "Step forward and write your name on the ground" << endl; //first directive prompt

    if (inquire("Have you found the tapestry?")) //interactive prompt
    {
        cout << "Pick up the tapestry and take a step backward." << endl;
        return true; //base case #1
    }
    else
    {
        int direction = 0; //keeps a counter of the direction faced so Ann can retrace her steps
        for (int i = 0; i < 3; i++)
        {
            direction = i;
            if (direction == 0)
            {
                cout << "Please turn left 90 degrees" << endl;
                if (!dead_end()) //if dead_end() returns false
                {
                    traverse_maze(); //recursive call
                    cout << "Please turn right 90 degrees" << endl; 
                    return true;

                }  
            }
            else
            {
                cout << "Please turn right 90 degrees" << endl;
                if (!dead_end())
                {
                    traverse_maze();
                    cout << "Please turn left 90 degrees" << endl;
                    return true;
                }
                direction = 1;
            }  
        }
        return false; //returns false if the tapestry is not found (base case#2)
    }
}
// Precondition: The user of the program is facing an unblocked spot in the
// maze which has not previously been visited by the user.
// Postcondition: The function has asked a series of questions and provided
// various directions to the user. The questions and directions have led the
// user through the maze and back to the exact same position that the user
// started at. The return value of the function is a true/false value
// indicating whether or not the user found a magic tapestry in the maze.
