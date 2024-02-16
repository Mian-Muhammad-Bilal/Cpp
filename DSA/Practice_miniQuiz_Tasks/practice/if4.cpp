#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Please enter a single character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is a vowel ";
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << "and it is a capital letter." << endl;
        }
        else
        {
            cout << "and it is a small letter." << endl;
        }
    }
    else
    {
        cout << "The character is not a vowel." << endl;
    }

    return 0;
}
