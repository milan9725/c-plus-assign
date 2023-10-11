// Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading



#include <iostream>

// Function to perform addition
int mathOperation(int num1, int num2) {
    return num1 + num2;
}

// Function to perform subtraction
double mathOperation(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
int mathOperation(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

// Function to perform division
double mathOperation(double num1, int num2) {
    if (num2 == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0.0;
    }
    return num1 / num2;
}

int main() {
    int a = 10, b = 5;
    double x = 10.5, y = 2.0;
    
    // Addition
    std::cout << "Addition (int): " << mathOperation(a, b) << std::endl;
    std::cout << "Addition (double): " << mathOperation(x, y) << std::endl;

    // Subtraction
    std::cout << "Subtraction (double): " << mathOperation(x, y) << std::endl;

    // Multiplication
    std::cout << "Multiplication (int): " << mathOperation(a, b, 3) << std::endl;

    // Division
    std::cout << "Division (double): " << mathOperation(x, 2) << std::endl;
    std::cout << "Division (int): " << mathOperation(a, 0) << std::endl;

    return 0;
}

