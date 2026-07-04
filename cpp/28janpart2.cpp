#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    
    void set(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    void get() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person p;
    p.set("Ajay", 20, "India");
    p.get();
    return 0;
}
