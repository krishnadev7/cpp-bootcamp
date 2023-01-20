#include <iostream>
using namespace std;

// 1st way

bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }
    bool isSmallerArraySorted = isSorted(a + 1, n - 1);
    return isSmallerArraySorted;
}

// 2nd way

bool isSorted3(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (a[n - 2] > a[n - 1])
    {
        return false;
    }
    return isSorted3(a, n - 1);
}

int main()
{
    int a[] = {1, 2, 3, 5, 4};
    if (isSorted3(a, 5))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not-sorted";
    }
    return 0;
}