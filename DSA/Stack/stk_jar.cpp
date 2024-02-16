#include <iostream>
using namespace std;
class Jar
{
private:
    int *arr, siz, t;

public:
    Jar(int siz)
    {
        if (siz < 1)
            this->siz = 10;
        else
            this->siz = siz;
        t = -1;
        arr = new int[siz];
    }
    bool isFull()
    {
        if (t == siz - 1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (t == -1)
            return true;
        return false;
    }
    void Push(int data)
    {
        if (isFull())
        {
            cout << "Jar is Full...cant push" << endl;
            return;
        }
        else
            arr[++t] = data;
    }
    int Pop()
    {
        if (isEmpty())
            cout << "Nothing to pop" << endl;
        else
            return arr[t--];
    }
    void Display()
    {
        if (isEmpty())
            cout << "Nothing to display" << endl;
        else
        {
            for (int i = t; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
            return;
        }
    }
};
int main()
{
    Jar j(6);
    j.Push(11);
    j.Push(22);
    j.Push(33);
    j.Push(44);
    j.Push(55);
    j.Push(66);
    cout << "Display after inserting/push\n";
    j.Display();
    j.Pop();
    j.Pop();
    j.Pop();
    cout << "Display after Pop(3X)\n";
    j.Display();
    return 0;
}