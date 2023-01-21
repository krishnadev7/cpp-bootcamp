#include<iostream>
using namespace std;

void occrence(int a[], int n, int x, int i, int &ans){
    if(i == n){
        return;
    }
    if(a[i] == x){
        ans++;
    }
    occrence(a,n,x,i+1,ans);
}
int main()
{
    int a[] = {1, 2, 3, 2, 4, 4};
    int ans = 0;
    occrence(a, 6, 2, 0,ans);
    cout<<ans<<" ";
    return 0;
}