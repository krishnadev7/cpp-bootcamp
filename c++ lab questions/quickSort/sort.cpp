#include <iostream>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[start];
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(a[start], a[end]);
        }
    }
 swap(a[start], a[end]);
 return end;
}

void quickSort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int loc = partition(a, start, end);
    quickSort(a, start, loc - 1);
    quickSort(a, loc + 1, end);
}

int main()
{
    int a[20], len, i;
    cout << "Enter size of the array: " << endl;
    cin >> len;
    cout << "Enter " << len << " elements to the array: " << endl;
    for (i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, len - 1);
    cout << "After quick Sort: " << endl;
    for (i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
}