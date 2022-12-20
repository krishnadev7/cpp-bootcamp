#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    while (num >= 0)
    {
        sum += num;
        cout << "Enter a number";
        cin >> num;
    }
    cout << "sum of numbers is: " << sum << endl;
    return 0;
}