#include <iostream>
using namespace std;
#define MAX 6 // max size for stack
class Stack
{
public:
    static int top;
    static int myStack[MAX]; // stack array
    Stack()
    {
        top = -1;
    }
    virtual bool push(int x) = 0;

    // int pop();
    // bool isEmpty();

    // pushes element on to the stack
    // removes or pops elements out of the stack
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow!!";
            return 0;
        }
        else
        {
            int item = myStack[top--];
            return item;
        }
    }
    // check if stack is empty
    bool isEmpty()
    {
        return (top < 0);
    }
    static void display()
    {
        for (int i = 0; i < MAX; i++)
        {
            cout << i + 1 << " item of stack is =" << myStack[i] << endl;
        }
    }
};
int Stack::top = -1;
int Stack::myStack[MAX] = {0};
class front : public Stack
{
public:
    /* front():Stack(){

       } */
    bool push(int item)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow!!!";
            return false;
        }
        else
        {
            myStack[++top] = item;
            cout << item << endl;
            return true;
        }
    }
};
class back : public Stack
{
public:
    bool push(int item)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow!!!";
            return false;
        }
        else
        {
            myStack[++top] = item;
            cout << item << endl;
            return true;
        }
    }
};

int main()
{
    front f;
    back b;
    Stack *s;
    s = &f;
    s->display();

    cout << "The Stack Push " << endl;
    s->push(2);
    s->push(6);
    s = &b;
    s->push(12);
    s->push(102);
    cout << endl;
    s->display();
    return 0;
}
