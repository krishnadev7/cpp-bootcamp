#include <iostream>
#include <string>

using namespace std;

class User
{
    int secret = 12;

public:
    string name = "your default name";
    void getName()
    {
        cout << "Your name is: " << name << endl;
    }
};

int main()
{
    User krish;
    krish.name = "Krishnadev";
    krish.getName();
}