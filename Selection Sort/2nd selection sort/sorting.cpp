#include<iostream>
using namespace std;

void selectionSort(int a[],int n){
    for(int i = 0; i<=n-2; i++){
        int smallest = i;
        for(int j = i+1; j<=n-1; j++){
            if(a[j] < a[smallest]){
                smallest = j;
            }
        }
        
            swap(a[i],a[smallest]);
    }
    cout << "After Selection Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int s;
    cout << "Enter Size of the array: " << endl;
    cin >> s;

    int a[s];
    cout << "Enter " << s << " elements to the array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, s);

    
    return 0;
}