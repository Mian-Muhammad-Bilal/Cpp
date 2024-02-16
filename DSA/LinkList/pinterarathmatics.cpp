#include <iostream>
using namespace std;

int main()
{
    // int arr[3];
    int *p = new int[3];
    // cout << *(p - 1) << endl;
    *p = 10;
    *(p + 1) = 20;
    *(p + 2) = 30;
    *(p - 1) = 1;
    // cout << *(p - 1);
    for (int i = 0; i <= 3; i++)
    {
        cout << p[i] << endl;
    }
    // delete p;
    return 0;
}