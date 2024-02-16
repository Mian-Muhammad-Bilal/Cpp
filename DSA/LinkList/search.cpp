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
    int f;
    cout << "Enter the number which do you wanna find from the list: ";
    cin >> f;
    while (head->data != NULL)
    {
        if (head->data == f)
        {
            cout << "Yes the number " << head->data << " is present";
        }
        head = head->next;
    }
    cout << "SORRY...The required number is not in the list." << endl;
    return 0;
}