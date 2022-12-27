#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbers[6] = {1, 5, 2, 4, 3, 6};
    cout << "unsorter values" << endl;
    for (int n : numbers)
    {
        cout << n << " ";
    }

    sort(numbers, numbers + 6);

    cout << "Sorter values: " << endl;
    for (int n : numbers)
    {
        cout << n << " ";
    }
    return 0;
}