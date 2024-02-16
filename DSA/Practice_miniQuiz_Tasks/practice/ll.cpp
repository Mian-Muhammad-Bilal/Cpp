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
    Node *merge(Node *&head1, Node *&head2)
    {
        Node *p1 = head1;
        Node *p2 = head2;
        Node *dummyNode = new Node(-1);
        Node *p3 = dummyNode;
        while (p1 != NULL && p2 != NULL)
        {
            if (p1->data < p2->data)
            {
                p3->next = p1;
                p1 = p1->next;
            }
            else
            {
                p3->next = p2;
            }
            p3 = p3->next;
        }

        while (p1 != NULL)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        while (p2 != NULL)
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        return dummyNode->next;
    }

    Node *mR(Node *&head1, Node *&head2)
    {
        if (head1 == NULL)
            return head2;

        if (head2 == NULL)
            return head1;

        Node *result;
        if (head1->data < head2->data)
        {
            result = head1;
            result->next = mR(head1->next, head2);
        }
        else
        {
            result = head2;
            result->next = mR(head1, head2->next);
        }
        return result;
    }

    // =============================

    Node *rR(Node *&head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *newhead = rR(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }

    // =============================

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
    // LinkedList ll;
    // ll.InsertAtStart(5);
    // ll.InsertAtStart(4);
    // ll.InsertAtStart(3);
    // ll.InsertAtStart(2);
    // ll.InsertAtStart(1);
    // cout << "AFter insert" << endl;
    // ll.Display();
    // ll.Insert(9, 6);
    // cout << "AFter insert" << endl;
    // ll.Display();
    // cout << "AFter delete" << endl;
    // ll.Delete(4);
    // ll.Display();
    // cout << "AFter getsize" << endl;
    // ll.getSize();
    // ll.Display();
    // cout << "AFter isempty" << endl;
    // ll.IsEmpty();
    // ll.Display();
    // cout << "AFter selectiveErase" << endl;
    // ll.SelectiveErase(4);
    // ll.Display();
    // cout << "AFter findcount" << endl;
    // ll.FindNCount(2);
    // ll.Display();
    // cout << "AFter removeDuplicate" << endl;
    // ll.RemoveDuplicate(1);
    // ll.Display();
    // cout << "AFter findReplace" << endl;
    // ll.FindNReplace(2, 1);
    // ll.Display();
    // cout << "AFter Erase" << endl;
    // ll.Erase();
    // ll.Display();
    // LinkedList l1;
    // l1.InsertAtStart(5);
    // l1.InsertAtStart(4);
    // l1.InsertAtStart(5);
    // l1.InsertAtStart(2);
    // l1.InsertAtStart(7);
    // LinkedList l2;
    // l2.InsertAtStart(15);
    // l2.InsertAtStart(14);
    // l2.InsertAtStart(13);
    // l2.InsertAtStart(12);
    // l2.InsertAtStart(11);
    // LinkedList l3;
    // l3.mR(l2.head, l1.head);
    // cout << "l1\n";
    // l1.Display();
    // cout << "l2\n";
    // l2.Display();
    // cout << "l3\n";
    // l2.display(l3.head);
    LinkedList l4;
    l4.InsertAtStart(1);
    l4.InsertAtStart(2);
    l4.InsertAtStart(3);
    l4.InsertAtStart(4);
    l4.InsertAtStart(5);
    l4.InsertAtStart(6);
    l4.Display();
    l4.rR(l4.head);
    l4.Display();
    return 0;
}