/*
    question 4:
                create a class employee with name and age as data members it also contains members function for
                reading and displaying the details of employees create a an array of members from the employee class
                write a main function for implementing the details of all manager array of objects.
*/

#include <iostream>
using namespace std;

class Employee
{
    int age;
    char name[50];

public:
    void getData()
    {
        cout << "Enter employee name" << endl;
        cin >> name;
        cout << "Enter employee age" << endl;
        cin >> age;
    }
    void putData()
    {
        cout << "Name of the employee is: " << name << endl;
        cout << "Age of " << name << " is " << age << endl;
    }
};

int main()
{
    Employee E1, E2;
    cout << "Employee 1" << endl;
    E1.getData();
    cout << endl;
    E1.putData();
    cout << endl;
    cout << "Employee 2" << endl;
    E2.getData();
    cout << endl;
    E2.putData();

    return 0;
}