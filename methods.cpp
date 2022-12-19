#include <iostream>
#include <cmath>

using namespace std;
// Using cmath library

// int main()
// {
//     double result = pow(2, 3); // 2 × 2 × 2 = 8
//     cout << result;
//     return 0;
// }

int main()
{
    cout << "Enter raduis :";
    double readuis;

    cin >> readuis;
    const double pi = 3.14;
    double area = pi * pow(readuis, 2);
    cout << area << endl;
    return 0;
}