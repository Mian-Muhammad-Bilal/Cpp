#include <iostream>
using namespace std;

int main()
{
    // int totalclasses, attandedclass, perentage;
    int arr[3];
    cout << "Enter the number of total classes held: ";
    cin >> arr[0];
    cout << "Enter the number of classes attanded: ";
    cin >> arr[1];
    arr[2] = (arr[0] * 75) / 100;
    if (arr[1] < arr[2])
    {
        cout << "Not allowed to sit in the exam" << endl;
    }
    else
        cout << "Allowed to sit in the exam" << endl;
    return 0;
}