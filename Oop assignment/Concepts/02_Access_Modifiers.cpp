// Student Name: Iftekher Islam
// Student ID: 25001
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
using namespace std;

class BankAccount {
private:
    // Task 1: balance is a private data member.
    double balance;

public:
    // Task 1: setBalance() and getBalance() are public member functions.
    void setBalance(double amount) {
        balance = amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    // Task 2: Direct access to a private member is not allowed.
    // Uncommenting the next line will cause a compilation error:
    // account.balance = 10000;

    // Task 4: The public setter changes the private value,
    // and the getter returns the value safely.
    account.setBalance(10000);

    cout << "Account Balance: " << account.getBalance() << endl;

    // Task 3: The compiler error happens because balance is private
    // and can only be accessed directly inside the class (and friends).

    return 0;
}
