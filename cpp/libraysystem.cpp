#include<iostream>
#include<vector>
using namespace std;

class LibraryItem {
private:
    int itemID;
    string title, author;
    bool available;

public:
    LibraryItem(int id,string t,string a){
        itemID=id;
        title=t;
        author=a;
        available=true;
    }

    void borrowItem(){
        if(available){
            available=false;
            cout<<"Item borrowed\n";
        }
        else{
            cout<<"Item not available\n";
        }
    }

    void returnItem(){
        available=true;
        cout<<"Item returned\n";
    }

    void display(){
        cout<<"ID:"<<itemID<<" Title:"<<title<<" Author:"<<author<<" Available:"<<available<<endl;
    }
};

class Book: public LibraryItem{
public:
    Book(int id,string t,string a):LibraryItem(id,t,a){}
};

class Magazine: public LibraryItem{
public:
    Magazine(int id,string t,string a):LibraryItem(id,t,a){}
};

class ResearchPaper: public LibraryItem{
public:
    ResearchPaper(int id,string t,string a):LibraryItem(id,t,a){}
};

class User{
public:
    int studentID;
    string name;
    int borrowedItems=0;

    User(int id,string n){
        studentID=id;
        name=n;
    }

    void borrow(){
        if(borrowedItems<3){
            borrowedItems++;
        }
        else{
            cout<<"Cannot borrow more than 3 items\n";
        }
    }
};

class LibrarySystem{
public:
    virtual void addItem()=0;
    virtual void removeItem()=0;
    virtual void displayItems()=0;
};

class UniversityLibrary: public LibrarySystem{
public:
    vector<string> items;

    void addItem(){
        items.push_back("New Item");
    }

    void removeItem(){
        if(!items.empty())
            items.pop_back();
    }

    void displayItems(){
        for(string i:items)
            cout<<i<<endl;
    }
};

int main(){
    Book b1(1,"C++","Bjarne");
    b1.display();
    b1.borrowItem();
}