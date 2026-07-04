#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 3, 25, 7, 15};

    // Ascending order
    sort(arr.begin(), arr.end());
    cout << "Ascending: ";
    for (int x : arr) cout << x << " ";

    cout << "\n";

    // Descending order
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Descending: ";
    for (int x : arr) cout << x << " ";

    return 0;
}
