#include <iostream>
using namespace std;
int que[10], n = 10, front = -1, rear = -1;

void enque()
{
    int x;
    cout << "Enter value" << endl;
    cin >> x;
    if (rear == n - 1)
    {
        cout << "queue overflow!" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        que[rear] = x;
    }
    else
    {
        rear++;
        que[rear] = x;
    }
}

void deque()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue underflow!" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        int item = que[front];
        front++;
        cout << "Dequed item: " << item << endl;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "queue underflow!" << endl;
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << que[i] << " ";
        }
    }
}

int main()
{
    int op;
    cout << "\n 1: enque \n 2: deque\n 3: display \n 4: exit" << endl;
    do
    {
        cout << "Enter option num" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
        {
            enque();
            break;
        }
        case 2:
        {
            deque();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (op != 4);
}