#include <iostream>
using namespace std;

int main()
{
    int arrays[4] = {1, 2, 3, 4};
    cout << "value at position 3: " << arrays[4 - 1] << endl;

    // declaring another array;
    int another_array[4];
    another_array[0] = 10;
    another_array[1] = 20;
    another_array[2] = 30;
    another_array[3] = 40;
    cout << "value at position 0 of another array is: " << another_array[0] << endl;

    // pointer arrays
    // pointer arrays point at first element of the array
    *another_array = 29;
    cout << "value at position 0 of *another array is: " << another_array[0] << endl;

    cout << "value at position 1 of another array is: " << another_array[1] << endl;
    cout << "value at position 2 of another array is: " << another_array[2] << endl;
    cout << "value at position 3 of another array is: " << another_array[3] << endl;

    int *ap = another_array;
    ap++;
    *ap = 209;
    cout << "value at position 1 after pointer is: " << another_array[1] << endl;

    ap++;
    *ap = 309;
    cout << "value at position 2 after pointer is: " << another_array[2] << endl;

    ap++;
    *ap = 409;
    cout << "value at position 3 after pointer is: " << another_array[3] << endl;

    return 0;
}