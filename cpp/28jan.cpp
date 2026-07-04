#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_number;
    float balance;

public:
    string account_holder_name;
    int date_of_opening;

    
    BankAccount() {
        account_number = 101;
        balance = 0.0;
        account_holder_name = "Ajay";
        date_of_opening = 9;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Balance after deposit: " << balance << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance = balance - amount;
            cout << "Balance after withdrawal: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main() {
    BankAccount ac;
    ac.deposit();
    ac.withdraw();
    return 0;
}
//private data member name age and coumtry implement member function to set() get( ) the values of data members