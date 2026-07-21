#include<iostream>
using namespace std;
void leftshiftarray(int arr[] , int size , int shift ){
     int temp[size];
    for(int i=0;i<size;i++)
    {
        temp[i]=arr[(i+shift)%size];
    }

    for(int i=0;i<size;i++)
    {
        arr[i]=temp[i];
    }

 cout<<"shifted array is :";
for (int i = 0 ; i < size ; i++){
   
    cout<<arr[i];
}
}

int main(){
int arr[] = {1 , 2 , 3 , 4 , 5 ,6};
int size = sizeof(arr)/sizeof(arr[0]);
int shift = 3;
 leftshiftarray(arr ,size,shift);
    return 0;
}