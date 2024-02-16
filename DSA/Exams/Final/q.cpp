#include "iostream"
#include <stack>
using namespace std;
class Queue
{
private:
    stack<int> enqueueStack;
    stack<int> dequeueStack;

public:
    void enqueue(int value)
    {
        enqueueStack.push(value);
    }

    int dequeue()
    {
        if (dequeueStack.empty())
        {
            while (!enqueueStack.empty())
            {
                dequeueStack.push(enqueueStack.top());
                enqueueStack.pop();
            }
        }

        if (dequeueStack.empty())
        {
            cout << "Queue is empty";
        }

        int value = dequeueStack.top();
        dequeueStack.pop();
        return value;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.dequeue();
    return 0;
}