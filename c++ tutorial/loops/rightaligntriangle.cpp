#include <iostream>;
using namespace std;
int main(){
int n;
cin>>n;
for(int i =1 ; i<=n;i++){
    for( int space = 1; space <= n-1; space++){
        cout<<"  ";

    }
    for(int y=1; y<=i;y++){
        cout<<"$ ";

    }
    cout<<endl;
}
return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int space = 1; space <= n - i; space++) {
//             cout << "  "; // two spaces for better alignment
//         }

//         // Print stars
//         for (int star = 1; star <= i; star++) {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }