#include <iostream>
using namespace std;

int main()
{
    int salary;
    cout << "enter the salary" << endl;
    cin >> salary;
    if (salary > 50000)
    {
        cout << "salary increased by 20% " << salary + ((salary * 20) / 100);
    }
    if (salary < 50000)
    {
        cout << "salary increased by 50% " << salary + ((salary * 50) / 100);
    }
    return 0;
}