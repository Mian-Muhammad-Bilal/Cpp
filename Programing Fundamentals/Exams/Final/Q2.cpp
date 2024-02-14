#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int *ptr;
    cout << "Enter five marks: ";
    for (int i = 0; i < 5; i++)
        cin >> marks[i];

    ptr = marks;

    cout << "You entered the following values: \n";
    for (int i = 0; i < 5; i++)
        cout << *ptr++ << "\t";

    return 0;
}
