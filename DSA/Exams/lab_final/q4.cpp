#include <iostream>
#include <queue>
using namespace std;

class TicketQueue
{
private:
    queue<TicketQueue> line;
    int id;
    string name;
    float price; // added data member for price

public:
    void enqueueTicket(int id, string name, float price)
    {
        TicketQueue t;
        t.id = id;
        t.name = name;
        t.price = price; // added price assignment
        line.push(t);
    }
    void dequeueTicket()
    {
        if (!line.empty())
        {
            TicketQueue t = line.front();
            cout << "1st ticket has been removed from the line." << endl;
            line.pop();
        }
        else
        {
            cout << "Line is empty, no ticket to remove." << endl;
        }
    }
    void printLine()
    {
        cout << "Displaying line:" << endl;
        if (!line.empty())
        {
            queue<TicketQueue> temp = line;
            while (!temp.empty())
            {
                TicketQueue t = temp.front();
                cout << "Ticket ID: " << t.id << ", Name: " << t.name << ", Price: " << t.price << endl; // added price output
                temp.pop();
            }
        }
        else
        {
            cout << "Line is empty." << endl;
        }
    }
};

int main()
{
    TicketQueue tq;
    tq.enqueueTicket(1, "John Smith", 12.99);
    tq.enqueueTicket(2, "Jane Doe", 15.99);
    tq.enqueueTicket(3, "Bob Johnson", 18.99);
    tq.printLine();
    tq.dequeueTicket();
    tq.printLine();
    return 0;
}
