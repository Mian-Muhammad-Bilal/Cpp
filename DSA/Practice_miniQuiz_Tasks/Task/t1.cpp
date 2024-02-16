#include <iostream>
#include <cstdio>

using namespace std;

double calculateRetail(double wholesaleCost, double markupPercentage)
{
    double ans = 0;
    ans = wholesaleCost + (wholesaleCost * (markupPercentage / 100));
    cout << "The Price is: " << ans << endl;
}

int main()
{
    double wholesaleCost, markupPercentage;
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;
    while (wholesaleCost < 0)
    {
        cout << "Invalid input. Wholesale cost cannot be negative. Please Enter again again: ";
        cin >> wholesaleCost;
    }

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;
    while (markupPercentage < 0)
    {
        cout << "Invalid input. Markup percentage cannot be negative. Please Enter again again: ";
        cin >> markupPercentage;
    }

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The retail price is: $" << retailPrice << endl;

    return 0;
}
