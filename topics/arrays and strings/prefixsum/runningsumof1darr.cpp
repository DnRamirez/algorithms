/* problem: Given an array nums. We define running sum of an array as runningSum[i] = sum(nums[0]...nums[i]). Return the running sum of nums. 
*/
#include <iostream> 
#include <vector> 
using namespace std; 

vector<int> runningSum(vector<int>&nums) { 
    vector<int> prefixSum = {nums[0]}; // first element is nums[0]

    for (int i = 1; i < nums.size(); i++) { 
        prefixSum.push_back(prefixSum[i-1] + nums[i]); 
    }

    return prefixSum; 
}

int main() { 
    vector<int> nums = {1, 2, 3, 4}; 
    vector<int> ans = runningSum(nums); 

    cout << "Prefix sum of array is: "; 
    for (int i = 0; i < ans.size(); i++) { 
        cout << ans[i] << " "; 
    }

    return 0; 
}