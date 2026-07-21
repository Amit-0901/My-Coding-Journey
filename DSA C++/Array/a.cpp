#include<iostream>
using namespace std;
int main(){
int a[5] = {1,2,3,4,5};
int first = a[0];

for (int i = 0 ; i<5 -1 ; i++){
a[i] = a[i+1];
}
a[5-1] = first;
    
     for(int i = 0 ; i<5 ; i++){
    cout<<a[i];
  }  
    return 0;
}