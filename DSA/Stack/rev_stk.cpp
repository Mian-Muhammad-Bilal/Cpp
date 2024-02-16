#include <iostream>
#include <stack>
using namespace std;
void Reverse(stack<int> st)
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
    stack<int> r;
    cout << "Input number: ";
    for (int i = 1; i <= 3; i++)
    {
        cout << i << " ";
        r.push(i);
    }
    cout << "\nOutput number: ";
    Reverse(r);
    return 0;
}