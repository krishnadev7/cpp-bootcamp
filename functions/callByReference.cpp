#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "value of a before swapping: " << a << endl;
    cout << "value of b before swapping: " << b << endl;

    swap(a, b);

    cout << "value of a after swapping: " << a << endl;
    cout << "value of b after swapping: " << b << endl;
}