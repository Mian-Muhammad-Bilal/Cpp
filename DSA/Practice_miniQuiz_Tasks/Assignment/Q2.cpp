#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double b, xn, xn1, accuracy;

    cout << "Enter the number for which the square root is to be calculated: ";
    cin >> b;
    cout << "Enter the number of digits of accuracy required (between 0 and 16): ";
    cin >> accuracy;

    xn = b;
    cout << "Initial approximation: " << xn << endl;

    while (true)
    {
        xn1 = 0.5 * (xn + b / xn);
        cout << "Next approximation: " << setprecision(accuracy) << xn1 << endl;
        if (fabs(xn1 - xn) < pow(10, -accuracy))
        {
            break;
        }
        xn = xn1;
    }

    cout << "Square root of " << b << " with " << accuracy << " digits of accuracy is " << xn1 << endl;

    return 0;
}