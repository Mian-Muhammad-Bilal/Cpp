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

public:
    Node *head;
    Node *tail;
    CircularLL()
    {
        head = NULL;
        tail = NULL;
    }

    void InsertAtBegin(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            tail = head;
            return;
        }
        else
        {
            tail->next = new Node(data);
            tail->next->next = head;
        }
    }
    void InsertAtEnd(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            tail = head;
            return;
        }
        else
        {
            tail->next = new Node(data);
            tail = tail->next;
            tail->next = head;
        }
    }
    void InsertAfter(int data, int find)
    {
        Node *temp = head;
        while (temp != tail)
        {
            if (temp->data == find)
            {
                temp->next = new Node(data);
                Node *temp2 = temp->next->next;
                temp->next = temp2;
            }
            head = head->next;
        }
    }
    void InsertBefore(int data, int find)
    {
        Node *temp = head;
        while (temp != tail)
        {
            if (temp->next->data == find)
            {
                temp->next = new Node(data);
                Node *temp2 = temp->next->next;
                temp->next = temp2;
            }
            head = head->next;
        }
    }
    void DeleteFromBeginning()
    {
        head->next = head;
        delete tail->next;
    }
    void Display()
    {
        cout << "displaying";
        while (head != tail)
        {
            cout << head->data << endl;
            head = head->next;
        }
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
    // cll.Display();
    return 0;
}