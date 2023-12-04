#include <iostream>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Function to check balance
    void checkBalance() const {
        std::cout << "Account balance for " << accountHolder << ": $" << balance << std::endl;
    }
};

int main() {
    // Create a bank account
    BankAccount myAccount("John Doe", 1000.0);

    // Perform operations
    myAccount.checkBalance();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.checkBalance();

    return 0;
}
