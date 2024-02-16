// t 6
#include <iostream>
using namespace std;
int main()
{
    float quantity = 0, totalCost = 0, costPerUnit = 100;
    cout << "Enter quantity: ";
    cin >> quantity;
    totalCost = quantity * costPerUnit;
    if (totalCost > 1000)
    {
        totalCost -= totalCost * 0.1;
    }
    cout << "Total cost: " << totalCost << endl;

    return 0;
}
