#include <iostream>
using namespace std;

int Binarysearch(int a[], int n, int num)
{
    int s = 0, e = n - 1;
    while(s<=e){
        int mid = s + (e - s)/2;
        if(a[mid] == num){
            return mid;
        }else if(a[mid] > num){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int s, num;
    cout << "Enter Size of the array: " << endl;
    cin >> s;
    int a[s];
    cout << "Enter " << s << " Elements to the array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Element to search: " << endl;
    cin >> num;
    int pos = Binarysearch(a, s, num);
    if (pos == -1)
    {
        cout << "Element not found !!!";
    }
    else
    {
        cout << "Element found at position " << pos + 1 << endl;
    }
}