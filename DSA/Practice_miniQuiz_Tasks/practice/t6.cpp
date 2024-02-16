#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 55; i <= 5500; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of numbers from 55 to 5500: ";
    cout << sum << endl;

    return 0;
}
