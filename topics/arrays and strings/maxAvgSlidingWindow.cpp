#include <iostream>
#include <vector> 
using namespace std; 

double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0; 
        double ans = 0; 
        for (int i=0; i < k; i++) { 
        curr += nums[i]; 
        }
        
        ans = curr / k; 
        for (int i = k; i < nums.size(); i++) { 
        curr += nums[i] - nums[i-k]; 
        ans = max(ans, curr / k); 
        }
        return ans; 
    }

int main() { 
    vector<int> nums; 
    nums.push_back(1);
    nums.push_back(12);
    nums.push_back(-5);
    nums.push_back(-6);
    nums.push_back(50);
    nums.push_back(3); 
    int k = 4; 
    int answer = findMaxAverage(nums, k); 
    cout << "Max average in array: " << answer << endl; 
}