#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter a positive number"<<endl;
    cin>>num;
    for(int i = 0; i<=num; i++){
        sum +=i;
    }
    cout<<"Sum is: "<< sum<<endl;
    return 0;
}