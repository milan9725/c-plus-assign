#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero." << endl;
            return 0; // Return 0 as an error value
        }
    }
};

int main() {
    Calculator calc;

    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Quit" << endl;

    while (true) {
        int choice;
        cout << "Enter your choice (1/2/3/4/5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Calculator is quitting. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            double num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << calc.add(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Result: " << calc.subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Result: " << calc.multiply(num1, num2) << endl;
                    break;
                case 4:
                    cout << "Result: " << calc.divide(num1, num2) << endl;
                    break;
            }
        } else {
            cout << "Invalid choice. Please choose a valid option (1/2/3/4/5)." << endl;
        }
    }

    return 0;
}

