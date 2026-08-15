#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count(vector<int>& nums, int  mid){
        int counting = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
                counting += nums[i]/mid;
            
            if(nums[i]% mid != 0 ){
                counting ++ ;
            }
        }
        return counting ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 ;
        int high = *max_element(nums.begin() , nums.end());
       
        while(low< high){
            int mid = low + (high - low)/2;
            if(count(nums,mid) <= threshold){
                high = mid ;
            }
            else{
                low = mid + 1;
            }
        }
        return low ;
    }
};