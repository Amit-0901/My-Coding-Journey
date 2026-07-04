#include<iostream>
#include<vector>
using namespace std;

class MenuItem{
public:
    string itemName;
    double price;

    MenuItem(string n,double p){
        itemName=n;
        price=p;
    }
};

class Order{
public:
    int orderID;
    vector<MenuItem> items;
    double totalPrice=0;

    Order(int id){
        orderID=id;
    }

    void addItem(MenuItem item){
        items.push_back(item);
        totalPrice+=item.price;
    }

    void calculateBill(){
        double tax=totalPrice*0.05;
        cout<<"Total Bill:"<<totalPrice+tax<<endl;
    }
};

class Payment{
public:
    virtual void processPayment()=0;
};

class CardPayment: public Payment{
public:
    void processPayment(){
        cout<<"Paid using Card\n";
    }
};

class UPIPayment: public Payment{
public:
    void processPayment(){
        cout<<"Paid using UPI\n";
    }
};

class CashPayment: public Payment{
public:
    void processPayment(){
        cout<<"Paid using Cash\n";
    }
};

int main(){
    MenuItem m1("Pizza",200);
    MenuItem m2("Burger",120);

    Order o1(1);
    o1.addItem(m1);
    o1.addItem(m2);

    o1.calculateBill();
}