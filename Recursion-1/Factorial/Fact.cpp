#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    int smallestAns = fact(n-1);
    int ans = n * smallestAns;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number to find its factorial: "<<endl;
    cin>>n;
    int ans  = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
    return 0;
}