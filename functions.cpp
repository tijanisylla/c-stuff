#include <iostream>
using namespace std;

int myFunction(int feren_height)
{
    double celsius = (feren_height - 32) / 1.8;
    return celsius;
}

int main()
{
    int result = myFunction(20);
    cout << "The tempature to celsius today is: " << result << endl;
    return 0;
}