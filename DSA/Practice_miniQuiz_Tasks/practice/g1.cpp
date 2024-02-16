#include <iostream>
using namespace std;

int main()
{
    int physics, chemistry, biology, maths, total, computer;
    int percentage;
    cout << "Enter the marks for physics: ";
    cin >> physics;
    cout << "Enter the marks for chemistry: ";
    cin >> chemistry;
    cout << "Enter the marks for biology: ";
    cin >> biology;
    cout << "Enter the marks for maths: ";
    cin >> maths;
    cout << "Enter the marks for computer: ";
    cin >> computer;
    total = physics + chemistry + biology + maths + computer;
    percentage = (total / 500.0) * 100;
    switch (percentage)
    {
    case percentage >= 90:
        cout << "Grade: A" << endl;
        break;
    case percentage >= 80:
        cout << "Grade: B" << endl;
        break;
    case percentage >= 70:
        cout << "Grade: C" << endl;
        break;
    case percentage >= 60:
        cout << "Grade: D" << endl;
        break;
    case percentage >= 40:
        cout << "Grade: E" << endl;
        break;
    default:
        cout << "Grade: F" << endl;
        break;
    }
    return 0;
}
