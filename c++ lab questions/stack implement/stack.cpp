#include <iostream>
using namespace std;
int stack[10],n=10,top=-1;

void push(){
   int x;
   cout<<"Enter the values"<<endl;
   cin>>x;
   if(top>=n-1)
   {
    cout<<"Stack overflow!"<<endl;
   }else{
    top++;
    stack[top] = x;
   }
}

void pop(){
  int item;
  if(top==-1){
    cout<<"Stack underflow!"<<endl;
  }else{
    item=stack[top];
    top--;
    cout<<"Popped item is: "<<item<<endl;
  }
}

void display(){
  int i;
  for(i=top;i>=0;i--){
    cout<<stack[i]<<" ";
  }
}

int main()
{
    int n;
    cout<<"\n 1: push \n 2: pop \n 3: display \n 4: Exit"<<endl;
    do{
        cout<<"Enter option"<<endl;
        cin>>n;
        switch (n)
        {
        case 1: push();
            break;
        
        case 2: pop();
            break;
        
        case 3: display();
            break;

        case 4: cout<<"Exit"<<endl;
            break;

        default: cout<<"Invalid choice!"<<endl;
        }
    }while (n!=4);   
}