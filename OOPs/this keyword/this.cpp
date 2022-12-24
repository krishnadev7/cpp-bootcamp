#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    double _length;
    double _breadth;

public:
    Rectangle(double l = 4.5, double b = 5.5)
    {
        _length = l;
        _breadth = b;
    }

    double Area()
    {
        return _length * _breadth;
    }

    int compare(Rectangle rectangle)
    {
        return this->Area() > rectangle.Area();
    }
};

int main()
{
    Rectangle h1( 3.5, 2.5);
    cout << "area of h1 is: " << h1.Area() << endl;
    Rectangle h2(5.5, 6.5);
    cout << "area of h2 is: " << h2.Area() << endl;

    if (h1.compare(h2))
    {
        cout << "h2 is smaller" << endl;
    }
    else
    {
        cout << "h2 is bigger" << endl;
    }
}