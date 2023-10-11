//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    // Constructor to initialize the matrix size
    Matrix(int n) : size(n), data(new int[n]) {}

    // Overload the '+' operator for matrix addition
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            std::cerr << "Matrix size mismatch. Addition not possible." << std::endl;
            // Return an empty matrix
            return Matrix(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    // Function to display the matrix
    void display() {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to release dynamically allocated memory
    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int size = 5;

    // Create two matrices
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Initialize matrix data (you can input your own values here)
    for (int i = 0; i < size; i++) {
        matrix1.data[i] = i + 1;
        matrix2.data[i] = i * 2;
    }

    std::cout << "Matrix 1: ";
    matrix1.display();

    std::cout << "Matrix 2: ";
    matrix2.display();

    // Perform matrix addition using operator overloading
    Matrix result = matrix1 + matrix2;

    std::cout << "Matrix Sum: ";
    result.display();

    return 0;
}

