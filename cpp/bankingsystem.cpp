#include<iostream>
using namespace std;

class Transaction{
public:
    virtual void processTransaction()=0;
};

class BankAccount{
private:
    double balance;

public:
    int accountNumber;
    string accountHolderName;

    BankAccount(int acc,string name,double bal){
        accountNumber=acc;
        accountHolderName=name;
        balance=bal;
    }

    void deposit(double amt){
        balance+=amt;
    }

    void withdraw(double amt){
        if(amt<=balance)
            balance-=amt;
        else
            cout<<"Insufficient balance\n";
    }

    void checkBalance(){
        cout<<"Balance:"<<balance<<endl;
    }

    double getBalance(){
        return balance;
    }
};

class SavingsAccount: public BankAccount{
public:
    SavingsAccount(int a,string n,double b):BankAccount(a,n,b){}

    void withdraw(double amt){
        if(getBalance()-amt<500)
            cout<<"Minimum balance required\n";
        else
            BankAccount::withdraw(amt);
    }
};

class CurrentAccount: public BankAccount{
public:
    CurrentAccount(int a,string n,double b):BankAccount(a,n,b){}
};

class DepositTransaction: public Transaction{
public:
    void processTransaction(){
        cout<<"Deposit processed\n";
    }
};

int main(){
    SavingsAccount s1(101,"Amit",2000);
    s1.deposit(500);
    s1.withdraw(1000);
    s1.checkBalance();
}