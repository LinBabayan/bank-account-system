#include "BankSystem.h"
#include <iostream>

int main() {
    BankSystem bank;

    // Adding accounts
    bank.addAccount("Alice Smith", 1001, 500.0);
    bank.addAccount("John Doe", 1002, 1000.0);

    // Display accounts
    std::cout << "Initial Account Details:\n";
    bank.displayAllAccounts();

    // Depositing and withdrawing money
    bank.findAccount(1001)->deposit(200);
    bank.findAccount(1002)->withdraw(150);

    // Transferring funds
    bank.transferFunds(1002, 1001, 300);

    // Display accounts after transactions
    std::cout << "\nAfter Transactions:\n";
    bank.displayAllAccounts();

    return 0;
}

