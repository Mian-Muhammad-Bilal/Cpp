#include <iostream>
using namespace std;

int main() {
    int digits[3];

    cout << "Enter 1st digit: ";
    cin >> digits[0];
    cout << "Enter 2nd digit: ";
    cin >> digits[1];
    cout << "Enter 3rd digit: ";
    cin >> digits[2];
    

    cout << "All possible combinations: ";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (i != j && i != k && j != k) {
                    cout << digits[i] << digits[j] << digits[k] << "\t";
                }
            }
        }
    }

    cout << endl;

    return 0;
}
