#include <iostream>
#include <string>

using namespace std;
/*
? 2D array
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}
*/
int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    int size = sizeof(cars) / sizeof(cars[0]); // to get the length of the array

    for (int i = 0; i < size; i++)
    {
        cout << cars[i] << "\n";
    }

    return 0;
}