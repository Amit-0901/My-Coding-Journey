#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        vector<int> ans(2, -1);

        if (nums.empty())
            return ans;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {

                int left = mid;
                int right = mid;

                while (left >= 0 && nums[left] == target)
                    left--;

                while (right < nums.size() && nums[right] == target)
                    right++;

                ans[0] = left + 1;
                ans[1] = right - 1;

                return ans;
            }

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return ans;
    }
};
int main(){
     vector<int> nums = {3, 5, 8, 9,9, 15, 19};  
     int target = 9;
     Solution s;
     vector<int> answer = s.searchRange( nums,  target);
     for(int i = 0 ; i<answer.size() ; i++){
         cout<< answer[i] <<" ";                    
     }  
    return 0;
}