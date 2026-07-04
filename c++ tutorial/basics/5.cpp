#include <iostream>;
using namespace std;
int main(){
int num;
cout<<"num"<<endl;
cin>>num;

if (num%3==0 && num%5==0){
    cout<<"frizbuzz"<<endl;
}
else if(num%3==0 || num%5==0){
    cout<<"friz"<<endl;
}
else{cout<<num<<endl;}
return 0;
}