#include<iostream>
using namespace std;

void print(char input[]){
    if(input[0] == '\0'){
        return;
    }
    cout<<input[0];
    print(input+1);
}

// Recursive Reverse Print
void reverse(char input[]){
    if(input[0] == '\0'){
        return;
    }
    reverse(input+1);
    cout<<input[0];
}

int main()
{
    char input[] = "abc";
    reverse(input);
    return 0;
}