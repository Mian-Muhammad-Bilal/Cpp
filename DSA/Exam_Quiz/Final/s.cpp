#include <iostream>
#include <queue>
using namespace std;
class Stack
{
private:
    queue<int> q1, q2;

public:
    void push(int x)
    {
        q1.push(x);
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1, q2);
    }
    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q2.push(q1.front());
        q1.pop();
        swap(q1, q2);
        return top;
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout << s.top();
    s.pop();
    cout << s.top();
    return 0;
}