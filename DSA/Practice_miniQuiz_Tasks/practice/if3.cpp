#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    int ans;
    cout << "Please enter 1st numbers: ";
    cin >> n1;
    cout << "Please enter 2nd numbers: ";
    cin >> n2;
    if (n1 > n2)
    {
        ans = n1 - n2;
        cout << ans << endl;
    }
    else
    {
        ans = n2 - n1;
        cout << ans << endl;
    }

    return 0;
}
