#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;
public:
    BankAccount(float initial) { balance = initial; }
    void deposit(float amount) { balance += amount; }
    void withdraw(float amount) { 
        if(amount <= balance) balance -= amount;
        else cout << "Insufficient balance!\n"; 
    }
    void display() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    return 0;
}
