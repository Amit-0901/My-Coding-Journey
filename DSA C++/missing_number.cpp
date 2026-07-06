//Find the Missing Number from an Array
#include<bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {1,2,3,4,6};

    int n = sizeof(nums)/sizeof(nums[0]);

    int k = 0;
    int sum_of_array = 0;

    for(int i = 0; i < n; i++) {
        sum_of_array += nums[i];

        if(nums[i] > k) {
            k = nums[i];
        }
    }

    int sum = k * (k + 1) / 2;

    cout << sum - sum_of_array;
}