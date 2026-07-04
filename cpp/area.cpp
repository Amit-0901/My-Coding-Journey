#include <iostream>
using namespace std;

class Area {
    float radius, circlearea;
float length , breadth , height,base;
public:
    //  Default constructor
    Area() {
        radius = 5;
        circlearea = 3.14 * radius * radius;
        cout << "Area using default constructor = " << circlearea << endl;
        length =10;
        breadth = 15;
        height = 5;
        base=5;
        cout<<"area of rectangle = "<<length * breadth<<endl;
        cout<<"area of triangle = "<<0.5*base*height<<endl;
    }
    

    //  Parameterized constructor
    Area(float r,float l, float b,float h,float ba) {
        radius = r;
        circlearea = 3.14 * radius * radius;
        cout << "Area using parameterized constructor = " << circlearea << endl;
        length = l;
        breadth = b;
        height=h;
        base= ba;
           cout<<"area of rectangle = "<<l * b<<endl;
        cout<<"area of triangle = "<<0.5*ba*h<<endl;
    }

    //  Copy constructor
    Area(Area &c) {
        radius = c.radius;
         length = c.length;
        breadth = c.breadth;
        height=c.height;
        base= c.base;
        circlearea = 3.14 * radius * radius;
        cout << "Area using copy constructor = " << circlearea << endl;
           cout<<"area of rectangle = "<<length * breadth<<endl;
        cout<<"area of triangle = "<<0.5*base*height<<endl;
        
    }
    //constructor overloading
    
    
};

int main() {
    Area c1;        // default constructor
    Area c2(3,10,15,2,5);     // parameterized constructor
    Area c3 = c2;   // copy constructor

    return 0;
}
