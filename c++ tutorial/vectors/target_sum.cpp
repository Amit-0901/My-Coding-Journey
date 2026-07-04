#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
int targetsum = 5;
int p=0;


for(int i=0;i<n;i++){
    cin>>a[i];
    }
for(int i=0;i<n;i++){
    for(int j = i+1; j< n; j++){
        // for 3 numbers to target we use 3 loops
        if(a[i]+a[j] == targetsum){
            p++;
        }  
      }
}

cout<<p;

    return 0;
}