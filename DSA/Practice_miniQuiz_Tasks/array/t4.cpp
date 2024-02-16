#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your name: " << endl;
    // int a, b, c, d, p, x, y;
    int arr[7];
    cout << "Enter the value of a: ";
    cin >> arr[0];
    cout << "Enter the value of b: ";
    cin >> arr[1];
    cout << "Enter the value of c: ";
    cin >> arr[2];
    cout << "Enter the value of d: ";
    cin >> arr[3];

    arr[4] = arr[0] * arr[1] * arr[2] * arr[3];

    if (arr[5] > arr[6])
    {
        arr[5] = 10;
    }
    else
        arr[5] = 20;
    return 0;
}