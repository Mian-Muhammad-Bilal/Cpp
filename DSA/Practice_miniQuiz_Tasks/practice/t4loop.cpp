#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    while (i < 8)
    {
        cout << i << ",";
        i++;
    }
    cout << endl;
    int n = 3;
    while (n <= 23)
    {
        cout << n << ",";
        n = n + 5;
    }
    cout << endl;
    int m = 20;
    while (m >= -10)
    {
        cout << m << ",";
        m = m - 6;
    }
    cout << endl;
    return 0;
}
