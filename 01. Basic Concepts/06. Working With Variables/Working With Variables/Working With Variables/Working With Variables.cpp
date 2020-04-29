// Working With Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Declaring Variables

You have the option to assign a value to the variable at the time you declare the variable or to declare it and assign a value later.
You can also change the value of a variable.
Some examples: int a;
int b = 42;

a = 10;
b = 3;
*/

/*
User Input

To enable the user to input a value, use cin in combination with the extraction operator (>>). 
The variable containing the extracted data follows the operator.
The following example shows how to accept user input and store it in the num variable: 

int num;
cin >> num;

As with cout, extractions on cin can be chained to request more than one input in a single statement:

cin >> a >> b;
*/

/*
Accepting User Input

The following program prompts the user to input a number and stores it in the variable a:
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Please enter a Number\n";
    cin >> a;
    return 0;
}
/*
When the program runs, it displays the message "Please enter a number", and then waits for the user to enter a number and press Enter, or Return.
The entered number is stored in the variable a.
*/

/*
Accepting User Input

You can accept user input multiple times throughout the program:
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number \n";
    cin >> a;
    cout << "Enter another number \n";
    cin >> b;

    return 0;
}
*/



