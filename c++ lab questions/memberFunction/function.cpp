/*
    question 3:
                write a program to declare a class item width data members item no and item cost it includes member
                function for reading and printing the values of item write a main function with two items to implement the
                functionality.
*/

#include <iostream>
using namespace std;

class Item
{
    int itemNo;
    int itemCost;

public:
    void getItem();
    void putItem();
};

void Item::getItem()
{
    cout << "Enter item number: " << endl;
    cin >> itemNo;
    cout << "Enter item cost: " << endl;
    cin >> itemCost;
}

void Item::putItem()
{
    cout << "Item no: " << itemNo << endl;
    cout << "Item cost: " << itemCost << endl;
}

int main()
{
    Item T1, T2;
    cout << "Item T1" << endl;
    T1.getItem();
    T1.putItem();
    cout << "Item T2" << endl;
    T2.getItem();
    T2.putItem();
    return 0;
}