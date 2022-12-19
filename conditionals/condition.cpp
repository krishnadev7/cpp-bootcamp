#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 1 - 5" << endl;
    cin >> num;

    if (num == 1)
    {
        cout << "Rating is 1" << endl;
    }
    else if (num == 2)
    {
        cout << "Rating is 2" << endl;
    }
    else if (num == 3)
    {
        cout << "Rating is 3" << endl;
    }
    else if (num == 4)
    {
        cout << "Rating is 4" << endl;
    }
    else if (num == 5)
    {
        cout << "Rating is 5" << endl;
    }
    else
    {
        cout << "invalid number! Enter a number between 1 to 5" << endl;
    }

    cout << "The rating is " << (num > 4 ? "best" : "good");
    return 0;
}