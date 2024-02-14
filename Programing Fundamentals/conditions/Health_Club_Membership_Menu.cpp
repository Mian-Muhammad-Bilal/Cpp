#include <iostream>
using namespace std;

int main() {
    int choice;
    int months;

    do {
        cout << "Health Club Membership Menu\n";
        cout << "1. Standard Adult Membership\n";
        cout << "2. Child Membership\n";
        cout << "3. Senior Citizen Membership\n";
        cout << "4. Quit the program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "For how many months? ";
                cin >> months;
                cout << "Total charges are Rs. " << months * 50 << endl;
                break;
            case 2:
                cout << "For how many months? ";
                cin >> months;
                cout << "Total charges are Rs. " << months * 20 << endl;
                break;
            case 3:
                cout << "For how many months? ";
                cin >> months;
                cout << "Total charges are Rs. " << months * 30 << endl;
                break;
            case 4:
                cout << "Do you want to quit the program? (1 for Yes, 0 for No): ";
                int quitChoice;
                cin >> quitChoice;
                if (quitChoice == 1) {
                    cout << "Exiting the program.\n";
                    return 0;
                }
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }

    } while (true);

    return 0;
}
