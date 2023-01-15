#include <iostream>
using namespace std;

int LinearSearch(int a[], int s, int num){
    for(int i = 0; i<s; i++){
        if(a[i] == num){
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int s,num;
    cout<<"Enter Size of the array: "<<endl;
    cin>>s;
    int a[s];
    cout<<"Enter "<<s<<" Elements to the array: "<<endl;
    for(int i = 0; i<s; i++){
        cin>>a[i];
    }
    cout<<"Enter Element to search: "<<endl;
    cin>>num;
    int pos = LinearSearch(a,s,num);
    if(pos == -1){
        cout<<"Element not found !!!";
    }else{
        cout<<"Element found at position "<<pos<<endl;
    }
}