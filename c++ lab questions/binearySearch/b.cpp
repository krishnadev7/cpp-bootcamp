#include <iostream>
using namespace std;

int bSearch(int a[], int e, int key)
{
    int s = 0, mid = s + e / 2;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            return mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int a[20],len,i,key;
    cout<<"Enter size of the array: "<<endl;
    cin>>len;
    cout<<"Enter elements to the array: "<<endl;
    for(i=0;i<len;i++){
        cin>>a[i];
    }
    cout<<"Enter key to search: "<<endl;
    cin>>key;
    int loc = bSearch(a,len,key);
    if(loc == -1){
         cout<<"Element not found!"<<endl;
    }
    cout<<"element found at position: "<<loc;
}