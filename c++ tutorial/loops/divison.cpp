#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    float p=0;
    float ne=0;
    float z=0;
    
    for(int i=0; i<n;i++){
        cin>>a[i];
       if(a[i]>0){
        p++;
       }
       else if (a[i]<0){
        ne++;
       }
       else { z ++;}
    }
    float d= p/n;
    float g= ne/n;
    float h= z/n;
cout<<d<<endl;
cout<<g<<endl;
cout<<h<<endl;
    return 0;
}
