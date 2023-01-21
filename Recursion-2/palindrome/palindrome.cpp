#include<iostream>
using namespace std;

int chekpalind(int a[], int s, int e){
    if(s > e){
        return true;
    }
    if(a[s] == a[e]){
        return chekpalind(a,s+1,e-1);
    }else{
        return false;
    }
}

int main()
{
    int a[] = {1,2,3,4,5,3,2,1};
    cout<<chekpalind(a,0,7);
    return 0;
}