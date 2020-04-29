// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Variables

Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each variable you declare.
C++ offer a rich assortment of built-in as well as user defined data types.

Integer, a built-in type, represents a whole number value. Define integer using the keyword int.
C++ requires that you specify the type and the identifier for each variable defined.
An identifier is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters, underscores, and digits (0 to 9).
For example, define a variable called myVariable that can hold integer values as follows:
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    Now, let's assign a value to the variable and print it.
    */


    // Variable:
    int myVariable = 10; // of type integer, and det to a value of 10
    cout << myVariable;
    // outputs 10
}

/*
Define all variables with a name and a data type before using them in a program. In cases in which you have multiple variables of the same type, it's possible to define them in one declaration, separating them with commas.int a, b;
// defines two variables of type int
A variable can be assigned a value, and can be used to perform operations.
For example, we can create an additional variable called sum, and add two variables together.

int a = 30;
int b = 15;
int sum = a + b;
Now sum equals 45
*/

/*
Let's create a program to calculate and print the sum of two integers.

#include <iostream>
using namespace std;

int main()
{
   int a = 30;
   int b = 12;
   int sum = a + b;

   cout << sum;

    return 0;
}

//Outputs 42
*/
