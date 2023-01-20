#include <iostream>
using namespace std;

// 1st way
int SumOfArray(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return a[0] + SumOfArray(a + 1, n - 1);
}

// 2nd way
int SumOfArray2(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return a[n - 1] + SumOfArray2(a, n - 1);
}

// 3rd way
int SumOfArray3(int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }
    return a[i] + SumOfArray3(a, n, i + 1);
}

int main()
{
    int a[] = {1, 2, 3, 5, 4};
    cout << SumOfArray3(a, 5, 0);
    return 0;
}