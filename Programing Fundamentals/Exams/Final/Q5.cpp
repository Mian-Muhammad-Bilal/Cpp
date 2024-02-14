#include <iostream>
using namespace std;

int main()
{
    char str[50];
    int i, v;
    i = v = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    while (str[i] != '\0')
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            v++;
        }
        i++;
    }

    cout << "The string has " << v << " vowels" << endl;

    return 0;
}
