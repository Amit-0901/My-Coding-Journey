#include<iostream>
using namespace std;
void leftshiftarray(int arr[] , int size , int shift ){
for (int i = 0 ; i < shift ; i++){
    int first = arr[0];
    for(int j = 0 ; j< size -1; j++){
arr[j] = arr[j+1];
} 
arr[size - 1] = first;
}

 cout<<"shifted array is :";
for (int i = 0 ; i < size ; i++){
   
    cout<<arr[i];
}
}

int main(){
int arr[] = {1 , 2 , 3 , 4 , 5 ,6};
int size = sizeof(arr)/sizeof(arr[0]);
int shift = 2;
 leftshiftarray(arr ,size,shift);
    return 0;
}