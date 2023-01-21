#include<iostream>
using namespace std;

void printAllPostions(int a[], int n, int x, int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        cout<<i<<" ";
    }
    printAllPostions(a,n,x,i+1);
}

int main()
{
    int a[] = {1,2,3,2,4,4};
    printAllPostions(a,6,0,0);
}