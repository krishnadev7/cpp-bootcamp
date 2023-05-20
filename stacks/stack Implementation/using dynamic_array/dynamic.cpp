#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int capacity;
    int nextIndex;

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
                cout<<"Stack underflow"<<endl;
                return -1;
            }else{
                return arr[nextIndex-1];
            }
        }

        void push(int ele){
            if(nextIndex == capacity){
                int *newArray = new int[2*capacity];
                for(int i=0; i<capacity; i++){
                    newArray[i] = arr[i];
                }
                delete []arr;
                arr = newArray;
                capacity = 2*capacity;
            }
            arr[nextIndex] = ele;
            nextIndex++;
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
    Stack s;
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
