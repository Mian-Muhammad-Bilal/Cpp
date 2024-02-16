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
        if (head == NULL)
        {
            Node *n = new Node(d2);
            tail = n;
            head = n;
            n->next = head;
            n->pre = head;
            head->pre = tail;
            head->next = tail;
            return;
        }
        else
        {

            do
            {
                if (head->data == k)
                {
                    Node *n = new Node(d2);
                    Node *t = head->next;
                    head->next = n;
                    head->next->pre = head;
                    head->next->next = t;
                    t->pre = head->next;
                }
                head = head->next;
            } while (head != tail);
        }
    }
    void Delete(int data)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty...\n";
        }
        do
        {
            if (head->data == data)
            {
                // Node *temp2 = head->next;
                // head->next = n;
                // n->next = temp2;
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
    }
    void SelectiveErase(int num)
    {
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
    int RemoveDuplicate(int find)
    {
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
    dcl.Insert(1, 2);
    dcl.Display();
    return 0;
}