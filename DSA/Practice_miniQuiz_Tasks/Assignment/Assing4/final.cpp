#include <iostream>
using namespace std;
class DCLinkedList
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
    };
    Node *head;
    Node *tail;

public:
    DCLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void Insert(int k, int d2)
    {
        cout << "inserting " << d2 << endl;
        if (head == NULL)
        {
            Node *n = new Node(d2);
            tail = n;
            head = n;
            n->next = head;
            n->pre = head;
            head->pre = tail;
            head->next = tail;
            cout << "list was empty so " << d2 << " is added in first node\n";
            return;
        }
        else
        {

            do
            {
                cout << "Data in head " << head->data << endl;
                cout << "In do\n";
                if (head->data == k)
                {
                    cout << "In do->if\n";
                    Node *n = new Node(d2);
                    Node *t = head->next;
                    head->next = n;
                    head->next->pre = head;
                    head->next->next = t;
                    t->pre = head->next;
                }
                else
                {
                    cout << "In else\n";
                    Node *n = new Node(d2);
                    tail->next = n;
                    head->pre = n;
                    n->next = head;
                    n->pre = tail;
                    tail = n;
                    return;
                }
                cout << "After else\n";
                head = head->next;
            } while (head != tail);
        }
        cout << "Insertion finished\n";
    }
    void Delete(int data)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty...nothing to delete\n";
        }
        do
        {
            if (head->data == data)
            {
                Node *temp2 = head->next;
                Node *n = head;
                head->next = n;
                n->next = temp2;
            }
            head = head->next;
        } while (head != tail);
    }
    int getSize()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty...So size is 0.\n";
        }
        int size = 0;
        do
        {
            size++;
            head = head->next;
        } while (head != tail);
        return size;
    }
    bool IsEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
    }
    void Erase()
    {
        do
        {
            delete head;
            head = NULL;
            head = head->next;
        } while (head != tail);
    }
    int FindNCount(int find)
    {
        int count = 0;
        do
        {
            if (head->data == find)
            {
                count++;
            }
            head = head->next;
        } while (head != tail);
    }
    void Display()
    {
        cout << "Displaying..." << endl;
        do
        {
            cout << head->data;
            head = head->next;
        } while (head != tail);
    }
};

int main()
{
    DCLinkedList dcl;
    dcl.Insert(7, 1);
    dcl.Insert(1, 2);
    dcl.Insert(2, 3);
    cout << "The size of list is " << dcl.getSize() << endl;
    dcl.Display();
    return 0;
}