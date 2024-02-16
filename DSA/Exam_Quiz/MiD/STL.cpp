#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> sq)
{
    queue<int> t = sq;
    while (!t.empty())
    {
        cout << t.front() << " ";
        t.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "\nThe front element of Queue is: " << q.front() << endl;
    cout << "The rear element of Queue is: " << q.back() << endl;
    cout << "The size of Queue is: " << q.size() << endl;
    q.pop();
    cout << "After pop(1X)\n";
    cout << "Displaying the Queue\n";
    display(q);
    cout << "\nThe front element of Queue is: " << q.front() << endl;
    cout << "The rear element of Queue is: " << q.back() << endl;
    cout << "The size of Queue is: " << q.size() << endl
         << endl;
    return 0;
}
