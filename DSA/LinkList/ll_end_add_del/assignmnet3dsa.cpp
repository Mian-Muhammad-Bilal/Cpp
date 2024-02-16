#include <iostream>
using namespace std;
class LinkedList
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
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void InsertAtStart(int data) // Adds a node at the start of the list.
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
    void InsertAtEnd(int data) // Adds a node at the end of the list
    {
        if (head == NULL)
        {
            InsertAtStart(data);
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }
    void Insert(int d1, int d2) // Add the node of data d2 after the node with data d1
    {
        if (head == NULL)
        {
            InsertAtStart(d2);
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->data == d1)
                {
                    Node *temp2 = temp->next;
                    temp->next = new Node(d2);
                    temp->next->next = temp2;
                }
                temp = temp->next;
            }
        }
    }
    void DeleteAtEnd() // Delete a node at the end of the list
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void DeleteAtStart()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        temp = NULL;
    } // Delete a node at the start of the list.

    void Delete(int data)
    {
        Node *temp = head;
        Node *temp1 = head;
        while (temp->next->next->data == data)
        {
            temp = temp->next;
        }
        temp1 = head->next->next->next;
        temp->next = temp1;
        delete temp->next;

    } // Deletes a node with data

    // int getSize()                         // returns the count of elements in the list
    // bool IsEmpty()                        // Returns true if empty.
    // bool Find(int find)                   // Returns true if found.
    // void FindNReplace(int find, int data) // Find and replace all occurance.
    void Display() // Displays all the elements in list recursively.
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    LinkedList ll;
    ll.InsertAtStart(5);
    ll.InsertAtStart(3);
    ll.Display();
    ll.InsertAtEnd(1);
    ll.InsertAtEnd(11);
    ll.Display();
    ll.Insert(5, 4);
    ll.Display();
    ll.DeleteAtEnd();
    ll.Display();
    ll.DeleteAtStart();
    ll.Display();
    ll.Delete(4);
    ll.Display();
    return 0;
}