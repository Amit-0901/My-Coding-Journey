//write a c++ program to copy content files to other text files 
//write a c++ program io count total number of word from file
// write ac++ program to count total number of line in a text file
//write a c+++ program to count umber og character in a file
//write a c++ program   
 
//1st program :
 #include<iostream>
 #include<fstream>

  using namespace std;
  int main(){
    ifstream f1("source.txt"); //for reading file
    ofstream f2("destination.txt"); //for writing file
   char ch;

    while(f1.get(ch))
     {
    f2.put(ch);
     }
    cout<<"file copied sucessfully"<<endl;
    f1.close();
    f2.close();  

// 2nd program :
    ifstream file("file.txt");
    string word;
    int count = 0;

    while(file >> word)
    {
        count++;
    }

    cout << "Total number of words = " << count;

    file.close();

    return 0;
 }
