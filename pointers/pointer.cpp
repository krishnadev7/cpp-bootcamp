#include<iostream>
using namespace std;

int main() {
    int card = 50;
    int my_card;

    // pointer declaration
    int *myp = &card;

    // pointer deref
    my_card = *myp;

    cout<<"value of the card is: "<< my_card << endl;
    cout<<"value of the pointer is: "<< myp << endl;
}