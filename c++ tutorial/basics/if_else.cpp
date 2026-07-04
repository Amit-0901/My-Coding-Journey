#include <iostream>;
using namespace std;
int main(){
// ternery operator short of if else stament 
int marks ;
cin>>marks;

if(marks>40){
    cout<<"pass"<<endl;
}
else{
    cout<<"fail";
}
marks>40 ? cout<<"pass"<<endl:cout<<"fail"<<endl; // terenery operator
return 0;
}