#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the start and end of the interval: ";
    cin >> start;
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; ++i) {
        int num = i;
        int result = 0;
        int n = 0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            result += pow(digit, n);
            temp /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}
