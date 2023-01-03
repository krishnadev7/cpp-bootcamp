#include <iostream>
using namespace std;

class ComplexNumber
{
    int Real;
    int Img;

public:
    ComplexNumber(int Real, int Img)
    {
        this->Real = Real;
        this->Img = Img;
    }

    void Print()
    {
        cout << "Real is " << Real << " Imaginery is " << Img << endl;
    }

    void Plus(ComplexNumber const &c2)
    {
        Real = Real + c2.Real;
        Img = Img + c2.Img;
    }

    void Multiply(ComplexNumber const &c2)
    {
        Real = Real * c2.Real - Img * c2.Img;
        Img = Real * c2.Img + Img * c2.Real;
    }
};

int main()
{
    int Real1, Img1, Real2, Img2;

    cin >> Real1 >> Img1;
    cin >> Real2 >> Img2;

    ComplexNumber c1(Real1, Img2);
    ComplexNumber c2(Real2, Img2);

    int choice;
    cout << "Enter choice" << endl;
    cin >> choice;
    
    if (choice == 1)
    {
        c1.Plus(c2);
        c1.Print();
    }
    if (choice == 2)
    {
        c1.Multiply(c2);
        c1.Print();
    }
}