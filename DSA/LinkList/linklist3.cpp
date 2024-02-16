#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
int main()
{
    Node *head = new Node(6);
    head->next = new Node(7);
    head->next->next = new Node(2);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}