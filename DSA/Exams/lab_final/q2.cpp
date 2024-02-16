#include <iostream>
using namespace std;
class Stack
{
private:
    int top;
    int size;
    int *stack;

public:
    Stack(int s)
    {
        top = -1;
        size = s;
        stack = new int[size];
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        stack[top] = value;
    }

    int pop()
    {
        if (top < 1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int temp = stack[top - 1];
        top--;
        return temp;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
};
int main()
{
    Stack S(5);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    cout << "After Pop(5x) : " << endl;
    S.display();
}