#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int low = 1, high = 100, guess, count = 0;
    char response;

    cout << "Please think of a number between 1 and 100." << endl;

    while (low <= high)
    {
        guess = (low + high) / 2;
        count++;
        cout << "Is it " << guess << "?" << endl;
        cout << "Press 'Y' or 'y' if the number is correct." << endl;
        cout << "Press 'H' or 'h' for if the given number is too high and press 'L' or 'l' for the given number is too low (input): ";
        cin >> response;

        if (response == 'Y' || response == 'y')
        {
            cout << "Ha!" << endl;
            cout << "I guessed the number in " << count << " guesses. Thank you for playing the game." << endl;
            break;
        }
        else if (response == 'H' || response == 'h')
        {
            high = guess - 1;
        }
        else if (response == 'L' || response == 'l')
        {
            low = guess + 1;
        }
    }

    return 0;
}
