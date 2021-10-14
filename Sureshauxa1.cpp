/*
This file contains two functions: eat_line() and inquire()
These two functions work in tandom in order to retrive the first letter of the user's input (Y or N).
*/
#include <iostream> //provides cout, cin, get
#include <cctype> //provides toupper
#include <string>
#include <iomanip>
#include "Sureshauxa1.h"

using namespace std;

void eat_line()
{
    char next;

    do
    {
        cin.get(next);

    } while (next != '\n');
    
}

bool inquire(const char query[ ])
{
    char answer;
    do
    {
        cout << query << "[Yes or No]" << endl;
        cin >> answer;
        answer = toupper(answer);
        eat_line();
        
    } while ((answer != 'Y') && (answer != 'N'));

    return(answer == 'Y');

}
    
