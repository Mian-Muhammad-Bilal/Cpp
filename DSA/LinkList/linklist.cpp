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
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next->next = new Node(10);
    // printing
    Node *temp = head;
    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // deletion
    // Node *temp1 = head->next->next->next->next->next;
    // head->next = temp1->next;
    // delete temp;
    // showing after deletion
    cout << "After deletion." << endl;
    // Node *temp;
    while (head != NULL)
    {
        cout << temp->next << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}