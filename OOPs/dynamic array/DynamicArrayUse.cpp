#include <iostream>
using namespace std;
#include "DynamicArray.cpp"

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();
    cout << d1.getCapacity() << endl;
    return 0;
}