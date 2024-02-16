#include <iostream>
using namespace std;

int main()
{
    double average, sum = 0;
    int count = 0;
    int grade;
    cout << "Enter grade, -1 to end: ";
    cin >> grade;
    while (grade != -1)
    {
        sum = sum + grade;
        count = count + 1;
        cout << "Enter grade, -1 to end: ";
        cin >> grade;
    }
    average = (double)sum / count;
    cout << "Class average is " << average << endl;
    return 0;
}
