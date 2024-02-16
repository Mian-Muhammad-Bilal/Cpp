#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double a, double b)
{
    double c = (a * a + b * b);
    return sqrt(c);
}

int main()
{
    double side1, side2;
    cout << "Enter the length of the 1st side of the right triangle: ";
    cin >> side1;
    cout << "Enter the length of the 2nd side of the right triangle: ";
    cin >> side2;
    cout << "The length of the hypotenuse is: ";
    cout << hypotenuse(side1, side2) << endl;
    return 0;
}
