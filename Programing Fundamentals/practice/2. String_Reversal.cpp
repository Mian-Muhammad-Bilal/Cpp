#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[50];
    cout << "Enter a string: ";
    cin.getline(str, 50);

    int length = strlen(str);

    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; --i)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
