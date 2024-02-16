#include <iostream>
using namespace std;
class Stack
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
    };
    Node *Top;

public:
    Stack()
    {
        Top = NULL;
    }
    void Push(int data)
    {
        if (Top == NULL)
        {
            cout << "Stack is empty so the " << data << " will be the first node.\n";
            Top = new Node(data);
            return;
        }
        else
        {
            Node *n = new Node(data);
            n->next = Top;
            Top = n;
            cout << data << "Pushed into stack.\n";
            return;
        }
    }
    void Pop()
    {
        cout << Top->data << " is poped\n";
        Node *temp = Top;
        Top = temp->next;
        delete temp;
        temp = NULL;
        // cout << StackTop->data << "is poped";
    }
    bool IsEmpty()
    {
        if (Top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // bool IsFull()
    // {
    // }
    int size()
    {
        int size = 0;
        Node *temp = Top;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
    void Display()
    {
        Node *temp = Top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    Stack st;
    st.Push(5);
    st.Push(4);
    st.Push(3);
    st.Push(2);
    st.Push(1);
    st.Display();
    st.Pop();
    st.Display();
    cout << "Size of stack is " << st.size();
    return 0;
}