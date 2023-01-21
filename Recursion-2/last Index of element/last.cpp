#include<iostream>
using namespace std;

// first way
int lstIndex(int a[], int n, int x, int i){
    if(i == -1){
        return -3;
    }
    if(a[i] == x){
        return i;
    }
    return lstIndex(a,n,x,i-1);
} 

// second way
int lstIndex2(int a[], int n, int x){
    if(n == 0){
        return -1;
    }
    if(a[n-1] == x){
        return n-1;
    }
    return lstIndex2(a,n-1,x);
}

int lstIndex3(int a[], int n, int x, int i){
    if(i == n){
        return -1;
    }
    int indexInRem = lstIndex3(a,n,x,i+1);
    if(indexInRem == -1){
        if(a[i] == x){
            return i;
        }else{
            return -1;
        }
    }else{
        return indexInRem;
    }
}

int main(){
    int a[] = {1,3,4,3,5};
    cout<<lstIndex3(a,5,3,0);
}