#include <iostream>
using namespace std;
/*there are two types of header files :
1. system header diles; it comes with the compiler 
2. user defined header files : it is written by the programmer*/

// #include "this.h" this will prodeuce an error if this.h is not present in current directory
//cpp refrence files on google there you an get stand library files

/* operators in c++ 
followings are the types of c++
1. arithmetic operators */
int main(){
    int a = 4,b=5;
    cout<<"the value of a+b "<<a+b<<endl;
     cout<<"the value of a-b "<<a-b<<endl;
     cout<<"the value of a*b "<<a*b<<endl;
     cout<<"the value of a/b "<<a/b<<endl;
     cout<<"the value of a%b "<<a%b<<endl;
     cout<<"the value of a++ "<<a++<<endl;
     cout<<"the value of a-- "<<a--<<endl;
     cout<<"the value of ++a "<<++a<<endl;
cout<<"the value of --a "<<--a<<endl;
 cout<<endl;
// assignment operators used to assign values to variables like
// int , char 

// comparison operators
cout<< "following are the types of comparison operators "<<endl;
cout<<"the value of a==b is "<< (a==b)<<endl;
cout<<"the value of a!=b is "<< (a!=b)<<endl;
cout<<"the value of a>=b is "<< (a>=b)<<endl;
cout<<"the value of a<=b is "<< (a<=b)<<endl;
cout<<"the value of a>b is "<< (a>b)<<endl;
cout<<"the value of a<b is "<< (a<b)<<endl;

cout<<endl;
// bitwise operators are covered in later videos
// logical operators
cout<< "following are the types of logical  operators "<<endl;
cout<<"the value of this logical and operator ((a==b) && (a<b)) is "<<( (a==b) && (a<b)) <<endl;
cout<<"the value of this logical or operator ((a==b) || (a<b)) is "<<( (a==b) || (a<b)) <<endl;
cout<<"the value of this logical not operator (!(a==b)) is "<<( !(a==b)) <<endl;

return 0;
}