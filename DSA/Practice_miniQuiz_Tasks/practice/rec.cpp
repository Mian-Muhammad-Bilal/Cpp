#include <iostream>
using namespace std;
void print1(int n)
{
    if (n == 0)
        return;
    print1(n - 1);
    cout << n << endl;
}
void print(int n)
{
    if (n == 0)
        return;

    cout << "n\n";
    print(n - 1);
}

int main()
{
    // print(4);
    print1(11);
    return 0;
}