#include<iostream>
using namespace std;
class A
{
public :

A(){
    cout<<"constructor called"<<endl;
}
~A(){
cout<<"destructor is called"<<endl;
}


};
int main(){
    A a1;
    return 0;
}
