#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Corners
{
    float a, b, c, d;
};

ostream &operator<<(ostream &stream, const Corners &corner)
{
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d << endl;
    return stream;
}

int main()
{
    vector<int> index;

    index.push_back(1);
    index.push_back(2);
    index.push_back(3);
    index.push_back(4);
    index.push_back(5);

    for (auto i = index.begin(); i != index.end(); ++i)
    {
        cout << *i << endl;
    }

    vector<Corners> corners;

    corners.push_back({6, 7, 8, 9});
    corners.push_back({10, 11, 12, 13});

    for (int i = 0; i < corners.size(); ++i)
    {
        cout << corners[i] << endl;
    }

    return 0;
}