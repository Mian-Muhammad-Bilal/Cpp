#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter the number ";
    cin >> num;

    if (num == 0)
    {
        cout << "Number is zero" << endl;
    }
    else if (num > 0)
    {
        cout << "The number is positive" << endl;
    }
    else
    {
        cout << "The number is negative" << endl;
    }
    return 0;
}