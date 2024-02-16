#include <iostream>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d, node *n = NULL)
    {
        this->data = d;
        this->next = n;
    }
};

bool Check(node *head)
{
    stack<int> s;
    node *p = head;
    while (p != NULL)
    {
        s.push(p->data);
        p = p->next;
    }
    p = head;
    while (p != NULL)
    {
        if (p->data != s.top())
            return false;
        s.pop();
        p = p->next;
    }
    return true;
}

int main()
{
    node *head = new node(1);
    head = new node(2, head);
    head = new node(3, head);
    head = new node(3, head);
    head = new node(2, head);

    if (Check(head))
    {
        cout << "The list is a palindrome." << endl;
    }
    else
    {
        cout << "The list is not a palindrome." << endl;
    }

    return 0;
}
