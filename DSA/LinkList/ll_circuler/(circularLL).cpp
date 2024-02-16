#include <iostream>
using namespace std;
class CircularLL
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
    Node *tail;

public:
    CircularLL()
    {
        head = NULL;
        tail = NULL;
    }

    void InsertAtBegin(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = n;
            tail = n;
            tail->next = head;
            return;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            n->next = head;
            head = n;
        }
    }
    void InsertAtEnd(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = n;
            tail = n;
            tail->next = head;
            return;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            n->next = head;
            tail = n;
        }
    }
    void InsertAfter(int data, int find)
    {
        Node *n = new Node(data);
        Node *temp = head;
        do
        {
            if (temp->data == find)
            {
                Node *temp2 = temp->next;
                temp->next = n;
                n->next = temp2;
            }
            temp = temp->next;
        } while (temp != tail);
    }
    void InsertBefore(int data, int find)
    {
        Node *n = new Node(data);
        Node *temp = head;
        do
        {
            if (temp->next->data == find)
            {
                Node *temp2 = temp->next;
                temp->next = n;
                n->next = temp2;
            }
            temp = temp->next;
        } while (temp != tail);
    }
    void DeleteFromBegin()
    {
        Node *todel = tail->next;
        head = head->next;
        tail->next = head->next;
        delete todel;
        todel = NULL;
    }
    void DeleteFromEnd()
    {
        Node *temp = tail;
        Node *todel = tail;
        do
        {
            temp = temp->next;
        } while (temp->next != tail);
        temp->next = head;
        tail = temp;
        delete todel;
        todel = NULL;
    }
    void FindDelete(int find)
    {
        Node *temp = head;
        Node *temp2 = head;
        do
        {
            if (temp->next->data == find)
            {
                Node *todel = temp->next;
                temp2 = temp->next->next;
                temp->next = temp2;
                delete todel;
                todel = NULL;
                break;
            }
            temp = temp->next;
        } while (temp != tail);
    }
    void DeleteList()
    {
        if (head == NULL)
        {
            cout << "\nList is already empty." << endl;
        }
        Node *temp = head;
        do
        {
            delete temp->next;
            temp->next = NULL;
            temp = temp->next;
            cout << "Link list has been deleted\n";
        } while (temp->next != NULL);
    }
    void Display()
    {
        Node *temp = head;
        while (temp != tail)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};
int main()
{
    CircularLL cll;
    cll.InsertAtBegin(5);
    cll.InsertAtBegin(4);
    cll.InsertAtBegin(3);
    cll.InsertAtBegin(2);
    cll.InsertAtBegin(1);
    cout << "Display after InsertAtBegin\n";
    cll.Display();
    cll.InsertAtEnd(6);
    cll.InsertAtEnd(7);
    cout << "Display after InsertAtEnd\n";
    cll.Display();
    cll.InsertAfter(33, 4);
    cout << "Display after InsertAfter\n";
    cll.Display();
    cll.InsertBefore(99, 6);
    cout << "Display after InsertBefore\n";
    cll.Display();
    cll.DeleteFromBegin();
    cout << "Display after DeleteFromBegin\n";
    cll.Display();
    cll.DeleteFromEnd();
    cout << "Display after DeleteFromEnd\n";
    cll.Display();
    cll.FindDelete(99);
    cll.FindDelete(33);
    cout << "Display after FindDelete\n";
    cll.Display();
    cll.DeleteList();
    cll.Display();
    return 0;
}