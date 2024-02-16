#include <iostream>
using namespace std;
class D_LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node *pre;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->pre = NULL;
        }

        Node *head;
    };
    Node *head;

public:
    D_LinkedList()
    {
        head = NULL;
    }
    void InsertAtBegin(int d)
    {
        if (head == NULL)
        {
            head = new Node(d);
            return;
        }
        head->pre = new Node(d);
        head->pre->next = head;
        head = head->pre;
    }
    void InsertAtEnd(int d)
    {
        if (head == NULL)
        {
            head = new Node(d);
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(d);
        temp->next->pre = temp;
    }
    void InsertAfter(int f, int d)
    {
        Node *temp = head;
        if (head == NULL)
        {
            head = new Node(d);
            return;
        }
        while (temp->data != f)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = new Node(d);
        temp->next->pre = temp;
        temp->next->next = temp2;
        temp2->pre = temp->next;
    }
    void InsertBefore(int f, int d)
    {
        Node *temp = head;
        if (head == NULL)
        {
            head = new Node(d);
            return;
        }
        while (temp->data != f)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->pre;
        temp->pre = new Node(d);
        temp->pre->next = temp;
        temp->pre->pre = temp2;
        temp2->next = temp->pre;
    }
    void DeletFromBegin()
    {
        if (head == NULL)
        {
            cout << "\nList is already empty." << endl;
        }
        head = head->next;
        delete head->pre;
        head->pre = NULL;
    }
    void DeletFromEnd()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void DeletList()
    {
        if (head == NULL)
        {
            cout << "\nList is already empty." << endl;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            delete temp->next;
            temp->next = NULL;
            temp = temp->next;
        }
    }
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    D_LinkedList l;
    cout << "\nAfter InsertAtBegin" << endl;
    l.InsertAtBegin(5);
    l.InsertAtBegin(4);
    l.InsertAtBegin(3);
    l.InsertAtBegin(2);
    l.InsertAtBegin(1);
    l.Display();
    cout << "\nAfter InsertAtEnd" << endl;
    l.InsertAtEnd(6);
    l.InsertAtEnd(7);
    l.Display();
    cout << "\nAfter InsertAfter" << endl;
    l.InsertAfter(3, 999);
    l.Display();
    cout << "\nAfter InsertBefore" << endl;
    l.InsertBefore(3, 111);
    l.Display();
    cout << "\nAfter DeletFromBegin" << endl;
    l.DeletFromBegin();
    l.Display();
    cout << "\nAfter DeletFromEnd" << endl;
    l.DeletFromEnd();
    l.Display();
    cout << "\nAfter DeletList" << endl;
    l.DeletList();
    l.Display();
    return 0;
}