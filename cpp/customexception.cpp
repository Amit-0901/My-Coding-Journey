#include <iostream>
using namespace std;

class MyException {
public:
    void showMessage() {
        cout << "Custom exception occurred" << endl;
    }
};

int main() {
    try {
        int x = -1;
        if (x < 0) {
            throw MyException();   // throwing custom exception
        }
    }
    catch (MyException &e) {
        e.showMessage();          // handling custom exception
    }

    return 0;
}
