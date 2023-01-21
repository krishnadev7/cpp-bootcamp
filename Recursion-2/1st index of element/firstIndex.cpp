#include<iostream>
using namespace std;

int FirstIndex(int a[], int n, int x, int i){
    if(i == n){
        return -1;
    }
    if(a[i] == x){
        return i + 1;
    }
   return FirstIndex(a,n,x,i+1);
}

int main()
{
    int a[] = {1,2,4,3,4};
    cout<<FirstIndex(a,5,3,0);
    return 0;
}