#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int target){
for(int i = 0; i<n ; i++ ){
    if(arr[i] == target ){
        return i;
    }
}
return -1 ;
}
int main(){
    int arr[] = { 1 , 2, 3 , 4, 5,6, 7,8, 9,10};
    int n = 10 ;
    int target ;
    cout<<"enter the target";
    cin>>target; 
    int result = linearsearch(arr , n , target);
  if( result != -1){
cout<<" element found at index : "<< result ;
  }
else {
    cout<< " element not found ";
}
    return 0;
}