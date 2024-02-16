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
    Node *head;
    Node *one = new Node(2);
    Node *two = new Node(3);
    Node *three = new Node(5);
    one->next = two;
    two->next = three;
    three->next = NULL;
    cout << "Linked List BEFORE deletion: ";
    head = one;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    //////////////////////////////
    Node *temp = one->next;
    one->next = temp->next;
    delete temp;
    cout << "Linked List After deletion: ";
    head = one;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}