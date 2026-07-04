#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw() = 0; // pure virtual function

};
class circle : public shape{
    public:
    void draw(){
        cout<<"draw a circle";
    }
    void draw1(){
        cout<<"dont draw a circle";
    }
};
int main(){
    //shape s; object of abtract class not possible to create
    shape*s=new circle();
    s->draw(); // output draw a circle
    delete s;
//circle c;
//c.draw();

}
//write a program to print this pattern using abstract class 
// a
// b c
// d e f