#include <iostream>
using namespace std;
int main()
{
    int num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number: ";
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
