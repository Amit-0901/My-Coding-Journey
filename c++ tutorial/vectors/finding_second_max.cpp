#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max = INT_MIN;

    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];

        }   
     }
     int sec_max = INT_MIN;
     for(int i=0; i<n;i++){
        if( a[i]>sec_max && a[i] != max){
            sec_max = a[i];
        }
     }
cout<<sec_max<<endl;

    return 0;
}