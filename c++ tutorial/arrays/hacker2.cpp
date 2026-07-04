#include<iostream>
using namespace std;
int main(){
    int a[3];
    int b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    int c=0;
    int d=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c++;
        }
    if(a[i]<b[i]){
        d++;
    }
    }
    cout<<c<<" "<<d;
}


