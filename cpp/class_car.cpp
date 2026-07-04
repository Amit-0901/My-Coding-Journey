#include<iostream>
using namespace std;
class car{
    public:
string name;
string color;
int speed;
void accept_carinfo(){
    cout<<"enter car name ";
    cin>>name;
      cout<<"enter car color ";
    cin>>color;
      cout<<"enter car speed ";
    cin>>speed;
}
void dislay_carinfo(){
cout<<"name of car is "<<name<<endl;
cout<<"color of car is "<<color<<endl;
cout<<"speed of car is "<<speed<<endl;
}
};
int main(){

    car c;
    int i =0;
    for( i; i++; i<10){
        
    }
    c.accept_carinfo();
    c.dislay_carinfo();

    return 0;
}