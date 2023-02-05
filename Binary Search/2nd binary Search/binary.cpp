#include<iostream>
#include <algorithm>
using namespace std;

int binarySearch(int a[], int n, int num){
int s = 0, e = n - 1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid]==num){
            return mid;
        }else if(a[mid] < num){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n,num;
    cout<<"Enteer size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements to the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Enter the number to search: "<<endl;
    cin>>num;
    int pos = binarySearch(a,n,num);
    if(pos == -1){
        cout<<"sorry, Number not found!"<<endl;
    }else{
        cout<<"Number found at index: "<<pos<<endl;
    }
    return 0;
}