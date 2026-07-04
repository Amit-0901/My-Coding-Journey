#include<iostream>
#include<vector>
using namespace std;

class Course{
public:
    int courseID;
    string courseName;
    int duration;
    string instructorName;

    Course(int id,string n,int d,string i){
        courseID=id;
        courseName=n;
        duration=d;
        instructorName=i;
    }

    void displayCourseDetails(){
        cout<<courseName<<" Instructor:"<<instructorName<<endl;
    }
};

class Student{
public:
    string name;
    vector<int> enrolledCourses;

    void enrollStudent(int courseID){
        for(int id:enrolledCourses){
            if(id==courseID){
                cout<<"Already enrolled\n";
                return;
            }
        }
        enrolledCourses.push_back(courseID);
        cout<<"Enrolled successfully\n";
    }
};

class Instructor{
public:
    string name;
};

class Content{
public:
    virtual void displayContent()=0;
};

class VideoLecture: public Content{
public:
    void displayContent(){
        cout<<"Displaying Video Lecture\n";
    }
};

class Quiz: public Content{
public:
    void displayContent(){
        cout<<"Displaying Quiz\n";
    }
};

class Assignment: public Content{
public:
    void displayContent(){
        cout<<"Displaying Assignment\n";
    }
};

int main(){
    Course c1(1,"C++",30,"Mr. Rao");
    c1.displayCourseDetails();

    Student s1;
    s1.enrollStudent(1);
}