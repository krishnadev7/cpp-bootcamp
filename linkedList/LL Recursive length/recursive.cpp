#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node *takeInput(){
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

void printNode(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool findElement(Node *head,int data){
    if(head == NULL) return false;
    if(head->data = data) return true;
    return findElement(head->next,data);
}

int main(){
    int data;
    Node *head = takeInput();
    cout<<"Enter data to find: "<<endl;
    cin>>data;
    if(findElement(head,data)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    printNode(head);
}