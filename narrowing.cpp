#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String
*/
int main()
{
    long elapsed = time(0); // Jan 1 1970
    srand(elapsed);         // to get the ame randome  number.
    long number = rand() % 10;
    cout << number;
    return 0;
}