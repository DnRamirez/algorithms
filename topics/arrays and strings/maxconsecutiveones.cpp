/*  Problem: You are given a binary string s (a string containing only "0" and "1"). You may choose up to k 0s and flip it to a "1". What is the length of the longest substring achievable that contains only "1"?
    Time complexity: O(n) the for loop iterates over n items. The while loop is ammoritzed O(1). While loop can only iterate n times. 
    Approach: Sliding window, our constraint is k. Numeric constraint is that k can not be greater than 0 at any point in time.
*/

#include <iostream> 
using namespace std; 

 int longestOnes(vector<int>& nums, int k) {
        int ans = 0; 
        int left = 0; 
        int curr = 0; 

        for (int right = 0; right < nums.size(); right++) { 
            if (nums[right] == 0) { 
                curr += 1; 
            }

            while (curr > k) { 
                if (nums[left] == 0) { 
                    curr -= 1; 
                }
                left += 1; 
            }
            ans = max(ans, right - left + 1); 
        }
        return ans;
    }

int main() { 
    vector<int> s = {1,1,1,0,0,0,1,1,1,1,0}; 
    int length = longestOnes(s, 2); 
    cout << "Length of longest substring that contains only '1's is: " << length << endl; 

    return 0; 
}