#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int num = 1;
    while(i <= n){
        int y=1;
        while(y<=i){
            cout<<num<<" ";
            num++;
            y++;
        }

        i++;
        cout<<endl;
    }
}