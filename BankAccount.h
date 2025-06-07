#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(); 
    BankAccount(const std::string& name, int accNum, double initialBalance); 
    BankAccount(const BankAccount& other); 
    BankAccount(std::string name, int accNum, double initialBalance, bool useInitList); 
    ~BankAccount(); 

    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;
    int getAccountNumber() const;
    double getBalance() const;
    void setBalance(double newBalance);
};

#endif

