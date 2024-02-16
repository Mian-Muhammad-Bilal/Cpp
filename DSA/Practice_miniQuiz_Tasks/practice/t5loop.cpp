#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int i = 1;
    while (i <= 15)
    {
        product = product * i;
        i = i + 2;
    }
    cout << "The product of odd numbers from 1 to 15 is: " << product << endl;
    return 0;
}
