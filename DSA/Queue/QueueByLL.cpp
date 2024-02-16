#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
    node *front;
    node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void EnQ(int d)
    {
        node *n = new node(d);
        if (front == NULL)
        {
            rear = n;
            front = n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    void DeQ()
    {
        if (front == NULL)
        {
            cout << "Queue is empty...nothing to deQueue" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
        todelete = NULL;
    }
    bool empty()
    {
        if (front == NULL)
            return true;
        return false;
    }
    void Size()
    {
        int s = 0;
        node *temp = front;
        while (temp != NULL)
        {
            s++;
            temp = temp->next;
        }
        cout << "The size of the Queue is " << s << endl;
    }
    void Display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty...nothing to Display" << endl;
            return;
        }
        node *temp = front;
        cout << "Displaying..." << endl;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    Queue q;
    q.EnQ(5);
    q.EnQ(4);
    q.EnQ(3);
    q.EnQ(2);
    q.EnQ(1);
    cout << "Display afte EnQueue\n";
    q.Display();
    q.Size();
    q.DeQ();
    cout << "Display afte DeQueue(X1)\n";
    q.Display();
    q.Size();
    q.DeQ();
    q.DeQ();
    cout << "Display afte DeQueue(X2)\n";
    q.Display();
    q.Size();
    cout << "Display afte DeQueue 2 more time\n";
    q.DeQ();
    q.DeQ();
    q.Display();
    cout << "Now check if the Queue empty..." << q.empty();
    return 0;
}