// Triangle: ½ *Area* breadth 


#include <iostream>

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height; // (1/2) * base * height
}

int main() {
    double base, height;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    double area = calculateTriangleArea(base, height);

    std::cout << "Area of the triangle: " << area << std::endl;

    return 0;
}


