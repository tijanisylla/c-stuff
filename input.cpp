
#include <iostream>
using namespace std;

// Input to the terminal
int main()
{
    cout << "Enter a value for x and y: ";

    double x;
    double y;
    cin >> x;
    cin >> y;
    // I can also use cin >> x >> y; will work the same way.

    cout << "Your total value is : " << endl
         << x + y;

    return 0;
}