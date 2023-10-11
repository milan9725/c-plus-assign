//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the marks
//obtained in two subjects and class result contains the total marks obtained in
//the test. The class result can inherit the details of the marks obtained in the
//test and roll number of students. (Multilevel Inheritance)

#include<iostream>


// Base class Student
class Student {
protected:
    int roll_number;

public:
    Student(int roll) : roll_number(roll) {}

    int getRollNumber() {
        return roll_number;
    }
};

// Derived class Test inheriting from Student
class Test : public Student {
protected:
    int subject1_marks;
    int subject2_marks;

public:
    Test(int roll, int marks1, int marks2) : Student(roll), subject1_marks(marks1), subject2_marks(marks2) {}

    int getSubject1Marks() {
        return subject1_marks;
    }

    int getSubject2Marks() {
        return subject2_marks;
    }
};

// Derived class Result inheriting from Test
class Result : public Test {
public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {}

    int getTotalMarks() {
        return subject1_marks + subject2_marks;
    }

    void displayResult() {
        std::cout << "Roll Number: " << roll_number << std::endl;
        std::cout << "Subject 1 Marks: " << subject1_marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2_marks << std::endl;
        std::cout << "Total Marks: " << getTotalMarks() << std::endl;
    }
};

int main() {
    Result student1(101, 85, 92);
    student1.displayResult();

    return 0;
}

