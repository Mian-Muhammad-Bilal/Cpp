#include <iostream>
using namespace std;
class stck
{
    int size = 100;
    int *arr = new int[size];
    int top;

public:
    stck(int a)
    {
        this->size = a;
        top = -1;
    }
    void push(int d)
    {
        top++;
        arr[top] = d;
    }
    void topp()
    {
        cout << "The top is: " << arr[top] << endl
             << endl;
    }
    void pop()
    {
        arr[top] = 99;
        top--;
    }
    void disply()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "|" << arr[i] << "|" << endl;
        }
        cout << "|_|" << endl
             << endl;
    }
};
int main()
{
    stck s(10);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.topp();
    s.disply();
    s.pop();
    s.disply();
    s.topp();
    return 0;
}