#include<iostream>
using namespace std;

class A {
public:
    int b, g;
    float x;

    A(int c) {
        b = c;
    cout<<b<<endl;
    }

    A(int d, float e) {
        g = d;
        x = e;
        cout<<g <<" "<< x<<endl;
    }
};

int main() {
    A a1(10);          // calls first constructor
    A a2(10, 20.0f);   // calls second constructor
    return 0;
}
