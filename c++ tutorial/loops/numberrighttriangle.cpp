#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {            // Outer loop: rows
        for (int j = 1; j <= i; j++) {        // Inner loop: numbers in each row
            cout << j <<" ";
        }
        cout << endl;
    }

    return 0;
}