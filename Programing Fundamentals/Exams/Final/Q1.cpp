#include <iostream>
using namespace std;

void get(int *x)
{
    cout << "Enter an integer: ";
    cin >> *x;
}

void dbl(int *y)
{
    *y = *y * 2;
}

int main()
{
    int num;
    get(&num);
    cout << "You entered: " << num << endl;
    dbl(&num);
    cout << "Its double is: " << num << endl;

    return 0;
}