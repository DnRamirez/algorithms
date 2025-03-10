/* Problem: Given an integer array nums and an integer k, find the number of subarrays whose sum is equal to k.
*/
#include <iostream> 
#include <vector> 
#include <unordered_map>
using namespace std; 

int findSubarrays(vector<int> nums, int k) { 
    unordered_map<int, int> counts; 
    counts[0] = 1; 
    int ans = 0; 
    int curr = 0; 

    for (int i = 0; i < nums.size(); i++) { 
        curr += nums[i]; // current prefix sum 
        ans += counts[curr-k]; // restriction: we can find what prefix sum plus curr = k
        counts[curr]++; // frequencies of each prefix sum 
    }

    return ans; 
}

int main() { 
    vector<int> nums = {1, 2, 1, 2, 1}; 
    int k = 3; 

    cout << findSubarrays(nums, k); 

    return 0; 
}