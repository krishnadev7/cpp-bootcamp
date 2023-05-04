#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
           this->data = data;
            next = NULL;
        }
};

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertAtiThPos(Node *head,int i, int data){
    if(i<0){
        return head;
    }
    if(i==0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    int count = 1;
    while(count <= i-1 && head!=NULL){
        head = head->next;
        count++;
    }
    if(head){
        Node *n = new Node(data);
        n->next = head->next;
        head->next = n;
        return head;
    }
    return head;
}

Node *takeInput(){
    int data;
    cout<<"Enter Data"<<endl;
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
            tail = n;
        }
        cin>>data;
    }
    return head;
}

int main(){
    Node *head = takeInput();
    int i,data;
    cout<<"Enter positon to insert: ";
    cin>>i;
    cout<<"Enter data to insert: ";
    cin>>data;
    head = insertAtiThPos(head,i,data);
    print(head);
}