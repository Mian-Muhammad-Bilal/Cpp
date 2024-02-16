#include <iostream>
using namespace std;
int main()
{
    float marks1 = 78, marks2 = 45, marks3 = 62, total_marks = 0, percentage_marks = 0;
    total_marks = marks1 + marks2 + marks3;
    percentage_marks = (total_marks / 300.0) * 100;
    cout << "Total marks: " << total_marks << endl;
    cout << "Percentage marks: " << percentage_marks << endl;
    return 0;
}