#include <iostream>
using namespace std;
int s = 0;
class queue
{
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[s];
        front = -1;
        rear = -1;
    }

    void EnQ(int x)
    {
        if (rear == s - 1)
        {
            cout << "Queue overflow" << endl;
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
            cout << "No elements in queue" << endl;
            return;
            front++;
        }
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }

        return arr[front];
    }
    bool IsEmpty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}