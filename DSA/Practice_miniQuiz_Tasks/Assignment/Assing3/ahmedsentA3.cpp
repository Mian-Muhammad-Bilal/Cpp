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
            this->next = NULL;
        }
    };
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    // Write a copy constructor. Also copy must be deep.
    // Overload [] operator. Use for loop in main to display it.
    void Insert(int d1, int d2) // Add the node of data d2 after the node with data d1. If d2 is not available add it to the end.void Delete(int data)
    {
        if (head == NULL)
        {
            head = new Node(d1);
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->data == d1)
                {
                    temp->next = new Node(d2);
                    break;
                }
                temp = temp->next;
            }
        }
    }
    void InsertAtStart(int data) // I add insertAtStart fuction so that we have some data to replace with required
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
    void Delete(int data) // Deletes a node with data.
    {
        if (head == NULL)
        {
            cout << "No data is present in linked list" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->data == data)
                {
                    Node *temp2 = temp;
                    temp = temp->next;
                    delete temp2;
                    break;
                }
                temp = temp->next;
            }
        }
    }
    int getSize() // returns the count of elements in the list
    {
        int count = 0;
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
    bool IsEmpty() // Returns true if empty.
    {
        Node *temp = head;
        if (temp == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Erase() // Deletes every node in an linked list.
    {
        Node *temp = head;
        Node *temp2;
        while (temp != NULL)
        {
            temp2 = temp->next;
            free(temp);
            temp = temp2;
        }
        head = NULL;
    }
    void SelectiveErase(int num) // Find num and delete everything after num.
    {
        Node *temp = head;
        head = head->next;
        do
        {
            if (temp->data == num)
            {
                free(temp);
            }
        } while (head->next == NULL);
    }
    int FindNCount(int find) // Find and return count of all occurrence.
    {
        int count = 0;
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
    void FindNReplace(int find, int data) // Find and replace all occurrence recursively.
    {
        Node *temp = head;
        // if (head == NULL)//(base case)
        // {
        //     cout<<"List is empty"<<endl;
        // }

        // if (temp->data == find)
        // {
        //     temp->data = data;
        //     return;
        // }
        // temp = temp->next;
        // FindNReplace(find, data);
        while (temp->next != NULL)
        {
            if (temp->data == find)
            {
                temp->data = data;
                break;
            }
            temp = temp->next;
        }
    }
    // void Swap()//Swap the contents of one list with another list of same type and size. Also write parameters
    // {
    // }
    // int RemoveDuplicate(int find)//Find and remove every duplicate element in the list. Make elements unique.
    //{
    // }
    // void Merge(Node *list) // Merges the to the calling object.
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
    LinkedList list;
    list.InsertAtStart(1);
    list.InsertAtStart(2);
    list.InsertAtStart(1);
    list.InsertAtStart(3);
    list.Display();
    cout << "Replacing 2 with 5" << endl;
    list.FindNReplace(2, 5);
    list.Display();
    list.SelectiveErase(3);
    list.Display();
    // list.Erase();
    // list.Display();
    // list.RemoveDuplicate(1);
    // list.Display();
    return 0;
}