#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i = 1;
int toprint = n*n;
while(i<=n){
int y =1;
while(y<=n){
    cout<<toprint<<" ";
    toprint--;
    y++;
}
    i++;
    cout<<endl;
}
    return 0 ;
}