#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    int min_num, max_num;
    cout << "Please enter 1st number: ";
    cin >> n1;
    cout << "Please enter 2nd number: ";
    cin >> n2;
    cout << "Please enter 3rd number: ";
    cin >> n3;
    if (n1 <= n2 && n1 <= n3)
    {
        min_num = n1;
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        min_num = n2;
    }
    else
    {
        min_num = n3;
    }

    if (n1 >= n2 && n1 >= n3)
    {
        max_num = n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        max_num = n2;
    }
    else
    {
        max_num = n3;
    }

    cout << "Minimum number: " << min_num << endl;
    cout << "Maximum number: " << max_num << endl;

    return 0;
}