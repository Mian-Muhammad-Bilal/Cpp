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
class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    void EnQ(int x)
    {
        node *n = new node(x);
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
            cout << "Queue underflow" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "No element in queue" << endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
            return true;
        return false;
    }
};
int main()
{

    return 0;
}