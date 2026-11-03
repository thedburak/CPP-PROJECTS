
#include <iostream>
#include <string>

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount() {
        balance = 0;
    }

    // Para yatırma
    void deposit(double amount) {
        if (amount <= 0) {
            std::cout << "Deposit amount must be greater than 0!" << std::endl;
        } else {
            balance += amount;
            std::cout << amount << " deposited successfully." << std::endl;
        }
    }

    // Para çekme
    void withdraw(double amount) {
        if (amount <= 0) {
            std::cout << "Withdrawal amount must be greater than 0!" << std::endl;
        }
        else if (amount > balance) {
            std::cout << "Insufficient balance!" << std::endl;
        }
        else {
            balance -= amount;
            std::cout << amount << " withdrawn successfully." << std::endl;
        }
    }

    // Bakiyeyi öğrenme
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc1;

    acc1.deposit(500);

    std::cout << "Current balance: "
              << acc1.getBalance() << std::endl;

    acc1.withdraw(1000);

    std::cout << "Current balance: "
              << acc1.getBalance() << std::endl;

    acc1.withdraw(200);

    std::cout << "Current balance: "
              << acc1.getBalance() << std::endl;

    return 0;
}
