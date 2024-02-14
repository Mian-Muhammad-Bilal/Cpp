#include <iostream>
using namespace std;
int main()
{
    int n, f = 1, i = 1;
    cout << "\n Enter The Number:";
    cin >> n;

    while (i <= n)
    {
        f = f * i;
        i++;
    }

    cout << "\n The Factorial of " << n << " is " << f;
}