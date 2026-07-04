#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    cout<<" enter x: "<< endl;
    int x;
    cin>>x;
    
    int a=0;
    for(int elem:v){
        if(elem>x){
            a++;
        }
        
    }
cout<<a<<endl;


    return 0;
}