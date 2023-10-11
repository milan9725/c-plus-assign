#include <iostream>
using namespace std;

// Inline function to calculate multiplication of two numbers
inline double multiply(double a, double b) {
    return a * b;
}

// Inline function to calculate the cube of a number
inline double cube(double a) {
    return a * a * a;
}

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    cout << "Enter " << n << " values:" << endl;
    double values[n];

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    cout << "Multiplication values:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << values[i] << " * " << values[j] << " = " << multiply(values[i], values[j]) << endl;
        }
    }

    cout << "Cubic values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << values[i] << " cubed = " << cube(values[i]) << endl;
    }

    return 0;
}

