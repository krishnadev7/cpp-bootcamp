#include <iostream>
using namespace std;

int main()
{
    bool isFbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = false;

    if ((isGoogleUser || isFbUser) && isAdmin)
    {
        cout << "Welcome";
    }
    else
    {
        cout << "not logged in or you are not a admin";
    }
}