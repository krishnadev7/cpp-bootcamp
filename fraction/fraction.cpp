#include <iostream>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void add(Fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;

        this->numerator = num;
        this->denominator = lcm;
        simplify();
    }

    void simplify()
    {
        int hcf = 1;
        int j = min(numerator, denominator);
        cout << "min value is: " << j << endl;
        for (int i = 1; i < j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                hcf = i;
            }
        }
        numerator = numerator / hcf;
        denominator = denominator / hcf;
    }
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}