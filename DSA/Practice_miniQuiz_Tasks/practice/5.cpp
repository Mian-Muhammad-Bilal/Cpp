// t 5
#include <iostream>
using namespace std;
int main()
{
    float classesHeld, classesAttended, percentage;
    cout << "Enter number of classes held: ";
    cin >> classesHeld;
    cout << "Enter number of classes attended: ";
    cin >> classesAttended;
    percentage = (classesAttended / classesHeld) * 100;
    cout << "Percentage of classes attended: " << percentage << "%" << endl;
    if (percentage < 75)
    {
        cout << "Student is not allowed to sit in exam." << endl;
    }
    else
    {
        cout << "Student is allowed to sit in exam." << endl;
    }

    return 0;
}
