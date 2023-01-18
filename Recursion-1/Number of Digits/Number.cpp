#include <iostream>
using namespace std;

int Count(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = Count(n / 10);
    return smallAns + 1;
}

int main()
{
    cout<<Count(740);
    return 0;
}