// Find the number that appears once, and the other numbers twice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count= 0;
    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i];
        }
    }
}

