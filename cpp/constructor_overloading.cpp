//write a program to display details of IT dept having data members no. of labs , no. of classroom, 
//college name , no. of faculty, having methods get_itinfo(), disp_itinfo()
//display the output as follows college name, no of faculty , no. of classrooms , no. of labs
#include<iostream>
using namespace std;

class College{
    public:
    string college_name;
int number_of_faculty;
int number_of_classroom;
int number_of_labs;
void get_ITinfo(){
    cout<<"enter college name ";
    cin>>college_name;
        cout<<"enter number of faculty ";

    cin>>number_of_faculty;
        cout<<"enter number of classroom ";

    cin>>number_of_classroom;
        cout<<"enter number of labs ";

    cin>>number_of_labs;
}
void disp_ITinfo(){
    cout<<"college details "<<endl;
    cout<<"college name is : "<<college_name<<endl;
    cout<<"number of faculty is : "<<number_of_faculty<<endl;
    cout<<"number of classroom is :"<<number_of_classroom<<endl;
    cout<<"number of labs is : "<<number_of_labs<<endl;
}
};
int main(){
    College c;
    c.get_ITinfo();
    c.disp_ITinfo();
}
