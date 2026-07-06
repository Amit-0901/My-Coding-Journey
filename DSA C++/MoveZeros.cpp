//Move all Zeros to the end of the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,0,4,5,0,-1,0,3};
    int n = sizeof(a)/sizeof(a[0]);
    int j = 0;
    for(int i = 0 ; i<n ; i++){
       if(a[i] != 0){
           swap(a[i],a[j]); 
j++    ;   
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }

}