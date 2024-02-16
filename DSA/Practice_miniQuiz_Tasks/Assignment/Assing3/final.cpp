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
            this->next = NULL;
        }
    };

public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    // Write a copy constructor. Also copy must be deep.
    // Overload [] operator. Use for loop in main to display it.
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
    void Insert(int d1, int d2) // Add the node of data d2 after the node with data d1. If d2 is not available add it to the end.
    {
        int ch = 1;
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
                break;
            }
            else
            {
                ch = 2;
            }
            temp = temp->next;
        }
        if (ch == 2)
        {
            cout << "The node is not found so, the data will be added in the end." << endl;
            InsertAtEnd(d2);
        }
    }
    void InsertAtStart(int data) // I add insertAtStart fuction so that we have some data to replace with required
    {
        if (head == NULL)
        {
            head = new Node(data);
            return;
        }
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
    // void Delete(int data)
    void Delete(int data)
    {
        cout << "Deleting(" << data << ")" << endl;
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
    void getSize() // returns the count of elements in the list
    {
        int count = 1;
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        cout << "The size of list is." << count << endl;
    }
    void Erase() // Deletes every node in an linked list.
    {
        Node *temp = head;
        Node *temp2;
        while (temp != NULL)
        {
            temp2 = temp->next;
            delete temp;
            temp = temp2;
        }
        head = NULL;
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
    int FindNCount(int find) // Find and return count of all occurrence.
    {
        int count = 1;
        if (head == NULL)
        {
            cout << "No data is present in linked list" << endl;
            return 0;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
    }
    void SelectiveErase(int num) // Find num and delete everything after num.
    {
        Node *temp = head;
        head = head->next;

        while (head->next == NULL)
        {
            if (temp->data == num)
            {
                delete temp;
            }
        }
    }
    void FindNReplace(int N, int D) // Find and replace all occurrence recursively.
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->data == N)
            {
                temp->data = D;
                break;
            }
            temp = temp->next;
        }
    }
    int RemoveDuplicate(int find) // Find and remove every duplicate element in the list. Make elements unique.
    {
        if (head == NULL)
        {
            cout << "No data is present in linked list" << endl;
            return find;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->data == find)
                {
                    Node *temp2 = temp;
                    temp = temp->next;
                    delete temp2;
                }
                temp = temp->next;
            }
        }
    }
    // void Merge(Node *list) // Merges the to the calling object.
    // {

    // }
    // void Swap(); // Swap the contents of one list with another list of same type and size. Also write parameters
    // {
    // }
    void display(Node *temp)
    {
        if (temp != NULL)
        {
            cout << temp->data << "->";
            display(temp->next);
        }
        else
        {
            cout << "NULL" << endl;
            return;
        }
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
    ll.InsertAtStart(5);
    ll.InsertAtStart(4);
    ll.InsertAtStart(3);
    ll.InsertAtStart(2);
    ll.InsertAtStart(1);
    cout << "AFter insert" << endl;
    ll.Display();
    ll.Insert(9, 6);
    cout << "AFter insert" << endl;
    ll.Display();
    cout << "AFter delete" << endl;
    ll.Delete(4);
    ll.Display();
    cout << "AFter getsize" << endl;
    ll.getSize();
    ll.Display();
    cout << "AFter isempty" << endl;
    ll.IsEmpty();
    ll.Display();
    cout << "AFter selectiveErase" << endl;
    ll.SelectiveErase(4);
    ll.Display();
    cout << "AFter findcount" << endl;
    ll.FindNCount(2);
    ll.Display();
    cout << "AFter removeDuplicate" << endl;
    ll.RemoveDuplicate(1);
    ll.Display();
    cout << "AFter findReplace" << endl;
    ll.FindNReplace(2, 1);
    ll.Display();
    cout << "AFter Erase" << endl;
    ll.Erase();
    ll.Display();
    return 0;
}