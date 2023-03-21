#include<iostream>
using namespace std;

int que[20],n=20,front=-1,rear=-1;

void enq(){
    int x;
    cout<<"enter value: "<<endl;
    cin>>x;
   if(front==-1 && rear == -1){
    front=rear=0;
    que[rear] = x;
   }else if((rear+1)%n == front){
    cout<<"Queue overflow!"<<endl;
   }else{
    rear = (rear+1)%n;
    que[rear] = x;
   }
}

void deq(){
    if(front == -1 && rear == -1){
        cout<<"Queue underflow!"<<endl;
    }else if(front == rear){
        front=rear=-1;
    }else{
        cout<<"dequed item: "<<que[front]<<endl;
        front = (front+1)%n;
    }
}

void display(){
    if(front==-1&&rear==-1){
        cout<<"Queue underflow!"<<endl;
    }else{
        for(int i=front; i<rear+1; i++){
            cout<<que[i]<<" ";
        }
    }
}

int main(){
    int op;
    cout<<"\n 1: enque \n 2: deque \n 3: display \n 4: exit"<<endl;
    do{
        cout<<"Enter option: "<<endl;
        cin>>op;
        switch (op)
        {
        case 1: enq(); break;
        case 2: deq(); break;
        case 3: display(); break;
        case 4: cout<<"Exit"<<endl; break;
        default: cout<<"Invalid choice"<<endl; break;
        }
    }while(op!=4);
}