#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int daysRequired(vector<int>& weights, int capacity) {
        int days = 1;
        int currentWeight = 0;

        for(int i = 0; i < weights.size(); i++) {

            if(currentWeight + weights[i] <= capacity) {
                currentWeight += weights[i];
            }
            else {
                days++;
                currentWeight = weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());

        int high = 0;
        for(int x : weights) {
            high += x;
        }

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(daysRequired(weights, mid) <= days) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};