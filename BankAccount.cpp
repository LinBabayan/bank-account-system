#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount() : accountHolder("Unknown"), accountNumber(0), balance(0.0) {}


BankAccount::BankAccount(const std::string& name, int accNum, double initialBalance) {
    accountHolder = name;
    accountNumber = accNum;
    balance = initialBalance;
}

BankAccount::BankAccount(const BankAccount& other) {
    accountHolder = other.accountHolder;
    accountNumber = other.accountNumber;
    balance = other.balance;
}

BankAccount::BankAccount(std::string name, int accNum, double initialBalance, bool)
    : accountHolder(name), accountNumber(accNum), balance(initialBalance) {}

BankAccount::~BankAccount() {
    std::cout << "BankAccount [" << accountNumber << "] is destroyed.\n";
}

void BankAccount::deposit(double amount) {
    if (amount < 0) {
        std::cout << "Cannot deposit a negative amount.\n";
        return;
    }
    balance += amount;
}

bool BankAccount::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Insufficient funds.\n";
        return false;
    }
    balance -= amount;
    return true;
}

void BankAccount::display() const {
    std::cout << "Account Holder: " << accountHolder << "\n"
              << "Account Number: " << accountNumber << "\n"
              << "Balance: $" << balance << "\n\n";
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double newBalance) {
    balance = newBalance;
}

