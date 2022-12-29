#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements to the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "largest value is: " << largest << endl;
    cout << "smallest value is: " << smallest << endl;
    return 0;
}