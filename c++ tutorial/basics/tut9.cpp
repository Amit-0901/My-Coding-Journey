#include <iostream>
using namespace std;
int main(){
int age ;
cout<<"tell me your age: ";
cin>>age;

if( age<18)
{ cout<<"you are not invited in the party"<<endl;
}
else if ( age == 18){
    cout<<"you will get kids pass"<<endl;
}
else if ( age > 65){
    cout<<"sit at your home "<<endl;
}
else 
{
    cout<<"you are invited in the party"<<endl;
}
return 0;

// switch 
  switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;

}