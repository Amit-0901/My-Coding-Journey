#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array : ";
    cin>>n;
    int arr[5] = {5,8,4,3,0};
    int leader;
    leader= arr[5-1] ;
    int temp[5];
    temp[0] = leader;
    for(int i = 0 ; i<5-1 ; i++){
        if(arr[i] > leader && arr[i] > arr[] ){
            temp[i+1] = arr[i];
        }
    }
    for(int i = 0 ; i<5 ; i++){
        cout<<temp[i];
    }
    
}