//Write a program to find the max number from given two numbers using
//friend function


#include <iostream>

class MaxFinder {
private:
    int num1, num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    // Friend function to find the maximum of two numbers
    friend int findMax(const MaxFinder&);

    // Function to display the numbers
    void displayNumbers() {
        std::cout << "Number 1: " << num1 << std::endl;
        std::cout << "Number 2: " << num2 << std::endl;
    }
};

// Friend function definition to find the maximum of two numbers
int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    MaxFinder mf(num1, num2);

    std::cout << "Numbers entered:" << std::endl;
    mf.displayNumbers();

    int maximum = findMax(mf);

    std::cout << "Maximum number: " << maximum << std::endl;

    return 0;
}

