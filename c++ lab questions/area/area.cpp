/*
    question 2:
                write a program to compute the area of a rectangle, square and circle by overloading the function
                area(). Create a class add neccessary data members and number function to function overloading.
*/

#include <iostream>
using namespace std;

class Geometry
{
    int w, l, s, r;

public:
    void area(float, float);
    void area(float);
    void area(float);
};

void Geometry::area(float l, float w)
{
    cout << "area of rectangle: " << l * w;
}

void Geometry::area(float s)
{
    cout << "area of square is: " << s * s;
}

void Geometry::area(float r)
{
    cout << "area of circle is: " << 3.14 * r * r;
}

int main()
{
    float w, l, s, r;
    Geometry g;
    cout << "Enter length and width: " << endl;
    cin >> l >> w;
    g.area(l, w);
    cout << "Enter the side: " << endl;
    cin >> s;
    g.area(s);
    cout << "Enter the radius: " << endl;
    cin >> r;
    g.area(r);
    return 0;
}
