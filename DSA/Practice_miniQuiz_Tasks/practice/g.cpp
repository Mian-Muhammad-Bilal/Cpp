#include <iostream>
using namespace std;
int main()
{
    int marks = 0;
    int ph = 0;
    int ch = 0;
    int bio = 0;
    int math = 0;
    int com = 0;
    int per = 0;
    cout << "Enter the marks of Physics: ";
    cin >> ph;
    cout << "Enter the marks of Chemistry: ";
    cin >> ch;
    cout << "Enter the marks of Biology: ";
    cin >> bio;
    cout << "Enter the marks of Maths: ";
    cin >> math;
    cout << "Enter the marks of Computer: ";
    cin >> com;
    marks = (ph + ch + bio + math + com);
    per = (marks * 10) / 500;
    switch (per)
    {
    case 90:
        cout << "Grade is A" << endl;
        break;
    case 80:
        cout << "Grade is B" << endl;
        break;
    case 70:
        cout << "Grade is C" << endl;
        break;
    case 60:
        cout << "Grade is D" << endl;
        break;
    case 40:
        cout << "Grade is E" << endl;
        break;
    default:
        cout << "Grade is F" << endl;
        break;
    }
    return 0;
}
