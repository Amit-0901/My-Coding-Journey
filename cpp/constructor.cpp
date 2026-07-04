#include<iostream>
using namespace std;
class student{

    public :
    int rollno ;
student(int r){
    rollno = r;
}
// copy constructor
student(const student &s){
    rollno = s.rollno;
}
};
int main(){
    student s1(20);
    student s2 = s1;
    cout<<s2.rollno;
    return 0;
}