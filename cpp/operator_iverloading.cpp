//why operator overloading is needed
/* it improves code reusability
it suports polymorphism
it enables operators  to work with user defines data type
it makes object manipulation simple and natural
*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Operator overloading for +
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}
