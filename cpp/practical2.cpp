#include<iostream>
using namespace std; 
class Vehicle{

    public:
void vehicle(){
    cout<<"I am a vehicle"<<endl;
}
};
class Four_wheel: public Vehicle{
 public:
 void four_wheel(){
    cout<<"I have Four wheels"<<endl;
 }
};
class Car:public Four_wheel{
public:
string name;
Car(string n){
    name = n; 
}
void car(){ 
    cout<<"I am a car "<<endl;
}
};
int main(){
Car c1("Audi"); 

c1.car();
c1.four_wheel();
c1.vehicle();
    return 0;
}