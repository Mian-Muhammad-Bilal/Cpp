// t 4
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, p, x, y;
    cout << "Enter your name:" << endl;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
    cout << "Enter value for d: ";
    p = a * b * c * d;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    if (x > y)
    {
        x = 10;
    }
    else
    {
        x = 20;
    }
    cin >> d;

    return 0;
}
