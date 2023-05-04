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
    cout << "Enter data: " << endl;
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteIthNode(Node *head,int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){
        return head->next;
    }
    int count = 1;
    Node *curr = head;
    while(count <= i-1 && curr !=NULL){
        curr = curr->next;
       count++;
    }
    if(curr && curr->next){
        curr->next = curr->next->next;
        return head;
    }
    return head;
}

int main()
{
    int i;
    Node *head = takeInput();
    cout<<"Enter pos to delete: "<<endl;
    cin>>i;
    head = deleteIthNode(head,i);
    print(head);
}