#include<iostream>;
using namespace std;

int main(){
  int size = 6;
   
    int array[]= {1 ,2 ,3 ,4 ,10 ,11};
    int sum = 0;
    
    for( int i=0 ; i < size; i++){
        
        sum+= array[i];

    }
    
    cout<<sum<<endl;
       
    
   
    return 0;
}