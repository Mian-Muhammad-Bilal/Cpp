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
    Node *temp = head->next;
    head->next = temp->next;
    delete temp;
    temp = NULL;
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
        cout << endl;
    }
    return 0;
}