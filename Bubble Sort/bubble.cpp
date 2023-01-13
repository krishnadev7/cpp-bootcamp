#include<iostream>
using namespace std;

void BubbleSort(int a[], int s){
    for(int count = 1; count<=s-1; count++){
        for(int j = 0; j<=s-2; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i  = 0; i<s; i++){
        cout<<a[i]<<" ";
    }
};

int main(){
    int s;
    cout<<"Enter Size of the array: "<<endl;
    cin>>s;
    int a[s];
    cout<<"Enter "<<s<<" elements to the array: "<<endl;
    for(int i = 0; i<s; i++){
        cin>>a[i];
    }
    BubbleSort(a,s);
}