#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicle() {
        cout << "I am a vehicle" << endl;
    }
};

class Four_wheel : public Vehicle {
public:
    void four_wheel() {
        cout << "I have four wheels" << endl;
    }
};

class Car : public Four_wheel {
public:
    string name;
    float distance;
    float time;
    float speed;
    char d_unit, t_unit;

    Car(string n) {
        name = n;
    }

    void get_info() {
        cout << "Enter distance value: ";
        cin >> distance;

        cout << "Enter distance unit (k for km / m for meter): ";
        cin >> d_unit;

        cout << "Enter time value: ";
        cin >> time;

        cout << "Enter time unit (h for hour / s for second): ";
        cin >> t_unit;

        //  Validation
        if (distance == 0 || time == 0) {
            cout << "Enter valid value" << endl;
            return;
        }

        // Distance conversion
        if (d_unit == 'm') {
            distance = distance / 1000;   // meter → km
        }

        // Time conversion
        if (t_unit == 's') {
            time = time / 3600;          // second → hour
        }

        speed = distance / time;
    }

    void display() {
        cout << "Distance (km): " << distance << endl;
        cout << "Time (hr): " << time << endl;
        cout << "Speed (km/hr): " << speed << endl;
    }

    void car() {
        cout << "I am a car: " << name << endl;
    }
};

int main() {
    Car c1("Audi");

    c1.get_info();
    c1.car();
    c1.display();
    c1.four_wheel();
    c1.vehicle();

    return 0;
}
