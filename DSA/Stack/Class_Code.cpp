#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int csize;

public:
    Stack(int size) // Constructor
    {
        if (size < 1)
        {
            cout << "The given size of the stack is not valid so, the size will be 10. \n";
            this->size = 10;
        }
        this->size = size;
        arr = new int[size];
        csize = -1;
    }
    bool IsEmpty()
    {
        if (csize == -1)
        {
            return true;
        }
        return false;
    }
    bool IsFull()
    {
        if (csize == size - 1)
        {
            return true;
        }
        return false;
    }
    void Push(int val)
    {
        if (IsFull())
        {
            cout << "The Stack is Full\n";
            return;
        }
        arr[++csize] = val;
    }
    int Pop()
    {
        if (IsEmpty())
        {
            cout << "The Stack is Empty.\n";
            return -1;
        }
        return arr[csize--];
    }
    int Top()
    {
        if (IsEmpty())
        {
            cout << "The Stack is Empty.\n";
            return -1;
        }
        return arr[csize];
    }
    void Display()
    {
        for (int i = 0; i <= csize; i++)
        {
            cout << Pop() << endl;
        }
    }
};
int main()
{
    Stack stk(11);
    stk.Push(1);
    stk.Push(2);
    stk.Push(3);
    stk.Push(4);
    stk.Push(5);
    stk.Push(6);
    stk.Push(7);
    stk.Push(8);
    stk.Display();
    cout << stk.Top() << endl;
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
    stk.Pop();
}