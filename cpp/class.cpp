#include<iostream>
using namespace std;


class student{
public:
string name;
int rollno;
int m1;
int m2;
int m3;
int m4;
int totalmarks;
void accept_data(){

    cout<<"enter student name ";
    cin>>name;
    cout<<"enter student roll no ";
    cin>>rollno;
cout<<"enter m1 ";
cin>>m1;
cout<<"enter m2 ";
cin>>m2;
cout<<"enter m3 ";
cin>>m3;
cout<<"enter m4 ";
cin>>m4;
}
void total_marks(){
    totalmarks= m1+m2+m3+m4;
    cout<<"total marks is "<<totalmarks<<endl;
}
void display_data(){
    cout<<"name of student "<<name<<endl;
        cout<<"roll no of student "<<rollno<<endl;
    cout<<"m1 of student "<<m1<<endl;
    cout<<"m2 of student "<<m2<<endl;
    cout<<"m3 of student "<<m3<<endl;
    cout<<"m4 of student "<<m4<<endl;

}

};
int main()
{
    student s;
    s.accept_data();
    s.total_marks();
    s.display_data();
  
    
return 0;

}