// WAP Rectangle: Area * breadth 

#include <iostream>

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    double length, breadth;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    double area = calculateRectangleArea(length, breadth);

    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}

