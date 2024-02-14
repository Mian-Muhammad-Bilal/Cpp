#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n <= 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return x * power(x, n - 1);
}

int main()
{
    int a, b;
    cout << "Enter 1st integers: ";
    cin >> a;
    cout << "Enter 2nd integers: ";
    cin >> b;
    cout << a << "^" << b << "=" << power(a, b);

    return 0;
}
