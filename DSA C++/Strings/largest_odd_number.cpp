#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
int main(){
    // string s = "12345";
    // cout<<s.length()<<endl;
    // cout<<s[2]<<endl;
    // cout<<s<<endl;

    string num = "396";
      if(num[num.size()-1] % 2 != 0){
             cout<<"1";
        }
    else{
    for(int i = num.size() - 1 ; i>0; i--){
        if(num[i]%2 != 0){
       
             cout<<num.substr(0,i+1);
              
        }
        else{
            cout<<"not found"<<endl;
        }

    }  
}

   

    return 0;
}
