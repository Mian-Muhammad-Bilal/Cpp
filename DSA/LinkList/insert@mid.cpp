#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    while (head->next->next != NULL)
    {
        cout << head->data;
        head = head->next;
        cout << endl;
    }
    head->next->next->next = new Node(4);
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
        cout << endl;
    }
    return 0;
}