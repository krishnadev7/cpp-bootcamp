#include <iostream>
using namespace std;

template <typename T>
T getBigger(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout<<getBigger(5, 8);
}