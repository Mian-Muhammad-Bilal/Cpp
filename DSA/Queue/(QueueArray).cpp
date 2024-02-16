#include <iostream>
using namespace std;
int size = 10;
class Queue
{
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[size];
        front = -1;
        rear = -1;
        for (int i = 0; i < 10; i++)
        {
            arr[i] = -555;
        }
    }

    void EnQ(int x)
    {
        if (front == 0 && rear == 9)
        {
            cout << "Queue is already full...can't add anymore element\n";
            return;
        }

        rear++;
        arr[rear] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void DeQ()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty...no data to DeQueue.\n";
            return;
        }
        arr[front] = -555;
        front++;
    }

    bool IsEmpty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
    bool IsFull()
    {
        if (front == 0 && rear == 9)
        {
            return true;
        }
        return false;
    }
    void Display()
    {
        cout << "Displaying..." << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
    void Size()
    {
        int s = 1;
        for (int i = front; i < rear; i++)
        {
            s++;
        }
        cout << "The size of the Queue is " << s << endl;
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
    cout << "After EnQ\n";
    q.Display();
    q.DeQ();
    q.DeQ();
    q.DeQ();
    q.DeQ();
    cout << "After DeQ(4X)\n";
    q.Display();
    cout << "Is Full\n";
    cout << q.IsFull() << endl;
    cout << "Is Empty\n";
    cout << q.IsEmpty() << endl;
    q.Size();
    return 0;
}