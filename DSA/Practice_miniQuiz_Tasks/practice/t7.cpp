#include <iostream>
using namespace std;

int main()
{
    long long factorial = 1;
    int num = 10;
    for (int i = num; i > 1; i--)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of ";
    cout << num;
    cout << ": ";
    cout << factorial << endl;

    return 0;
}
