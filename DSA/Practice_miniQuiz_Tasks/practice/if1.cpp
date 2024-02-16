#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if (age < 6)
    {
        cout << "What a nice child!" << endl;
    }
    else if (age >= 6 && age < 9)
    {
        cout << "That's a good age!" << endl;
    }
    else if (age >= 9 && age < 20)
    {
        cout << "Ah! In the prime of life" << endl;
    }
    else if (age >= 20 && age < 30)
    {
        cout << "Watch out, the younger ones are gaining on you." << endl;
    }
    else
    {
        cout << "Well, have fun, and don't look back." << endl;
    }

    return 0;
}
