// Comments.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Comments

Comments are explanatory statements that you can include in the C++ code to explain what the code is doing.
The compiler ignores everything that appears in the comment, so none of that information shows in the result.

A comment beginning with two slashes (//) is called a single-line comment. The slashes tell the compiler to ignore everything that follows, until the end of the line.

For example:
*/

#include <iostream>

int main()
{
    //Prints "Hello World"
    std::cout << "Hello World!\n";
}

// Multi - Line Comments

// Comments that require multiple lines begin with /* and end with */
// You can place them on the same line or insert one or more lines between them.

/* This is a comment */

/* 
    C++ comments can
    span multiple lines
 */

// Comments can be written anywhere, and can be repeated any number of times throughout the code.
// Within a comment marked with /* and */, // characters have no special meaning, and vice versa. This allows you to "nest" one comment type within the other. 