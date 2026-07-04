#include <iostream>
using namespace std;

class Employee {
public:
    string name ="krn";
    int age =21;

    Employee() {
    
        cout << "Name: "<<name<<endl;
        cout << "Age: " <<age<<endl;
    }

    ~Employee() {
        cout << "Destructor called";
    }
};

int main() {
    Employee e;
    return 0;
}
