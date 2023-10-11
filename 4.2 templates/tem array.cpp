//Write a program of to sort the array using templates

#include <iostream>
#include <vector>
#include <algorithm>

// Template function to sort an array of any data type
template <typename T>
void sortArray(T arr[], int size) {
    std::vector<T> vec(arr, arr + size); // Convert the array to a vector
    std::sort(vec.begin(), vec.end());   // Sort the vector
    std::copy(vec.begin(), vec.end(), arr); // Copy the sorted values back to the array
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    double doubleArray[] = {3.14, 2.71, 1.618, 2.718};
    char charArray[] = "hello";

    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int charArraySize = strlen(charArray);

    // Sort integer array
    sortArray(intArray, intArraySize);

    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intArraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Sort double array
    sortArray(doubleArray, doubleArraySize);

    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    // Sort character array
    sortArray(charArray, charArraySize);

    std::cout << "Sorted Character Array: " << charArray << std::endl;

    return 0;
}

