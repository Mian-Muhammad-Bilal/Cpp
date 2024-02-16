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
    while (head != NULL)//show before delet
    {
        cout << head->data;
        head = head->next;
        cout << endl;
    }
    int f;
    cout << "Enter the number which do you wanna delet from the list: ";
    cin >> f;
    while (head->data != NULL)//deletion
    {
        if (head->data == f)
        {
            cout << "Deleting the number " << head->data;
        }
        head = head->next;
    }
    Node *temp = head->next;
    head->next = temp->next;
    delete temp;
    temp = NULL;
    while (head != NULL)//show after deleton
    {
        cout << head->data;
        head = head->next;
        cout << endl;
    }
    return 0;
}