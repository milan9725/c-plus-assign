// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    // Constructor to initialize the string
    MyString(const char* s = nullptr) {
        if (s != nullptr) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    // Overload the '+' operator for string concatenation
    MyString operator+(const MyString& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return MyString(newStr);
    }

    // Function to display the string
    void display() {
        if (str != nullptr) {
            std::cout << str;
        }
    }

    // Destructor to release dynamically allocated memory
    ~MyString() {
        if (str != nullptr) {
            delete[] str;
        }
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");

    std::cout << "String 1: ";
    str1.display();
    std::cout << std::endl;

    std::cout << "String 2: ";
    str2.display();
    std::cout << std::endl;

    // Concatenate strings using operator overloading
    MyString concatenatedStr = str1 + str2;

    std::cout << "Concatenated String: ";
    concatenatedStr.display();
    std::cout << std::endl;

    return 0;
}

