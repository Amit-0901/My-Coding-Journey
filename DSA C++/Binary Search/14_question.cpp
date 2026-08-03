#include <bits/stdc++.h>
using namespace std;
// using binary search
class Solution{
   public:
    int sqrt(int x){
        int left = 1;
        int right = x/2;
        int ans = 0;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(mid*mid <= x){
                ans = mid;
               left = mid +1;
            }
            else{
                
                 right = mid -1;
            }
        }
        return ans;
     }
};
int main(){
    Solution s;
    cout << s.sqrt(28) << endl;
    return 0;
}
