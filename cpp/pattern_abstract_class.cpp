#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw() = 0; // pure virtual function

};
class pattern : public shape{
    public:
    void draw(){
        //cout<<"draw a circle";
        int n;
        cin>>n;
        int i = 1;
        char ch = 'a';
        while(i<=n){
int j = 1;
while(j<= i){
    cout<<ch<<" ";
   ch++;
    j++;
}
            cout<<endl;
            i++;
        }
    }
   
};
int main(){
    //shape s; object of abtract class not possible to create
    shape*s=new pattern();
    s->draw(); // output draw a circle
    delete s;
//circle c;
//c.draw();

}
//write a program to print this pattern using abstract class 
// a
// b c
// d e f