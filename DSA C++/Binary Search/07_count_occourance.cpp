#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] == target) {

                int count = 1;

                int left = mid - 1;
                int right = mid + 1;

                while (left >= 0 && nums[left] == target) {
                    count++;
                    left--;
                }

                while (right < nums.size() && nums[right] == target) {
                    count++;
                    right++;
                }

                return count;
            }

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return 0;
    }
};

int main() {
    vector<int> nums = {3,5,8,9,9,9,9,15,19};

    Solution s;

    cout << s.countOccurrences(nums, 9);
}