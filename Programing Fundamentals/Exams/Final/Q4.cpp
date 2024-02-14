#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[50];
    cout << "Enter a string: ";
    cin.ignore(); // Ignore the newline character from previous input
    cin.getline(str, 50);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    cout << "The length of the string is: " << length << endl;

    return 0;
}
