#include <iostream>
using namespace std;

int length(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    int smallLength = length(input + 1);
    return 1 + smallLength;
}

int main()
{
    char input[100];
    cout<<"Enter the charchters"<<endl;
    cin>>input;
    int l = length(input);
    cout<<"Length of char is: "<<l<<endl;
    return 0;
}