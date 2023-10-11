
//Circle: Pi * Area *Area


#include <iostream>
#include <cmath>

const double PI = 3.14; // Define the constant PI

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * radius * radius; // p * radius^2
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = calculateCircleArea(radius);

    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}

