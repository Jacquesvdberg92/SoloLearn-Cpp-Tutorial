// Basic Arithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
C++ supports these arithmetic operators:
https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
}

/*
The addition operator adds its operands together.
int x = 40 + 60;
cout << x;

// Outputs 100

Subtraction

The subtraction operator subtracts one operand from the other.
int x = 100 - 60;
cout << x;

//Outputs 40

Multiplication

The multiplication operator multiplies its operands.
int x = 5 * 6;
cout << x;

//Outputs 30

Division

The division operator divides the first operand by the second. Any remainder is dropped in order to return an integer value.
Example:
int x = 10 / 3;
cout << x;

// Outputs 3

Modulus

The modulus operator (%) is informally known as the remainder operator because it returns the remainder after an integer division.

For example:
int x = 25 % 7;
cout << x;

// Outputs 4
*/

/*
Operator Precedence

Operator precedence determines the grouping of terms in an expression, which affects how an expression is evaluated. Certain operators take higher precedence over others; for example, the multiplication operator has higher precedence over the addition operator.
For example:
int x = 5+2*2;
cout << x;
// Outputs 9

The program above evaluates 2*2 first, and then adds the result to 5.

As in mathematics, using parentheses alters operator precedence.
int x = (5 + 2) *2;
cout << x;

// Outputs 14

Parentheses force the operations to have higher precedence. If there are parenthetical expressions nested within one another, the expression within the innermost parentheses is evaluated first.
If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before additive (addition, subtraction) operators.
*/