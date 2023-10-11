//Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance 

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    long long accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(std::string name, long long accNumber, std::string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully." << std::endl;
        } else {
            std::cerr << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                std::cout << "Withdrawn $" << amount << " successfully." << std::endl;
            } else {
                std::cerr << "Insufficient balance. Cannot withdraw $" << amount << "." << std::endl;
            }
        } else {
            std::cerr << "Invalid withdrawal amount. Please enter a positive amount." << std::endl;
        }
    }

    // Function to display name and balance
    void displayAccountInfo() {
        std::cout << "Account Information:" << std::endl;
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a bank account instance
    BankAccount myAccount("John Doe", 1234567890, "Savings", 1000.0);

    // Deposit and withdraw some amounts
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.withdraw(1500);

    // Display account information
    myAccount.displayAccountInfo();

    return 0;
}

