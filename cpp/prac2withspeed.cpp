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
    float distance;   // in km
    float time;       // in hours
    float speed;      // km/hr

    Car(string n, float d, char d_unit, float t, char t_unit) {
        name = n;

        // Distance conversion
        if (d_unit == 'm') {
            distance = d / 1000;   // meters → km
        } else {
            distance = d;          // already in km
        }

        // Time conversion
        if (t_unit == 's') {
            time = t / 3600;       // seconds → hours
        } else {
            time = t;              // already in hours
        }

        speed = distance / time;
    }

    void car() {
        cout << "I am a car: " << name << endl;
        cout << "Distance (km): " << distance << endl;
        cout << "Time (hr): " << time << endl;
        cout << "Speed (km/hr): " << speed << endl;
    }
};

int main() {
    // Example:
    // distance = 200 km
    // time = 25 hours
    Car c1("Audi", 200, 'k', 25, 'h');

    // Try this also:
    // Car c1("Audi", 5000, 'm', 1800, 's');

    c1.car();
    c1.four_wheel();
    c1.vehicle();

    return 0;
}
