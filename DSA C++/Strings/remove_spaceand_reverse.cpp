#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        bool space = false;
        for(char ch : s){
            if(ch != ' '){
                ans += ch;
                space = false;
            }
            else{
                if(!space && !ans.empty()){
                    ans += ' ';
                    space = true;
                }
            }
           
        }
         if(!ans.empty() && ans.back() == ' '){
                ans.pop_back();
            }
        reverse(ans.begin(),ans.end());
        int start = 0;

for (int end = 0; end <= ans.length(); end++) {
    if (end == ans.length() || ans[end] == ' ') {
        reverse(ans.begin() + start, ans.begin() + end);
        start = end + 1;
    }
}
        return ans;
    }
};