#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int canMake(vector<int>& bloomDay, int mid, int k) {
        int count = 0;
        int conseqCount = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= mid) {
                conseqCount++;
            }
            else {
                conseqCount = 0;
            }

            if (conseqCount == k) {
                count++;
                conseqCount = 0;
            }
        }

        return count;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if (1LL* m * k > bloomDay.size())
            return -1;

        int start_day = 1;
        int max_day = *max_element(bloomDay.begin(), bloomDay.end());

        int result = -1;

        while (start_day <= max_day) {

            int mid = start_day + (max_day - start_day) / 2;

            if (canMake(bloomDay, mid, k) >= m) {
                result = mid;
                max_day = mid - 1;
            }
            else {
                start_day = mid + 1;
            }
        }

        return result;
    }
};