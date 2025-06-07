# bank-account-system

## Overview

This project allows users to create and manage multiple bank accounts with functionality for deposits, withdrawals, fund transfers, and balance inquiries. 

## Project Structure

The project is organized into the following files:

├── BankAccount.h // BankAccount class definition

├── BankAccount.cpp // BankAccount class implementation

├── BankSystem.h // BankSystem class definition

├── BankSystem.cpp // BankSystem class implementation

├── main.cpp // Program entry point and usage demonstration

├── README.md // Project documentation


## Class Descriptions

### BankAccount Class

Represents an individual bank account with the following private attributes:
- `std::string accountHolder`
- `int accountNumber`
- `double balance`

**Constructors:**
- Default constructor: Initializes with default values.
- Parameterized constructor: Initializes with user-defined values.
- Copy constructor: Creates a new object as a copy of an existing account.
- Initializer list constructor: Initializes members using an initializer list.

**Destructor:**
- Outputs a message when an object is destroyed.

**Member Functions:**
- `void deposit(double amount)`: Adds a specified amount to the account balance.
- `bool withdraw(double amount)`: Withdraws a specified amount if sufficient funds are available.
- `void display()`: Displays account details.

### BankSystem Class

Manages a collection of BankAccount objects.

**Member Functions:**
- `void addAccount(const std::string& name, int accountNumber, double initialBalance)`: Adds a new account.
- `BankAccount* findAccount(int accountNumber)`: Searches and returns a pointer to an account by account number.
- `void transferFunds(int senderAcc, int receiverAcc, double amount)`: Transfers funds between accounts.
- `void displayAllAccounts()`: Displays information for all accounts.
