#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> leader(vector<int>& nums){
     vector<int> ans;
     if(nums.size() == 0){
        return ans;
     }
     int max;
     max = nums[nums.size() - 1];
     ans.push_back(nums[nums.size() - 1]);
     for(int i = nums.size() - 2 ; i>= 0 ; i--){
        if(nums[i] > max){
            ans.push_back(nums[i]);
            max = nums[i];
        }       
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> ans = s.leader(nums);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}