#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int age;

    Employee(string n, int a) {
        name = n;
        age = a;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    ~Employee() {
        cout << "Destructor called";
    }
};

int main() {
    Employee e("Nikhil", 18);
    return 0;
}
