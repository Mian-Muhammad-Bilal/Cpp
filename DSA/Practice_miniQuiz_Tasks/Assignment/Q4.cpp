#include <iostream>

using namespace std;

int main()
{
    int choice, num, count = 0;
    double sum = 0, average;

    while (true)
    {
        cout << "Press 1 for integer input Press 2 to quit: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter integer: ";
            cin >> num;
            sum += num;
            count++;
            average = sum / count;
            cout << "Average: " << average << endl;
        }
        else if (choice == 2)
        {
            cout << "Bye...see you again!!!" << endl;
            break;
        }
    }

    return 0;
}
