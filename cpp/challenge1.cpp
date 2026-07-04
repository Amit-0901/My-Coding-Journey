/*1.Smart Library Management System
A university wants to automate its library system using Object-Oriented Programming.
Requirements

'amit 
3.	Implement:
o	Constructors for initializing objects.
o	Private attributes and public methods for accessing them.
o	A method borrowItem() that checks availability.
o	A method returnItem() that updates the item status.
4.	Create a User class with data memebrs
o	studentID
o	name
o	borrowedItems list
5.	Use abstraction to define an abstract class LibrarySystem with abstract methods:
o	addItem()
o	removeItem()
o	displayItems()
6.	Implement these methods in a derived class UniversityLibrary.
Challenge
•	Prevent a student from borrowing more than 3 items at once.
•	Handle cases where the requested book is not available.
*/
#include<iostream>
using namespace std;
class LibraryItem{
    protected:
int itemid;
string title;
string author;
string availability_status;
};

class Book : public LibraryItem{

};
class Magzine : public LibraryItem{

};
class ResearchPaper : public LibraryItem{

};
