#include <iostream>
using namespace std;

int lsearch(int a[], int n, int key)
{
 for(int i=0; i<n; i++){
    if(a[i] == key){
        return i+1;
    }
 }
 return -1;
}

int main()
{
    int a[20], len, i, key;
    cout << "Enter size of the array: " << endl;
    cin >> len;
    cout << "Enter elements to the array: " << endl;
    for (i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cout << "Enter key to search: " << endl;
    cin >> key;
    int loc = lsearch(a, len, key);
    if (loc == -1)
    {
        cout << "Element not found!" << endl;
    }
    cout << "element found at position: " << loc;
}