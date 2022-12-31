#include <iostream>
using namespace std;

void length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    cout << "Length of the name is: " << count << endl;
}

int main()
{
    char name[100];
    cout << "Enter a name" << endl;
    cin >> name;
    cout << "You entered name is: " << name << endl;
    length(name);
    return 0;
}