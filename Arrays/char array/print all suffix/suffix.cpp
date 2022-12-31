#include <iostream>
#include <cstring>
using namespace std;

void printSuffix(char str[])
{
    int start = 0;
    int end;
    int i = 0;
    while (str[i])
    {
        end = i;
        i++;
    }

    while (start <= end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    for (int e = 0; str[e] != 0; e++)
    {
        for (int s = 0; s <= e; s++)
        {
            cout << str[s];
        }
        cout << endl;
    }
}

int main()
{
    char str[100];
    cout << "Enter any word";
    cin >> str;
    printSuffix(str);
    return 0;
}