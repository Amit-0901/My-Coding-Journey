#include<iostream>
using namespace std;

class Vehicle{
public:
    int vehicleID;
    string brand;
    double rentalPrice;
    bool available;

    Vehicle(int id,string b,double price){
        vehicleID=id;
        brand=b;
        rentalPrice=price;
        available=true;
    }

    virtual void displayVehicleDetails()=0;

    void rentVehicle(){
        if(available){
            available=false;
            cout<<"Vehicle rented\n";
        }
        else
            cout<<"Already rented\n";
    }

    void returnVehicle(){
        available=true;
    }

    double calculateRentalCost(int days){
        double cost=rentalPrice*days;
        if(days>7)
            cost*=0.9;
        return cost;
    }
};

class Car: public Vehicle{
public:
    Car(int id,string b,double p):Vehicle(id,b,p){}

    void displayVehicleDetails(){
        cout<<"Car:"<<brand<<" Price:"<<rentalPrice<<endl;
    }
};

class Bike: public Vehicle{
public:
    Bike(int id,string b,double p):Vehicle(id,b,p){}

    void displayVehicleDetails(){
        cout<<"Bike:"<<brand<<" Price:"<<rentalPrice<<endl;
    }
};

class ElectricScooter: public Vehicle{
public:
    ElectricScooter(int id,string b,double p):Vehicle(id,b,p){}

    void displayVehicleDetails(){
        cout<<"Scooter:"<<brand<<" Price:"<<rentalPrice<<endl;
    }
};

int main(){
    Car c1(1,"Toyota",1500);
    c1.displayVehicleDetails();
    c1.rentVehicle();
}