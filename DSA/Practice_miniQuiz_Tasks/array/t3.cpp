#include <iostream>
using namespace std;

int main()
{
    // double totalCollections, state, countryTax, totalTax;
    double arr[4];
    // string mounth;
    char a[20];
    cout << "Enter the Total collections: ";
    cin >> arr[0];
    cout << "Enter the name of month: ";
    cin >> a;
    arr[2] = (arr[0] * 5) / 100; // countery 5%

    arr[1] = (arr[0] * 4) / 100; // state 4%

    arr[3] = arr[1] + arr[2]; // total                                                  ...............................
    cout << "Total collection: " << arr[0] << endl;
    cout << "The country sales tax is: " << arr[2] << endl;
    cout << "The satate tax is: " << arr[1] << endl;
    cout << "The total tax is: " << arr[3] << endl;
    return 0;
}