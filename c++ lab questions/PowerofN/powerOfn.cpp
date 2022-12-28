/*
question 1:
            write a function power raise a number m to a power n(m)^2. use a default value of n to make the function to
            calculate square when this argument is emitted. write a main function that gets the value of m&n from the
            user to test the function ?.
*/

#include <iostream>
using namespace std;

double power(double num, int = 2);

int main()
{
    double num, p;
    int exp;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter the exponent: " << endl;
    cin >> exp;
    p = power(num, exp);
    cout << "Result without default argument: " << p << endl;
    p = power(num);
    cout << "Result with default argument: " << p << endl;
    return 0;
}

double power(double num, int exp)
{
    double pow = 1;
    for (int i = 1; i <= exp; i++)
    {
        pow = pow * num;
    }
    return pow;
}

