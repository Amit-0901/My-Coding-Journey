#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int p=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    
    int maxheight= a[0];
    for(int i=1;i<n;i++){
        if(a[0]<=a[i]){
           
            a[i]== maxheight;
            
        }
    }
    for(int i=0 ; i<n; i++){
        if (a[i]== maxheight){
            p++;
        }
    }
    cout<<p<<endl;
   
  return 0;  
}

