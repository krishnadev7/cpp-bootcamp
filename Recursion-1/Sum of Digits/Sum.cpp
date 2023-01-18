#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = Sum(n / 10);
    int lastIndex = n % 10;
    return smallAns + lastIndex;
}

int main()
{
    cout << Sum(12345);
    return 0;
}