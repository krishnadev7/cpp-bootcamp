#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int num = 0;

    do{
        sum += num;
        cout<<"Enter a number"<<endl;
        cin>>num;
    }while (num >= 0);
    cout<<"The sum of numbers is: "<<sum<<endl;
    return 0;
}