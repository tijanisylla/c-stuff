#include <iostream>
using namespace std;

class verifyUser
{

public:
    string name; // Attribute (string variable)
    int age;     // Attribute (int variable)

    void getInfo()
    {

        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter you age : ";
        cin >> age;
        cout << "Your name is: " << name << endl
             << "Your age is: " << age;
    }
};

int main()
{
    verifyUser myClass; // Attribute (verifyUser variable)
    myClass.getInfo();
    return 0;
}
