#include <iostream> 
#include <vector>
#include <unordered_map>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) { 
    unordered_map<int, int> dic; 
    for (int i = 0; i < nums.size(); i++) { 
         int num = nums[i]; 
         int complement = target - num; 
         if (dic.find(complement) != dic.end()) { 
             return {dic[complement], i}; 
         }
         dic[num] = i;
    }
    return {-1, -1};
}


int main() { 
     vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++) { 
        cout << result[i] << " "; 
    }

    return 0; 
}