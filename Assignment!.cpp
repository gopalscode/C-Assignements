#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        cout << "\n--- Simple Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 == 0) {
                    cout << "Cannot divide by zero." << endl;
                } else {
                    cout << "Result = " << num1 / num2 << endl;
                }
                break;

            case 5:
                cout << "Exiting calculator." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> again;
    }

    return 0;
}