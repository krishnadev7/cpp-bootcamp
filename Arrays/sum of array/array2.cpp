#include <iostream>
using namespace std;

int main()
{
    int s,a[10],sum=0;
    cout<<"Enter size of the array: "<<endl;
    cin>>s;

    cout<<"Enter Elements to the array: "<<endl;
    for(int i=0; i<s; i++){
        cin>>a[i];
    }

    cout<<"Entered Elements are: "<<endl;
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<s; i++){
        sum += a[i];
    }

    cout<<"Sum of the array is: "<<sum<<endl;
}