#include <iostream>
using namespace std;
/*this is build in data types*/
int c = 45;

int  main(){
   
 int a,b,c;

    cout<<" the value of a is"<<endl;
    cin>>a; 
 cout<<"enter the valur of b"<<endl;
    cin>>b;
c = a+b ;
cout<<"the sum is "<<c<<endl;
cout<<"the global c is "<<::c;

cout<<endl;
cout<<endl;
cout<<endl;

/* float , double and long doulbe literals
f or F , l or L is used to define the variable it is float or long double respectively or it will take it as dobuble by default*/

 float  d = 3.14;
 long double e = 3.14;
 cout<<"the size of 3.14 is"<<sizeof(3.14)<<endl;
 cout<<"the size of 3.14 is"<<sizeof(3.14f)<<endl;
  cout<<"the size of 3.14 is"<<sizeof(3.14l)<<endl;
   cout<<"the size of 3.14 is"<<sizeof(3.14F)<<endl;
    cout<<"the size of 3.14 is"<<sizeof(3.14L)<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;

    /* referance variables 
    if we want to show 2 or mare than 2 variables are same we can use this*/
float x= 455 ;
float & y = x ;
cout<<x<<endl;
cout<<y<<endl;

cout<<endl;
cout<<endl;
cout<<endl;

/* typecasting 
it is used for converting one data type to another*/
 
int aa = 45;
float bb = 45.45;


cout<<"the value of aa is "<<(float)aa<<endl;
cout<<"the value of aa is "<<float(aa)<<endl;

cout<<"the value of bb is "<<(int)bb<<endl;
cout<<"the value of bb is "<<int(bb)<<endl;
int cc = int(bb);


cout<<"the expression is "<< aa+bb << endl;
cout<<"the expression is "<< aa+int(bb) << endl;
cout<<"the expression is "<< aa+(int)bb << endl;

    return 0;
}