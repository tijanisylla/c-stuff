#include <iostream>
using namespace std;
// Tempature from fahrenheit to celsius.

/*
Operation =  (20°F − 32) × 5/9 = -6.667°C
Or
Operation =  (20°F − 32) / 1.8 = -6.667°C
*/
int main()
{
    cout << "Enter a fahrenheit value: ";

    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Tempature from fahrenheit to celsius is: " << endl
         << celsius << endl;
    return 0;
}