#include<iostream>
#include<string>

using namespace std;

int main()
{
    []{cout<<"Hello world";}();

    auto sum = [](auto a, auto b){ return a + b;};

    cout<<"sum of 3.5 & 5 is: "<< sum(3.5,5)<<endl;
    cout<<"sum of 10 & 5 is: "<< sum(10,5)<<endl;

    string a = "a,b,";
    string b = "c,d";

    cout<<sum(a,b);

    return 0;
}