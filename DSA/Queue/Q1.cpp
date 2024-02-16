#include <iostream>
using namespace std;
class Queue
{

    class Node
    {
    public:
        int id;
        string name;
        string city;
        Node *next;
        Node(int i, string n, string c)
        {
            this->id = i;
            this->name = n;
            this->city = c;
            this->next = next;
        }
    };

public:
    Node *front;
    Node *rear;
    int size;

    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    bool Empty()
    {
        return size == 0;
    }

    void EnQ(int i, string na, string ci)
    {
        Node *newNode = new Node(i, na, ci);
        if (Empty())
        {
            front = newNode;
        }
        else
        {
            rear->next = newNode;
        }
        rear = newNode;
        size++;
    }

    void DeQ()
    {
        if (Empty())
        {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        size--;
        if (Empty())
        {
            rear = NULL;
        }
    }

    void Display()
    {
        if (Empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        while (temp != NULL)
        {
            cout << "\nThe id is: " << temp->id << "....The name is: " << temp->name << "....The City is: " << temp->city << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.EnQ(153, "Ali", "Lahore");
    q.EnQ(154, "Ahmed", "Sheikhupura");
    q.EnQ(155, "Aslam", "Islamabad");
    q.EnQ(156, "Talha", "Multan");
    cout << "Display after EnQ\n";
    q.Display();
    q.DeQ();
    q.DeQ();
    cout << "Display after deQ(2X)\n";
    q.Display();
    return 0;
}
