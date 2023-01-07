/*
    question 5: 
                write a program to add two time class using object or argument.
*/

#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    void get()
    {
        cout << "Enter hours: " << endl;
        cin >> hr;
        cout << "Enter minutes: " << endl;
        cin >> min;
        cout << "Enter seconds: " << endl;
        cin >> sec;
    }
    void sum(Time &t1, Time &t2)
    {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + (sec / 60);
        hr = t1.hr + t2.hr + (min / 60);
    }
    void display()
    {
        cout << "sum of time is: " << endl;
        cout << hr << "hr"
             << ":" << min << "min"
             << ":" << sec << "sec" << endl;
    }
};

int main()
{
    Time t1, t2, t3;
    cout << "Enter First time Details: " << endl;
    t1.get();
    cout << "Enter Second time Details: " << endl;
    t2.get();
    cout << "entered First time is: " << endl;
    t1.display();
    cout << "entered Second time is: " << endl;
    t2.display();
    t3.sum(t1, t2);
    t3.display();
}