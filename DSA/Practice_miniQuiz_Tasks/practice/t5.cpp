#include <iostream>
using namespace std;

int main()
{
    long long product = 1;
    for (int i = 1; i <= 100; i++)
    {
        product = product * i;
    }
    cout << "Product of first 100 natural numbers: ";
    cout << product << endl;

    return 0;
}
