class Test {
public:
    int *x;

    Test(int val) {
        x = new int(val);
    }

    Test(const Test &t) {        // Copy constructor
        x = new int(*t.x);       // Deep copy
    }

    ~Test() {                   // Destructor
        delete x;
    }
};
