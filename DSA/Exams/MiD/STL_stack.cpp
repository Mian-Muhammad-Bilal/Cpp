#include <iostream>
#include <stack>
using namespace std;
void display(stack<int> st)
{
    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    cout << "\nThe the size of stack is: " << s.size() << endl;
    cout << "The top element is: " << s.top() << endl;
    s.pop();
    cout << "The top element after pop(1x): " << s.top() << endl;
    cout << "The the size of stack after pop(1x)" << s.size() << endl;
    cout << "\nDisplaying the stack: ";
    display(s);
    return 0;
}