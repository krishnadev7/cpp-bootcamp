#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int nextIndex;
    int capacity;

    public:
        Stack(){
            capacity = 4;
            arr = new int[capacity];
            nextIndex = 0;
        }

        Stack(int cap){
            capacity = cap;
            arr = new int[capacity];
            nextIndex = 0;
        }

        int size(){
            return nextIndex;
        } 

        int isEmpty(){
            return nextIndex==0;
        }

        int top(){
            if(isEmpty()){
                cout<<"Stack undeflow"<<endl;
                return -1;
            }
            return arr[nextIndex-1];
        }

        void push(int element){
            if(nextIndex == capacity){
                cout<<"Stack is overflow"<<endl;
                return;
            }else{
                arr[nextIndex] = element;
                nextIndex++;
            }
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                return;
            }
            nextIndex--;
        }
};

int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}

