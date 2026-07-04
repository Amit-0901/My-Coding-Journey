#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    string contact;

    Person(string n,int a,string c){
        name=n;
        age=a;
        contact=c;
    }
};

class Doctor: public Person{
public:
    string specialization;

    Doctor(string n,int a,string c,string s):Person(n,a,c){
        specialization=s;
    }

    void displayDoctorDetails(){
        cout<<"Doctor:"<<name<<" Specialization:"<<specialization<<endl;
    }
};

class Patient: public Person{
public:
    Patient(string n,int a,string c):Person(n,a,c){}
};

class Appointment{
public:
    string date;

    void bookAppointment(){
        cout<<"Appointment booked\n";
    }

    void cancelAppointment(){
        cout<<"Appointment cancelled\n";
    }
};

class MedicalRecord{
public:
    virtual void generateReport()=0;
};

class Report: public MedicalRecord{
public:
    void generateReport(){
        cout<<"Medical Report Generated\n";
    }
};

int main(){
    Doctor d1("Dr.Sharma",45,"999999","Cardiologist");
    d1.displayDoctorDetails();
}