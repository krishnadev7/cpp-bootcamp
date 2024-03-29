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

void print(Node *head){
    while(head!=NULL)
    {
     cout<<head->data<<" ";
     head = head -> next;
    }
    cout<<"Null";
    
}

int main()
{
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    // print(head);
}







// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// void print(Node *head)
// {
//      while(head!=NULL){
//          cout<<head->data<<" ";
//          head = head->next;
//      }
//      cout<<endl;
//     //  temp = head;
//     //  while(temp!=NULL){
//     //      cout<<temp->data<<" ";
//     //      temp = temp->next;
//     //  }
//     // while (head != NULL)
//     // {
//     //     cout << head->data << "->";
//     //     head = head->next;
//     // }
//     cout << "NULL" << endl;
// }
// int main()
// {
//     /// Statically
//     Node n1(1);
//     Node *head = &n1;

//     Node n2(2);
//     Node n3(3);
//     Node n4(4);
//     Node n5(5);

//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = &n4;
//     n4.next = &n5;

//     print(head);
//     // print(head);

//     /*n1.next = &n2;
//     cout<<n1.data<<" "<<n2.data<<endl;

//     Node *head = &n1;

//     cout<<head->data<<endl;

//     /// Dynamically
//     Node *n3 = new Node(3);
//     Node *n4 = new Node(4);
//     n3->next = n4;
//     */

//     return 0;
// }