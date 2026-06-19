#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> nums, int k){
    int i = 0,sum = 0, size = 0, maxm = 0;
    vector<int> temp;
    for(int j=i; j<nums.size(); j++){
        sum += nums[j];
        temp.push_back(nums[j]);
        i++;
        if(sum == k){
            size = temp.size();
            maxm = max(maxm, size);
        }
        if(sum > k){
            break;
        }
    }
return maxm;
}

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int longestSubarrayLength = longestSubarray(nums, k);
    cout << "The length of longest Subarray with sum " << k <<" is: " << longestSubarrayLength;

    return 0;
}