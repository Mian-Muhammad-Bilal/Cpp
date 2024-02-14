#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter the limit for the Fibonacci sequence: ";
    cin >> limit;

    int first = 0, second = 1;

    cout << "Fibonacci sequence up to " << limit << " terms:\n";
    while (first <= limit) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}
