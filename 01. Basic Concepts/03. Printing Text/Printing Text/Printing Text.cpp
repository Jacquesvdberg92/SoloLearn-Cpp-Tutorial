#include <iostream>
using namespace std;

int main()
{
    /*
    Your First C++ Program

    You can add multiple insertion operators after cout.
    cout << "This " << "is " << "awesome!";
    */
    cout << "This " << "is " << "awesome!";

    /*
    New Line

    The cout operator does not insert a line break at the end of the output.
    One way to print two lines is to use the endl manipulator, which will put in a line break.

    cout << "Hello world!" << endl;
    cout << "I love programming!";

    The endl manipulator moves down to a new line to print the second text. 
    */
    cout << "Hello world!" << endl;
    cout << "I love programming!";

    /*
    New Lines

    The new line character \n can be used as an alternative to endl.
    The backslash (\) is called an escape character, and indicates a "special" character.

    Example:

    cout << "Hello world! \n";
    cout << "I love programming!";
    */
    cout << "Hello world! \n";
    cout << "I love programming!";

    /*
    Two newline characters placed together result in a blank line.

    cout << "Hello world! \n\n";
    cout << "I love programming!";
    */
    cout << "Hello world! \n\n";
    cout << "I love programming!";

    /*
    Multiple New Lines

    Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text.
    
    cout << " Hello \n world! \n I \n love \n programming!";
    */
    cout << " Hello \n world! \n I \n love \n programming!";

    return 0;
}



