#include "BankSystem.h"
#include <iostream>

BankSystem::~BankSystem() {
    for (BankAccount* acc : accounts) {
        delete acc;
    }
}

void BankSystem::addAccount(const std::string& name, int accountNumber, double initialBalance) {
    accounts.push_back(new BankAccount(name, accountNumber, initialBalance));
}

BankAccount* BankSystem::findAccount(int accountNumber) {
    for (BankAccount* acc : accounts) {
        if (acc->getAccountNumber() == accountNumber) {
            return acc;
        }
    }
    std::cout << "Account not found.\n";
    return nullptr;
}

void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount) {
    BankAccount* sender = findAccount(senderAcc);
    BankAccount* receiver = findAccount(receiverAcc);

    if (!sender || !receiver) {
        std::cout << "One or both accounts not found.\n";
        return;
    }

    if (sender->withdraw(amount)) {
        receiver->deposit(amount);
        std::cout << "Transferred $" << amount << " from " << senderAcc << " to " << receiverAcc << "\n";
    } else {
        std::cout << "Transfer failed due to insufficient funds.\n";
    }
}

void BankSystem::displayAllAccounts() const {
    for (const BankAccount* acc : accounts) {
        acc->display();
    }
}

