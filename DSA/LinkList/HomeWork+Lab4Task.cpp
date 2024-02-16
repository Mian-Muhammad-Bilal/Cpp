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
            // Initialize here
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
            head = new Node(data);
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
        }
        Node *temp = head;
        while (temp->next != NULL)
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
    void DeleteAtEnd() // Delete a node at the end of the list
    {
        Node *temp = head;
        Node *newtail = NULL;
        while (temp->next != NULL)
        {
            newtail = temp;
            temp = temp->next;
        }
        newtail->next = NULL;
        delete temp;
        temp = NULL;
    }
    void DeleteAtStart() // Delete a node at the start of the list.
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        temp = NULL;
    }
    void Delete(int data) // Deletes a node with data
    {
        if (head->data == data)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            temp = NULL;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == data)
            {
                Node *temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
                temp2 = NULL;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    int getSize() // returns the count of elements in the list
    {
        int count = 0;
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    bool IsEmpty() // Returns true if empty
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Find(int find) // Returns true if found.
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->data == find)
            {
                cout << "Present" << endl;
            }
            temp = temp->next;
        }
        cout << "\nThe element(" << find << ") not present." << endl;
    }
    void FindNReplace(int find, int data) // Find and replace all occurance.
    {
        if (head == NULL)
        {
            InsertAtStart(data);
        }
        Node *temp = head;
        while (temp->data != NULL)
        {
            if (temp->data == find)
            {
                temp->data = data;
                cout << "The element(" << find << ") is replaced by (" << data << ")." << endl;
                break;
            }
            temp = temp->next;
        }
        cout << "\nThe element(" << find << ") not present." << endl;
    }
    void display(Node *temp)

    {
        if (temp == NULL)

        {
            cout << "NULL" << endl;

            return;
        }
        cout << temp->data << "->";
        temp = temp->next;
        display(temp);
    }
    void Display() // Displays all the elements in list recursively.
    {
        Node *temp = head;
        display(temp);
    }
};
int main()
{
    LinkedList ll;
    cout << "\n\n\t***START***" << endl;
    cout << "When we add node from head" << endl;
    ll.InsertAtStart(2);
    ll.InsertAtStart(1);
    // ll.InsertAtStart(3);
    // ll.InsertAtStart(4);
    ll.Display();
    cout << "When we add node from tail" << endl;
    ll.InsertAtEnd(3);
    ll.InsertAtEnd(4);
    ll.Display();
    cout << "When we add node after specific node" << endl;
    // ll.Insert(1, 11);
    // ll.Insert(2, 22);
    ll.Insert(3, 33);
    // ll.Insert(4, 44);
    ll.Display();
    cout << "When delete node from head" << endl;
    ll.DeleteAtStart();
    ll.Display();
    ll.DeleteAtEnd();
    cout << "When delete from tail" << endl;
    ll.Display();
    cout << "When delete by searching" << endl;
    ll.Delete(33);
    ll.Display();
    cout << "Calling getSize function" << endl;
    cout << "No. of nodes are: " << ll.getSize() << endl;
    cout << "Calling find function to check presence of required node" << endl;
    ll.Find(4);
    ll.Display();
    cout << "\nWhen we call find and replace function" << endl;
    ll.FindNReplace(3, 33);
    ll.Display();
    return 0;
}