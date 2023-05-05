#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        next=NULL;
    }
};

Node *takeInput(){
    int data;
    cout<<"Enter Data: "<<endl;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int length(Node *head){
    if(head == NULL) return 0;
    return 1 + length(head->next);
}

int main()
{
    Node *head = takeInput();
    cout<<length(head)<<endl;
    print(head);
}