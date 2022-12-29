#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements to the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout << "Entered elements to the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout << endl;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Sum of the array is: " << sum << endl;
}