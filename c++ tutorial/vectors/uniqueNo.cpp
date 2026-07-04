#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,2,3,4,1};
    int size = 7;
    for (int i=0; i<size; i++){
        for(int j = i+1; j<size;j++){
            if(a[i] == a[j]){
                a[i] == a[j] == -1;
            }
            
            }
        }
        int unique =0;

    for(int i=0; i<size;i++){
        if(a[i]>0){
            unique = a[i];
            
        }
    }
cout<<unique<<endl;

    return 0;
}