#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        if(nums.empty())
            return -1;

        int low = 0;
        int high = nums.size() - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution a;

    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 6;

    int value = a.search(nums, target);

    cout << value;

    return 0;
}