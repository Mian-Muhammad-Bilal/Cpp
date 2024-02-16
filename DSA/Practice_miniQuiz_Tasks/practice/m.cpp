#include <iostream>
using namespace std;

int main()
{
    int numpeople;//22
    int maxpeople;//12
    int addpeople;//3
    int rempeople;
    cin >> numpeople;
    cin >> maxpeople;
    if (numpeople <= maxpeople)
    {
        addpeople = maxpeople - numpeople;
        cout << "legal" << endl;
        cout << "can add" << addpeople;
    }
    if (numpeople > maxpeople)
    {
        rempeople = maxpeople - numpeople;
        cout << "illegal" << endl;
        cout << "remove people" << rempeople << endl;
    }

    return 0;
}