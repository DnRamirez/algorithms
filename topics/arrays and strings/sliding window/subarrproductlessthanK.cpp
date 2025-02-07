/* Problem: Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
   Approach: Sliding window, constraint is product, numeric constraint is less than K. Count each valid subarray. 
   Time complexity: O(n) Left pointer can move n times, right pointer can move n times. At most we have 2n window iterations. Ammoritzed O(1) inside for loop.
*/

#include <iostream> 
using namespace std; 

  int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }

        int ans = 0;
        int left = 0; 
        int curr = 1;
        for (int right = 0; right < nums.size(); right++) {
            curr *= nums[right];
            while (curr >= k) {
                curr /= nums[left];
                left++;
            }
            
            ans += right - left + 1;
        }

        return ans;
}

int main() { 
    vector<int> arr; 
    arr.push_back(10);
    arr.push_back(5); 
    arr.push_back(2); 
    arr.push_back(6);  

    int answer = numSubarrayProductLessThanK(arr, 100); 
    cout << "Number of subarrays: " << answer << endl; 

    return 0; 
}