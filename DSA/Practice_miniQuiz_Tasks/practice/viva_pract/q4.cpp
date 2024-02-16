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
    void Insert(int data)
    {
        Node *temp = head;
        head = NULL;
        head = new Node(data);
        head->next = temp;
    }
    void SearchandDisplay(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Found" << temp->data;
            }
            else
            {
                cout << "Not found\n";
                break;
            }
            temp = temp->next;
        }
    }
    void sort()
    {
        Node *cur, *index;
        int temp;
        for (cur = head; cur->next != NULL; cur = cur->next)
        {
            for (index = cur->next; index != NULL; index = index->next)
            {
                if (cur->data > index->data)
                {
                    temp = cur->data;
                    cur->data = index->data;
                    index->data = temp;
                }
            }
        }
    }
    int count()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList l;
    l.Insert(1);
    l.Insert(26);
    l.Insert(34);
    l.Insert(7);
    l.Insert(9);
    l.Insert(0);
    cout << "Size: " << l.count();
    l.SearchandDisplay(111);
    cout << "Before Sorting: ";
    l.Display();
    l.sort();
    cout << "After Sorting: ";
    l.Display();
}