#include <iostream>
#include <string>
using namespace std;
double getSales(string divisionName)
{
    double sales;
    cout << "Enter the quarterly sales for the " << divisionName << " division: $";
    cin >> sales;
    while (sales < 0)
    {
        cout << "Invalid input. Sales cannot be negative. Try again: $";
        cin >> sales;
    }
    return sales;
}

void findHighest(double northeast, double southeast, double northwest, double southwest)
{
    double highest = northeast;
    string divisionName = "Northeast";

    if (southeast > highest)
    {
        highest = southeast;
        divisionName = "Southeast";
    }

    if (northwest > highest)
    {
        highest = northwest;
        divisionName = "Northwest";
    }

    if (southwest > highest)
    {
        highest = southwest;
        divisionName = "Southwest";
    }

    cout << "The highest grossing division was the " << divisionName << " division with sales of $" << highest << endl;
}

int main()
{
    double northeast = getSales("Northeast");
    double southeast = getSales("Southeast");
    double northwest = getSales("Northwest");
    double southwest = getSales("Southwest");

    findHighest(northeast, southeast, northwest, southwest);
    return 0;
}
