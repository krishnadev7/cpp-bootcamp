#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    int data;
    cout << "Enter Data: " << endl;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool search(Node *head,int data){
    Node *curr = head;
    while(curr != NULL){
        if(curr->data == data){
            return true;
        }
        curr = curr->next;
    }
    return false;
}

int main()
{
    int data;
    Node *head = takeInput();
    cout<<"Enter data to find: "<<endl;
    cin>>data;
    if(search(head,data)){
        cout<<"Found!!!"<<endl;
    }else{
        cout<<"Not Found!!!"<<endl;

    }
    print(head);
}