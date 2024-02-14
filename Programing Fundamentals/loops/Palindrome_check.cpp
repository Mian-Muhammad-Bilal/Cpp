#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome.\n";
    } else {
        cout << originalNum << " is not a palindrome.\n";
    }

    return 0;
}
