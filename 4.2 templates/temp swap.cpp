//Write a program of to swap the two values using templates 

#include <iostream>

// Template function to swap two values of any data type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap two integers
    swapValues(num1, num2);

    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    double x = 3.14, y = 2.71;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Swap two doubles
    swapValues(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

